
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* gmalloc ) (size_t,char const*,int) ;} ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (size_t,char const*,int) ;

__attribute__((used)) static void *FUNC_1(size_t VAR_1, const char *VAR_2, int VAR_3)
{

 return (VAR_1 > 100) ? ((void*)0) : VAR_0.gmalloc(VAR_1, VAR_2, VAR_3);
}
