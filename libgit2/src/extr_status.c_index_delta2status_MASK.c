
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int git_status_t ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_7__ {int status; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(const git_diff_delta *VAR_7)
{
 git_status_t VAR_8 = VAR_1;

 switch (VAR_7->status) {
 case 134:
 case 132:
  VAR_8 = VAR_4;
  break;
 case 131:
  VAR_8 = VAR_2;
  break;
 case 130:
  VAR_8 = VAR_3;
  break;
 case 129:
  VAR_8 = VAR_5;

  if (!FUNC_0(&VAR_7->old_file.id, &VAR_7->new_file.id))
   VAR_8 |= VAR_3;
  break;
 case 128:
  VAR_8 = VAR_6;
  break;
 case 133:
  VAR_8 = VAR_0;
  break;
 default:
  break;
 }

 return VAR_8;
}
