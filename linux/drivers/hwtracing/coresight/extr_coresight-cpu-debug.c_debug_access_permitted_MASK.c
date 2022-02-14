
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_drvdata {int edprsr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct debug_drvdata *VAR_2)
{

 if (!(VAR_2->edprsr & VAR_1))
  return 0;


 if (VAR_2->edprsr & VAR_0)
  return 0;

 return 1;
}
