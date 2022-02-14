
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_message {void* next; int raw; } ;


 int FUNC_0 (struct udp_message*) ;
 int FUNC_1 (int *) ;

int FUNC_2 (struct udp_message *VAR_0) {
  int VAR_1 = FUNC_1 (&VAR_0->raw);
  VAR_0->next = (void *) -1;
  FUNC_0 (VAR_0);
  return VAR_1;
}
