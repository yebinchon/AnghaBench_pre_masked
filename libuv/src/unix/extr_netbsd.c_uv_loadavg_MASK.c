
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loadavg {double fscale; scalar_t__* ldavg; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,struct loadavg*,size_t*,int *,int ) ;

void FUNC_1(double VAR_2[3]) {
  struct loadavg VAR_3;
  size_t VAR_4 = sizeof(VAR_3);
  int VAR_5[] = {VAR_0, VAR_1};

  if (FUNC_0(VAR_5, 2, &VAR_3, &VAR_4, ((void*)0), 0) == -1) return;

  VAR_2[0] = (double) VAR_3.ldavg[0] / VAR_3.fscale;
  VAR_2[1] = (double) VAR_3.ldavg[1] / VAR_3.fscale;
  VAR_2[2] = (double) VAR_3.ldavg[2] / VAR_3.fscale;
}
