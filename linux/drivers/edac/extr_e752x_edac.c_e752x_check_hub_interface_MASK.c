
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct e752x_error_info {int hi_ferr; int hi_nerr; } ;


 int FUNC_0 (int,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct e752x_error_info *VAR_0,
    int *VAR_1, int VAR_2)
{
 u8 VAR_3;



 VAR_3 = VAR_0->hi_ferr;

 if (VAR_3 & 0x7f) {
  VAR_3 &= 0x7f;

  if (VAR_3 & 0x2b)
   FUNC_0(1, VAR_3 & 0x2b, VAR_1, VAR_2);

  if (VAR_3 & 0x54)
   FUNC_0(0, VAR_3 & 0x54, VAR_1, VAR_2);
 }


 VAR_3 = VAR_0->hi_nerr;

 if (VAR_3 & 0x7f) {
  VAR_3 &= 0x7f;

  if (VAR_3 & 0x2b)
   FUNC_0(1, VAR_3 & 0x2b, VAR_1, VAR_2);

  if (VAR_3 & 0x54)
   FUNC_0(0, VAR_3 & 0x54, VAR_1, VAR_2);
 }
}
