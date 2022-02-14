
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {scalar_t__ state; int state_mutex; int up_completion; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct iser_conn*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct iscsi_endpoint *VAR_2, int VAR_3)
{
 struct iser_conn *VAR_4 = VAR_2->dd_data;
 int VAR_5;

 VAR_5 = FUNC_4(&VAR_4->up_completion,
             FUNC_1(VAR_3));

 if (VAR_5 == 0) {
  FUNC_2(&VAR_4->state_mutex);
  if (VAR_4->state == VAR_1 ||
      VAR_4->state == VAR_0)
   VAR_5 = -1;
  FUNC_3(&VAR_4->state_mutex);
 }

 FUNC_0("iser conn %p rc = %d\n", VAR_4, VAR_5);

 if (VAR_5 > 0)
  return 1;
 else if (!VAR_5)
  return 0;
 else
  return VAR_5;
}
