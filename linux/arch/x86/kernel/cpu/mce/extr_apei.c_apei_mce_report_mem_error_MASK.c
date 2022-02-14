
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int bank; int status; int addr; int tsc; } ;
struct cper_sec_mem_err {int validation_bits; int physical_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mce*) ;
 int FUNC_1 (struct mce*) ;
 int FUNC_2 () ;

void FUNC_3(int VAR_8, struct cper_sec_mem_err *VAR_9)
{
 struct mce VAR_10;

 if (!(VAR_9->validation_bits & VAR_0))
  return;

 FUNC_1(&VAR_10);
 VAR_10.bank = -1;

 VAR_10.status = VAR_7 | VAR_4 | VAR_3 | 0x9f;

 if (VAR_8 >= VAR_2)
  VAR_10.status |= VAR_6;

 if (VAR_8 >= VAR_1) {
  VAR_10.status |= VAR_5;
  VAR_10.tsc = FUNC_2();
 }

 VAR_10.addr = VAR_9->physical_addr;
 FUNC_0(&VAR_10);
}
