
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {int state_mutex; int state; int release_work; scalar_t__ iscsi_conn; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iscsi_endpoint*) ;
 int FUNC_2 (struct iser_conn*) ;
 int FUNC_3 (struct iser_conn*) ;
 int FUNC_4 (char*,struct iscsi_endpoint*,struct iser_conn*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(struct iscsi_endpoint *VAR_3)
{
 struct iser_conn *VAR_4 = VAR_3->dd_data;

 FUNC_4("ep %p iser conn %p\n", VAR_3, VAR_4);

 FUNC_5(&VAR_4->state_mutex);
 FUNC_3(VAR_4);







 if (VAR_4->iscsi_conn) {
  FUNC_0(&VAR_4->release_work, VAR_1);
  FUNC_7(VAR_2, &VAR_4->release_work);
  FUNC_6(&VAR_4->state_mutex);
 } else {
  VAR_4->state = VAR_0;
  FUNC_6(&VAR_4->state_mutex);
  FUNC_2(VAR_4);
 }

 FUNC_1(VAR_3);
}
