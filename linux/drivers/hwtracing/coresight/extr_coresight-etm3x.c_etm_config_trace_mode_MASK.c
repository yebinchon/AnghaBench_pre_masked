
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etm_config {int mode; int enable_ctrl2; int* addr_val; int* addr_acctype; void** addr_type; int enable_ctrl1; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct etm_config *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_6 = VAR_4->mode;

 VAR_6 &= (VAR_2 | VAR_3);


 if (VAR_6 == (VAR_2 | VAR_3))
  return;


 if (!(VAR_6 & VAR_2) && !(VAR_6 & VAR_3))
  return;

 VAR_5 = (1 << 0 |
   3 << 3 |
   0 << 5 |
   0 << 7 |
   0 << 8);


 VAR_4->enable_ctrl2 = 0x0;


 VAR_4->enable_ctrl1 = VAR_0;
 VAR_5 |= (0 << 12 | 1 << 10);

 if (VAR_6 & VAR_3) {

  VAR_5 |= (1 << 13 | 0 << 11);
 } else {

  VAR_5 |= (1 << 13 | 1 << 11);
 }






 VAR_4->addr_val[0] = (u32) 0x0;
 VAR_4->addr_val[1] = (u32) ~0x0;
 VAR_4->addr_acctype[0] = VAR_5;
 VAR_4->addr_acctype[1] = VAR_5;
 VAR_4->addr_type[0] = VAR_1;
 VAR_4->addr_type[1] = VAR_1;
}
