
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int *,int *) ;
 unsigned int FUNC_2 () ;

void FUNC_3(void)
{
 unsigned int VAR_4;

 switch (FUNC_0()) {
 case 136:
 case 135:
 case 134:
 case 138:
 case 137:
 case 132:
 case 129:
 case 131:
 case 128:
 case 133:
 case 130:
  VAR_4 = FUNC_2();

  if (VAR_4 & (1<<24)) {
   FUNC_1("ISPRAM", 0x1c000000,
        &VAR_2, &VAR_3);
  }
  if (VAR_4 & (1<<23))
   FUNC_1("DSPRAM", 0x1c100000,
        &VAR_0, &VAR_1);
 }
}
