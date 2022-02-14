
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline {int dummy; } ;
struct komeda_component {int dummy; } ;


 struct komeda_component** FUNC_0 (struct komeda_pipeline*,int) ;

struct komeda_component *
FUNC_1(struct komeda_pipeline *VAR_0, int VAR_1)
{
 struct komeda_component **VAR_2 = ((void*)0);
 struct komeda_component *VAR_3 = ((void*)0);

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_3 = *VAR_2;

 return VAR_3;
}
