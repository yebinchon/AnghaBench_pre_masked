
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn_target {double next_reconnect_timeout; double reconnect_timeout; int next_reconnect; scalar_t__ active_outbound_connections; } ;


 double VAR_0 ;
 double FUNC_0 () ;
 int VAR_1 ;

int FUNC_1 (struct conn_target *VAR_2) {
  if (VAR_2->next_reconnect_timeout < VAR_2->reconnect_timeout || VAR_2->active_outbound_connections) {
    VAR_2->next_reconnect_timeout = VAR_2->reconnect_timeout;
  }
  VAR_2->next_reconnect = VAR_1 + VAR_2->next_reconnect_timeout;
  if (!VAR_2->active_outbound_connections && VAR_2->next_reconnect_timeout < VAR_0) {
    VAR_2->next_reconnect_timeout = VAR_2->next_reconnect_timeout * 1.5 + FUNC_0 () * 0.2;
  }
  return VAR_2->next_reconnect;
}
