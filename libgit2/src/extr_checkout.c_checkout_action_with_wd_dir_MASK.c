
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_iterator ;
typedef int git_index_entry ;
struct TYPE_8__ {int mode; } ;
struct TYPE_7__ {int mode; } ;
struct TYPE_9__ {int status; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
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
 int FUNC_2 (int*,int *,TYPE_3__ const*,int const*) ;
 int FUNC_3 (int *,int ,TYPE_3__ const*,int const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
 int *VAR_12,
 checkout_data *VAR_13,
 const git_diff_delta *VAR_14,
 git_iterator *VAR_15,
 const git_index_entry *VAR_16)
{
 *VAR_12 = VAR_0;

 switch (VAR_14->status) {
 case 128:
  FUNC_1(
   FUNC_3(VAR_13, VAR_4, VAR_14, ((void*)0)));
  FUNC_1(
   FUNC_3(VAR_13, VAR_5, ((void*)0), VAR_16));
  *VAR_12 = FUNC_0(VAR_3, VAR_9, VAR_8);
  break;
 case 132:
 case 130:
  if (VAR_14->old_file.mode == VAR_6)
                                                 ;
  else if (VAR_14->new_file.mode != VAR_7)
   *VAR_12 = FUNC_4(VAR_15) ?
    FUNC_0(VAR_2, VAR_1, VAR_9) :
    FUNC_0(VAR_3, VAR_9, VAR_1);
  break;
 case 131:
  if (VAR_14->old_file.mode != VAR_7)
   FUNC_1(
    FUNC_3(VAR_13, VAR_5, ((void*)0), VAR_16));
  break;
 case 129:
  if (VAR_14->old_file.mode == VAR_7) {






   *VAR_12 = FUNC_0(VAR_10, VAR_11, VAR_8);
  }
  else if (VAR_14->new_file.mode != VAR_7)

   *VAR_12 = FUNC_0(VAR_3, VAR_9, VAR_1);
  break;
 default:
  break;
 }

 return FUNC_2(VAR_12, VAR_13, VAR_14, VAR_16);
}
