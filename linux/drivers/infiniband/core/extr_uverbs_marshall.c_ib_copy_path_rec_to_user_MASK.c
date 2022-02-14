
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_path_rec {scalar_t__ rec_type; } ;
struct ib_user_path_rec {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ib_user_path_rec*,struct sa_path_rec*) ;
 int FUNC_1 (struct sa_path_rec*,struct sa_path_rec*) ;

void FUNC_2(struct ib_user_path_rec *VAR_1,
         struct sa_path_rec *VAR_2)
{
 struct sa_path_rec VAR_3;

 if (VAR_2->rec_type == VAR_0) {
  FUNC_1(&VAR_3, VAR_2);
  FUNC_0(VAR_1, &VAR_3);
  return;
 }
 FUNC_0(VAR_1, VAR_2);
}
