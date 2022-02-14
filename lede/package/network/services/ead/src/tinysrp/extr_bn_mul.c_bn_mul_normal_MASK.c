
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int FUNC_0 (int *,int *,int,int ) ;
 int FUNC_1 (int *,int *,int,int ) ;
 int FUNC_2 (char*,int,int) ;

void FUNC_3(BN_ULONG *VAR_0, BN_ULONG *VAR_1, int VAR_2, BN_ULONG *VAR_3, int VAR_4)
 {
 BN_ULONG *VAR_5;





 if (VAR_2 < VAR_4)
  {
  int VAR_6;
  BN_ULONG *VAR_7;

  VAR_6=VAR_2; VAR_2=VAR_4; VAR_4=VAR_6;
  VAR_7=VAR_1; VAR_1=VAR_3; VAR_3=VAR_7;

  }
 VAR_5= &(VAR_0[VAR_2]);
 VAR_5[0]=FUNC_1(VAR_0,VAR_1,VAR_2,VAR_3[0]);

 for (;;)
  {
  if (--VAR_4 <= 0) return;
  VAR_5[1]=FUNC_0(&(VAR_0[1]),VAR_1,VAR_2,VAR_3[1]);
  if (--VAR_4 <= 0) return;
  VAR_5[2]=FUNC_0(&(VAR_0[2]),VAR_1,VAR_2,VAR_3[2]);
  if (--VAR_4 <= 0) return;
  VAR_5[3]=FUNC_0(&(VAR_0[3]),VAR_1,VAR_2,VAR_3[3]);
  if (--VAR_4 <= 0) return;
  VAR_5[4]=FUNC_0(&(VAR_0[4]),VAR_1,VAR_2,VAR_3[4]);
  VAR_5+=4;
  VAR_0+=4;
  VAR_3+=4;
  }
 }
