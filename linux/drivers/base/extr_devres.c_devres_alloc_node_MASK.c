
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devres {void* data; } ;
typedef int gfp_t ;
typedef int dr_release_t ;


 int VAR_0 ;
 struct devres* FUNC_0 (int ,size_t,int,int) ;
 scalar_t__ FUNC_1 (int) ;

void * FUNC_2(dr_release_t VAR_1, size_t VAR_2, gfp_t VAR_3, int VAR_4)
{
 struct devres *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3 | VAR_0, VAR_4);
 if (FUNC_1(!VAR_5))
  return ((void*)0);
 return VAR_5->data;
}
