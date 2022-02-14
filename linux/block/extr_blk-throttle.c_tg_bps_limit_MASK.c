
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct throtl_grp {scalar_t__** bps; scalar_t__** iops; struct throtl_data* td; } ;
struct throtl_data {size_t limit_index; } ;
struct blkcg_gq {TYPE_2__* blkcg; int parent; } ;
struct TYPE_3__ {int children; } ;
struct TYPE_4__ {TYPE_1__ css; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 struct blkcg_gq* FUNC_3 (struct throtl_grp*) ;
 scalar_t__ FUNC_4 (scalar_t__,struct throtl_data*) ;

__attribute__((used)) static uint64_t FUNC_5(struct throtl_grp *VAR_5, int VAR_6)
{
 struct blkcg_gq *VAR_7 = FUNC_3(VAR_5);
 struct throtl_data *VAR_8;
 uint64_t VAR_9;

 if (FUNC_0(VAR_4) && !VAR_7->parent)
  return VAR_3;

 VAR_8 = VAR_5->td;
 VAR_9 = VAR_5->bps[VAR_6][VAR_8->limit_index];
 if (VAR_9 == 0 && VAR_8->limit_index == VAR_0) {

  if (!FUNC_1(&VAR_7->blkcg->css.children) ||
      VAR_5->iops[VAR_6][VAR_8->limit_index])
   return VAR_3;
  else
   return VAR_2;
 }

 if (VAR_8->limit_index == VAR_1 && VAR_5->bps[VAR_6][VAR_0] &&
     VAR_5->bps[VAR_6][VAR_0] != VAR_5->bps[VAR_6][VAR_1]) {
  uint64_t VAR_10;

  VAR_10 = FUNC_4(VAR_5->bps[VAR_6][VAR_0], VAR_8);
  VAR_9 = FUNC_2(VAR_5->bps[VAR_6][VAR_1], VAR_10);
 }
 return VAR_9;
}
