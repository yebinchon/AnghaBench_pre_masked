
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct komeda_pipeline {int dummy; } ;
struct komeda_component {int dummy; } ;


 int FUNC_0 (unsigned long*,int) ;
 struct komeda_component* FUNC_1 (struct komeda_pipeline*,int) ;

struct komeda_component *
FUNC_2(struct komeda_pipeline *VAR_0,
        u32 VAR_1)
{
 struct komeda_component *VAR_2 = ((void*)0);
 int VAR_3;

 VAR_3 = FUNC_0((unsigned long *)&VAR_1, 32);
 if (VAR_3 < 32)
  VAR_2 = FUNC_1(VAR_0, VAR_3);

 return VAR_2;
}
