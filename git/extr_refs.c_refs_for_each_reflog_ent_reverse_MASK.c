
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_store {TYPE_1__* be; } ;
typedef int each_reflog_ent_fn ;
struct TYPE_2__ {int (* for_each_reflog_ent_reverse ) (struct ref_store*,char const*,int ,void*) ;} ;


 int FUNC_0 (struct ref_store*,char const*,int ,void*) ;

int FUNC_1(struct ref_store *VAR_0,
         const char *VAR_1,
         each_reflog_ent_fn VAR_2,
         void *VAR_3)
{
 return VAR_0->be->for_each_reflog_ent_reverse(VAR_0, VAR_1,
           VAR_2, VAR_3);
}
