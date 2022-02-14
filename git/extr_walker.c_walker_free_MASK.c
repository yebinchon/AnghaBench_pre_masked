
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walker {int (* cleanup ) (struct walker*) ;} ;


 int FUNC_0 (struct walker*) ;
 int FUNC_1 (struct walker*) ;

void FUNC_2(struct walker *VAR_0)
{
 VAR_0->cleanup(VAR_0);
 FUNC_0(VAR_0);
}
