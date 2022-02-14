
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ node_t ;



__attribute__((used)) static void FUNC_0(node_t *VAR_0, node_t *VAR_1) {
 node_t *VAR_2;

 VAR_2 = VAR_0->next;
 VAR_0->next = VAR_1->next;
 VAR_1->next = VAR_2;

 VAR_2 = VAR_0->prev;
 VAR_0->prev = VAR_1->prev;
 VAR_1->prev = VAR_2;

 if (VAR_0->next == VAR_0) {
  VAR_0->next = VAR_1;
 }
 if (VAR_1->next == VAR_1) {
  VAR_1->next = VAR_0;
 }
 if (VAR_0->next) {
  VAR_0->next->prev = VAR_0;
 }
 if (VAR_1->next) {
  VAR_1->next->prev = VAR_1;
 }
 if (VAR_0->prev) {
  VAR_0->prev->next = VAR_0;
 }
 if (VAR_1->prev) {
  VAR_1->prev->next = VAR_1;
 }
}
