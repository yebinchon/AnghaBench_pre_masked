
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ level; } ;
typedef TYPE_1__ backend_internal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(void **VAR_2, void *VAR_3)
{
 backend_internal **VAR_4 = (backend_internal **)VAR_2;

 FUNC_0(VAR_3);

 FUNC_1(VAR_1, "there already exists a configuration for the given level (%i)", (int)(*VAR_4)->level);
 return VAR_0;
}
