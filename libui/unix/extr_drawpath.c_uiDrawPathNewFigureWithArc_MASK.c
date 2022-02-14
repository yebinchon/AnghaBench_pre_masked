
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiDrawPath ;
struct piece {double* d; int b; int type; } ;


 int FUNC_0 (int *,struct piece*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(uiDrawPath *VAR_2, double VAR_3, double VAR_4, double VAR_5, double VAR_6, double VAR_7, int VAR_8)
{
 struct piece VAR_9;

 if (VAR_7 > 2 * VAR_1)
  VAR_7 = 2 * VAR_1;
 VAR_9.type = VAR_0;
 VAR_9.d[0] = VAR_3;
 VAR_9.d[1] = VAR_4;
 VAR_9.d[2] = VAR_5;
 VAR_9.d[3] = VAR_6;
 VAR_9.d[4] = VAR_7;
 VAR_9.b = VAR_8;
 FUNC_0(VAR_2, &VAR_9);
}
