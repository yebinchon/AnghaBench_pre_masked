
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ base; } ;
struct module {TYPE_1__ init_layout; } ;



__attribute__((used)) static bool FUNC_0(const struct module *VAR_0, void *VAR_1)
{
 return (u64)VAR_1 - (u64)VAR_0->init_layout.base < VAR_0->init_layout.size;
}
