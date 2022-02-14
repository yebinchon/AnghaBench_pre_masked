
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_iterator ;
struct TYPE_12__ {int path; int mode; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_15__ {int mode; } ;
struct TYPE_14__ {int mode; } ;
struct TYPE_13__ {int status; TYPE_6__ new_file; TYPE_5__ old_file; } ;
typedef TYPE_2__ git_diff_delta ;
typedef int checkout_data ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int*,int *,TYPE_2__ const*,TYPE_1__ const*) ;
 int FUNC_3 (int *,TYPE_5__*,TYPE_6__*,TYPE_1__ const*) ;
 int FUNC_4 (int *,int ,TYPE_2__ const*,TYPE_1__ const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(
 int *VAR_13,
 checkout_data *VAR_14,
 const git_diff_delta *VAR_15,
 git_iterator *VAR_16,
 const git_index_entry *VAR_17)
{
 *VAR_13 = VAR_0;

 switch (VAR_15->status) {
 case 128:
  if (FUNC_3(VAR_14, &VAR_15->old_file, &VAR_15->new_file, VAR_17)) {
   FUNC_1(
    FUNC_4(VAR_14, VAR_5, VAR_15, VAR_17) );
   *VAR_13 = FUNC_0(VAR_4, VAR_12, VAR_8);
  }
  break;
 case 132:
  if (FUNC_5(VAR_16))
   *VAR_13 = FUNC_0(VAR_3, VAR_2, VAR_12);
  else
   *VAR_13 = FUNC_0(VAR_4, VAR_12, VAR_2);
  break;
 case 131:
  if (FUNC_3(VAR_14, &VAR_15->old_file, &VAR_15->new_file, VAR_17))
   *VAR_13 = FUNC_0(VAR_4, VAR_9, VAR_2);
  else
   *VAR_13 = FUNC_0(VAR_11, VAR_9, VAR_8);
  break;
 case 130:
  if (VAR_17->mode != VAR_6 &&
   FUNC_3(VAR_14, &VAR_15->old_file, &VAR_15->new_file, VAR_17))
   *VAR_13 = FUNC_0(VAR_4, VAR_12, VAR_2);
  else
   *VAR_13 = FUNC_0(VAR_11, VAR_12, VAR_8);
  break;
 case 129:
  if (VAR_15->old_file.mode == VAR_7) {
   if (VAR_17->mode == VAR_7)



    *VAR_13 = FUNC_0(VAR_11, VAR_12, VAR_8);
   else if (VAR_17->mode == VAR_6) {



    if (FUNC_6(VAR_14, VAR_17->path))
     *VAR_13 = FUNC_0(VAR_11, VAR_12, VAR_8);
    else
     *VAR_13 = FUNC_0(VAR_4, VAR_10, VAR_2);
   } else
    *VAR_13 = FUNC_0(VAR_4, VAR_9, VAR_2);
  }
  else if (FUNC_3(VAR_14, &VAR_15->old_file, &VAR_15->new_file, VAR_17))
   *VAR_13 = FUNC_0(VAR_4, VAR_10, VAR_2);
  else
   *VAR_13 = FUNC_0(VAR_11, VAR_10, VAR_8);


  if (VAR_15->new_file.mode == VAR_7)
   *VAR_13 = (*VAR_13 & ~VAR_1);
  break;
 default:
  break;
 }

 return FUNC_2(VAR_13, VAR_14, VAR_15, VAR_17);
}
