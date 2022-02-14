
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mode; } ;
struct TYPE_7__ {int status; TYPE_1__ new_file; } ;
typedef TYPE_2__ git_diff_delta ;
typedef int checkout_data ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int*,int *,TYPE_2__ const*,int *) ;
 int FUNC_2 (int *,int ,TYPE_2__ const*,int *) ;

__attribute__((used)) static int FUNC_3(
 int *VAR_9,
 checkout_data *VAR_10,
 const git_diff_delta *VAR_11)
{
 int VAR_12 = 0;

 *VAR_9 = VAR_0;

 switch (VAR_11->status) {
 case 128:
  VAR_12 = FUNC_2(VAR_10, VAR_2, VAR_11, ((void*)0));
  if (VAR_12)
   return VAR_12;
  *VAR_9 = FUNC_0(VAR_5, VAR_8, VAR_4);
  break;
 case 132:
  *VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_4);
  break;
 case 130:
  *VAR_9 = FUNC_0(VAR_5, VAR_8, VAR_1);
  break;
 case 129:
  if (VAR_11->new_file.mode == VAR_3)
   *VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_4);
  break;
 case 131:
  *VAR_9 = FUNC_0(VAR_7, VAR_6, VAR_4);
  break;
 default:
  break;
 }

 return FUNC_1(VAR_9, VAR_10, VAR_11, ((void*)0));
}
