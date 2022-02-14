
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
struct TYPE_13__ {int status; int flags; int similarity; TYPE_1__ new_file; } ;
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
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *,size_t) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__ const*,size_t,void**) ;

__attribute__((used)) static bool FUNC_4(
 git_diff *VAR_6,
 const git_diff_find_options *VAR_7,
 size_t VAR_8,
 void **VAR_9)
{
 git_diff_delta *VAR_10 = FUNC_2(&VAR_6->deltas, VAR_8);


 if (!FUNC_1(VAR_10->new_file.mode))
  return 0;




 switch (VAR_10->status) {
 case 129:
 case 132:
 case 131:
 case 133:
  return 0;

 case 130:
  if (!FUNC_0(VAR_7, VAR_3) &&
   !FUNC_0(VAR_7, VAR_2))
   return 0;

  if (FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9) < 0)
   return 0;

  if (FUNC_0(VAR_7, VAR_0) &&
   VAR_10->similarity < VAR_7->break_rewrite_threshold) {
   VAR_10->flags |= VAR_5;
   break;
  }
  if (FUNC_0(VAR_7, VAR_2) &&
   VAR_10->similarity < VAR_7->rename_from_rewrite_threshold) {
   VAR_10->flags |= VAR_5;
   break;
  }

  return 0;

 case 128:
  if (!FUNC_0(VAR_7, VAR_1))
   return 0;
  break;

 default:
  break;
 }

 VAR_10->flags |= VAR_4;
 return 1;
}
