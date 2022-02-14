
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int git_status_t ;
struct TYPE_9__ {int id; int flags; int size; int mode; int path; } ;
struct TYPE_8__ {int id; int flags; int size; int mode; int path; } ;
struct TYPE_10__ {int status; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
struct TYPE_11__ {int new_src; int old_src; } ;
typedef TYPE_4__ git_diff ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int *,TYPE_4__*,int ,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static unsigned int FUNC_3(
 git_diff *VAR_11, git_diff_delta *VAR_12)
{
 git_status_t VAR_13 = VAR_3;

 switch (VAR_12->status) {
 case 137:
 case 135:
 case 128:
  VAR_13 = VAR_7;
  break;
 case 129:
  VAR_13 = VAR_10;
  break;
 case 134:
  VAR_13 = VAR_5;
  break;
 case 132:
  VAR_13 = VAR_6;
  break;
 case 133:
  VAR_13 = VAR_4;
  break;
 case 131:
  VAR_13 = VAR_8;

  if (!FUNC_1(&VAR_12->old_file.id, &VAR_12->new_file.id)) {



   if (FUNC_2(&VAR_12->old_file.id) &&
    VAR_11->old_src == VAR_1 &&
    !FUNC_0(
     &VAR_12->old_file.id, VAR_11, VAR_12->old_file.path,
     VAR_12->old_file.mode, VAR_12->old_file.size))
   VAR_12->old_file.flags |= VAR_0;

   if (FUNC_2(&VAR_12->new_file.id) &&
    VAR_11->new_src == VAR_1 &&
    !FUNC_0(
     &VAR_12->new_file.id, VAR_11, VAR_12->new_file.path,
     VAR_12->new_file.mode, VAR_12->new_file.size))
    VAR_12->new_file.flags |= VAR_0;

   if (!FUNC_1(&VAR_12->old_file.id, &VAR_12->new_file.id))
    VAR_13 |= VAR_6;
  }
  break;
 case 130:
  VAR_13 = VAR_9;
  break;
 case 136:
  VAR_13 = VAR_2;
  break;
 default:
  break;
 }

 return VAR_13;
}
