
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_classifier_instance {int * sock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct nl_classifier_instance *VAR_0)
{
 if (VAR_0->sock) {
  FUNC_0(VAR_0->sock);
  FUNC_1(VAR_0->sock);
  VAR_0->sock = ((void*)0);
 }
 FUNC_2("nl classifier exit successful\n");
}
