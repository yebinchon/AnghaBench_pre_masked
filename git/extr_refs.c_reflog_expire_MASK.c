
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef int reflog_expiry_should_prune_fn ;
typedef int reflog_expiry_prepare_fn ;
typedef int reflog_expiry_cleanup_fn ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,struct object_id const*,unsigned int,int ,int ,int ,void*) ;
 int VAR_0 ;

int FUNC_2(const char *VAR_1, const struct object_id *VAR_2,
    unsigned int VAR_3,
    reflog_expiry_prepare_fn VAR_4,
    reflog_expiry_should_prune_fn VAR_5,
    reflog_expiry_cleanup_fn VAR_6,
    void *VAR_7)
{
 return FUNC_1(FUNC_0(VAR_0),
      VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5,
      VAR_6, VAR_7);
}
