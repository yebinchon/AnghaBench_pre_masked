
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdesc_notifier_client {struct mdesc_notifier_client* next; } ;
struct mdesc_handle {int dummy; } ;


 struct mdesc_notifier_client* VAR_0 ;
 int FUNC_0 (struct mdesc_notifier_client*,struct mdesc_handle*,struct mdesc_handle*) ;

__attribute__((used)) static void FUNC_1(struct mdesc_handle *VAR_1,
     struct mdesc_handle *VAR_2)
{
 struct mdesc_notifier_client *VAR_3 = VAR_0;

 while (VAR_3) {
  FUNC_0(VAR_3, VAR_1, VAR_2);
  VAR_3 = VAR_3->next;
 }
}
