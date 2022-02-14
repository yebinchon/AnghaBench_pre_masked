
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct repository {int dummy; } ;
struct diff_filepair {int done_skip_stat_unmatch; int skip_stat_unmatch_result; TYPE_1__* two; TYPE_1__* one; } ;
struct TYPE_5__ {scalar_t__ mode; scalar_t__ size; scalar_t__ oid_valid; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct repository*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct repository*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct repository *VAR_1,
         struct diff_filepair *VAR_2)
{
 if (VAR_2->done_skip_stat_unmatch)
  return VAR_2->skip_stat_unmatch_result;

 VAR_2->done_skip_stat_unmatch = 1;
 VAR_2->skip_stat_unmatch_result = 0;
 if (!FUNC_0(VAR_2->one) ||
     !FUNC_0(VAR_2->two) ||
     (VAR_2->one->oid_valid && VAR_2->two->oid_valid) ||
     (VAR_2->one->mode != VAR_2->two->mode) ||
     FUNC_2(VAR_1, VAR_2->one, VAR_0) ||
     FUNC_2(VAR_1, VAR_2->two, VAR_0) ||
     (VAR_2->one->size != VAR_2->two->size) ||
     !FUNC_1(VAR_1, VAR_2->one, VAR_2->two))
  VAR_2->skip_stat_unmatch_result = 1;
 return VAR_2->skip_stat_unmatch_result;
}
