
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_index_entry ;
struct TYPE_5__ {int status; } ;
typedef TYPE_1__ git_diff_delta ;
typedef int checkout_data ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int*,int *,TYPE_1__ const*,int const*) ;
 int FUNC_3 (int *,int ,TYPE_1__ const*,int const*) ;

__attribute__((used)) static int FUNC_4(
 int *VAR_7,
 checkout_data *VAR_8,
 const git_diff_delta *VAR_9,
 const git_index_entry *VAR_10)
{
 *VAR_7 = VAR_0;

 switch (VAR_9->status) {
 case 128:

  FUNC_1(
   FUNC_3(VAR_8, VAR_3, VAR_9, VAR_10) );
  *VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_4);
  break;
 case 132:
 case 130:
  *VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_1);
  break;
 case 131:
  *VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_1);
  break;
 case 129:

  *VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_1);
  break;
 default:
  break;
 }

 return FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10);
}
