
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int seq; int tx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (int ,void*,int) ;
 int FUNC_3 (char*,int) ;

void FUNC_4(struct params *VAR_2, void *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2->tx, VAR_3, VAR_4);
 if (VAR_5 == -1) {
  if (VAR_1 == VAR_0)
   FUNC_3("inject(len %d)", VAR_4);
  else
   FUNC_0(1, "inject(len %d)", VAR_4);
 } else if (VAR_5 != VAR_4)
  FUNC_1(1, "injected %d but only %d sent", VAR_5, VAR_4);
 VAR_2->seq++;
}
