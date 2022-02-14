
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {struct connection* next; struct connection* prev; } ;
struct conn_target {struct connection* last_conn; struct connection* first_conn; } ;



__attribute__((used)) static inline void FUNC_0 (struct conn_target *VAR_0, struct connection *VAR_1) {
  VAR_0->last_conn->next = VAR_0->first_conn;
  VAR_0->first_conn->prev = VAR_0->last_conn;
  VAR_0->first_conn = VAR_1->next;
  VAR_0->last_conn = VAR_1;
  VAR_0->first_conn->prev = VAR_0->last_conn->next = (struct connection *) VAR_0;
}
