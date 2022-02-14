
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int cs; int ip; int mcgstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mce *VAR_3)
{
 if ((VAR_3->cs & 3) == 3)
  return VAR_2;
 if (FUNC_1(VAR_3->mcgstatus) && FUNC_0(VAR_3->ip))
  return VAR_1;
 return VAR_0;
}
