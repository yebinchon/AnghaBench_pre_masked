
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* grealloc ) (void*,size_t,char const*,int) ;} ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (void*,size_t,char const*,int) ;

__attribute__((used)) static void *FUNC_1(void *VAR_1, size_t VAR_2, const char *VAR_3, int VAR_4)
{

 return (VAR_2 > 100) ? ((void*)0) : VAR_0.grealloc(VAR_1, VAR_2, VAR_3, VAR_4);
}
