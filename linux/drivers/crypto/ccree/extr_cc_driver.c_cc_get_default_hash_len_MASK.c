
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_drvdata {scalar_t__ hw_rev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

unsigned int FUNC_0(struct cc_drvdata *VAR_3)
{
 if (VAR_3->hw_rev >= VAR_0)
  return VAR_2;
 else
  return VAR_1;
}
