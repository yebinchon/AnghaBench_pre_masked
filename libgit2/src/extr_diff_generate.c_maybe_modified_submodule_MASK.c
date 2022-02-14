
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ git_submodule_ignore_t ;
typedef int git_submodule ;
typedef int git_oid ;
struct TYPE_10__ {scalar_t__ ignore_submodules; } ;
struct TYPE_11__ {int repo; TYPE_1__ opts; } ;
struct TYPE_14__ {TYPE_2__ base; } ;
typedef TYPE_5__ git_diff_generated ;
typedef int git_delta_t ;
struct TYPE_15__ {TYPE_4__* oitem; TYPE_3__* nitem; } ;
typedef TYPE_6__ diff_in_progress ;
struct TYPE_13__ {int id; } ;
struct TYPE_12__ {int path; } ;


 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (unsigned int*,int *,int *,int *,int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int ) ;

__attribute__((used)) static int FUNC_8(
 git_delta_t *VAR_6,
 git_oid *VAR_7,
 git_diff_generated *VAR_8,
 diff_in_progress *VAR_9)
{
 int VAR_10 = 0;
 git_submodule *VAR_11;
 unsigned int VAR_12 = 0;
 git_submodule_ignore_t VAR_13 = VAR_8->base.opts.ignore_submodules;

 *VAR_6 = VAR_1;

 if (FUNC_0(VAR_8, VAR_2) ||
  VAR_13 == VAR_4)
  return 0;

 if ((VAR_10 = FUNC_7(
   &VAR_11, VAR_8->base.repo, VAR_9->nitem->path)) < 0) {


  if (VAR_10 == VAR_3) {
   FUNC_2();
   VAR_10 = 0;
  }
  return VAR_10;
 }

 if (VAR_13 <= 0 && FUNC_6(VAR_11) == VAR_4)
                 ;
 else if ((VAR_10 = FUNC_4(
   &VAR_12, ((void*)0), ((void*)0), VAR_7, VAR_11, VAR_13)) < 0)
                          ;




 else if (!FUNC_1(VAR_12))
  *VAR_6 = VAR_0;


 else if ((VAR_12 & VAR_5) != 0 &&
  !FUNC_3(&VAR_9->oitem->id, VAR_7))
  *VAR_6 = VAR_0;

 FUNC_5(VAR_11);
 return VAR_10;
}
