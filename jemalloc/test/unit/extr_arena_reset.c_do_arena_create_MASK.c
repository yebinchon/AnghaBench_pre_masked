
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h ;
typedef int extent_hooks_t ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,void*,size_t*,void*,int) ;

__attribute__((used)) static unsigned
FUNC_2(extent_hooks_t *VAR_0) {
 unsigned VAR_1;
 size_t VAR_2 = sizeof(unsigned);
 FUNC_0(FUNC_1("arenas.create", (void *)&VAR_1, &VAR_2,
     (void *)(VAR_0 != ((void*)0) ? &VAR_0 : ((void*)0)), (VAR_0 != ((void*)0) ? sizeof(VAR_0) : 0)), 0,
     "Unexpected mallctl() failure");
 return VAR_1;
}
