
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* get_parent ) (char const*) ;} ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (char const*) ;

__attribute__((used)) static inline void *FUNC_1(const char *VAR_1)
{
 return VAR_0.get_parent ? VAR_0.get_parent(VAR_1) : ((void*)0);
}
