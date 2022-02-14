
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int * gr; int iir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_regs*,unsigned long) ;
 int * VAR_2 ;
 int FUNC_1 (char**,unsigned long*) ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct pt_regs*) ;

int FUNC_4(int VAR_4, int VAR_5,
  int VAR_6, char *VAR_7, char *VAR_8,
  struct pt_regs *VAR_9)
{
 unsigned long VAR_10;
 char *VAR_11 = VAR_7 + 1;

 switch (VAR_7[0]) {
 case 'D':
 case 'c':
 case 'k':
  VAR_2 = ((void*)0);
  VAR_3 = 0;

  if (FUNC_1(&VAR_11, &VAR_10))
   FUNC_0(VAR_9, VAR_10);
  else if (VAR_4 == 9 && VAR_9->iir ==
    VAR_0)
   FUNC_3(VAR_9);
  return 0;
 case 's':
  VAR_3 = 1;
  if (FUNC_1(&VAR_11, &VAR_10)) {
   FUNC_0(VAR_9, VAR_10);
  } else if (VAR_4 == 9 && VAR_9->iir ==
    VAR_0) {
   FUNC_3(VAR_9);
   FUNC_2(-1, 0);
  } else {
   FUNC_2(0, 0);
  }
  VAR_9->gr[0] |= VAR_1;
  return 0;

 }
 return -1;
}
