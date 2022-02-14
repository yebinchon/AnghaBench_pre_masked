
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_classifier_instance {scalar_t__ family_id; scalar_t__ group_id; int * sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*,char*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int ,int *) ;
 int FUNC_9 (char*,...) ;

int FUNC_10(struct nl_classifier_instance *VAR_5)
{
 int VAR_6;

 VAR_5->sock = FUNC_5();
 if (!VAR_5->sock) {
  FUNC_9("Unable to allocation socket.\n");
  return -1;
 }
 FUNC_0(VAR_5->sock);

 VAR_5->family_id = FUNC_1(VAR_5->sock, VAR_2);
 if (VAR_5->family_id < 0) {
  FUNC_9("Unable to resolve family %s\n", VAR_2);
  goto init_failed;
 }

 VAR_5->group_id = FUNC_2(VAR_5->sock, VAR_2, VAR_3);
 if (VAR_5->group_id < 0) {
  FUNC_9("Unable to resolve mcast group %s\n", VAR_3);
  goto init_failed;
 }

 VAR_6 = FUNC_4(VAR_5->sock, VAR_5->group_id);
 if (VAR_6 < 0) {
  FUNC_9("Unable to add membership\n");
  goto init_failed;
 }

 FUNC_6(VAR_5->sock);
 FUNC_8(VAR_5->sock, VAR_1, VAR_0, VAR_4, ((void*)0));

 FUNC_9("nl classifier init successful\n");
 return 0;

init_failed:
 if (VAR_5->sock) {
  FUNC_3(VAR_5->sock);
  FUNC_7(VAR_5->sock);
  VAR_5->sock = ((void*)0);
 }
 return -1;
}
