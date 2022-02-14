
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int rename_from_rewrite_threshold; int break_rewrite_threshold; } ;
typedef TYPE_2__ git_diff_find_options ;
struct TYPE_11__ {int mode; } ;
struct TYPE_13__ {int status; int flags; int similarity; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
struct TYPE_14__ {int deltas; } ;
typedef TYPE_4__ git_diff ;


 int FUNC_0 (TYPE_2__ const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *,size_t) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__ const*,size_t,void**) ;

__attribute__((used)) static bool FUNC_4(
 git_diff *VAR_9,
 const git_diff_find_options *VAR_10,
 size_t VAR_11,
 void **VAR_12)
{
 git_diff_delta *VAR_13 = FUNC_2(&VAR_9->deltas, VAR_11);


 if (!FUNC_1(VAR_13->old_file.mode))
  return 0;

 switch (VAR_13->status) {
 case 135:
 case 128:
 case 129:
 case 132:
 case 134:
  return 0;

 case 133:
 case 131:
  break;

 case 130:
  if (!FUNC_0(VAR_10, VAR_2))
   return 0;
  if (FUNC_0(VAR_10, VAR_3))
   VAR_13->flags |= VAR_7;
  break;

 default:

  if (FUNC_0(VAR_10, VAR_1))
   break;


  if (!FUNC_0(VAR_10, VAR_5) &&
   !FUNC_0(VAR_10, VAR_4))
   return 0;

  if (FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12) < 0)
   return 0;

  if (FUNC_0(VAR_10, VAR_0) &&
   VAR_13->similarity < VAR_10->break_rewrite_threshold) {
   VAR_13->flags |= VAR_8;
   break;
  }

  if (FUNC_0(VAR_10, VAR_4) &&
   VAR_13->similarity < VAR_10->rename_from_rewrite_threshold)
   break;

  return 0;
 }

 VAR_13->flags |= VAR_6;
 return 1;
}
