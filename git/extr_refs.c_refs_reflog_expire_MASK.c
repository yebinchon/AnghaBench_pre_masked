
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_store {TYPE_1__* be; } ;
struct object_id {int dummy; } ;
typedef int reflog_expiry_should_prune_fn ;
typedef int reflog_expiry_prepare_fn ;
typedef int reflog_expiry_cleanup_fn ;
struct TYPE_2__ {int (* reflog_expire ) (struct ref_store*,char const*,struct object_id const*,unsigned int,int ,int ,int ,void*) ;} ;


 int FUNC_0 (struct ref_store*,char const*,struct object_id const*,unsigned int,int ,int ,int ,void*) ;

int FUNC_1(struct ref_store *VAR_0,
         const char *VAR_1, const struct object_id *VAR_2,
         unsigned int VAR_3,
         reflog_expiry_prepare_fn VAR_4,
         reflog_expiry_should_prune_fn VAR_5,
         reflog_expiry_cleanup_fn VAR_6,
         void *VAR_7)
{
 return VAR_0->be->reflog_expire(VAR_0, VAR_1, VAR_2, VAR_3,
           VAR_4, VAR_5,
           VAR_6, VAR_7);
}
