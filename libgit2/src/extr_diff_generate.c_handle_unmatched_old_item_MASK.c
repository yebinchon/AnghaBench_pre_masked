
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_diff_generated ;
struct TYPE_12__ {int mode; } ;
struct TYPE_13__ {TYPE_1__ new_file; int status; } ;
typedef TYPE_2__ git_diff_delta ;
typedef int git_delta_t ;
struct TYPE_14__ {int old_iter; TYPE_4__* oitem; int new_iter; TYPE_4__* nitem; } ;
typedef TYPE_3__ diff_in_progress ;
struct TYPE_15__ {int mode; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,TYPE_4__*,int *) ;
 TYPE_2__* FUNC_4 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__**,int ) ;

__attribute__((used)) static int FUNC_8(
 git_diff_generated *VAR_6, diff_in_progress *VAR_7)
{
 git_delta_t VAR_8 = VAR_1;
 int VAR_9;


 if (FUNC_6(VAR_7->oitem))
  VAR_8 = VAR_0;

 if ((VAR_9 = FUNC_3(VAR_6, VAR_8, VAR_7->oitem, ((void*)0))) < 0)
  return VAR_9;




 if (FUNC_1(VAR_6, VAR_3) &&
  FUNC_5(VAR_6, VAR_7->nitem, VAR_7->oitem))
 {

  git_diff_delta *VAR_10 = FUNC_4(VAR_6, VAR_7->oitem);
  if (VAR_10) {
   VAR_10->status = VAR_2;
   VAR_10->new_file.mode = VAR_5;
  }





  if (FUNC_2(VAR_7->nitem->mode) &&
   FUNC_0(VAR_6, VAR_4))
   return FUNC_7(&VAR_7->nitem, VAR_7->new_iter);
 }

 return FUNC_7(&VAR_7->oitem, VAR_7->old_iter);
}
