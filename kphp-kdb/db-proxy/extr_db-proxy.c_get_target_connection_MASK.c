
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int fd; int remote_port; int status; int unreliability; int remote_ip; struct connection* next; } ;
struct conn_target {double next_reconnect_timeout; struct connection* first_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,struct connection*,int,char*,int,int,int) ;
 int FUNC_1 (struct conn_target*,struct connection*) ;
 scalar_t__ VAR_4 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct connection*) ;
 int VAR_5 ;
 int VAR_6 ;

struct connection *FUNC_4 (struct conn_target *VAR_7) {
  struct connection *VAR_8, *VAR_9 = 0;
  int VAR_10, VAR_11 = VAR_1, VAR_12 = 10000;
  if (!VAR_7) {
    return 0;
  }
  for (VAR_8 = VAR_7->first_conn; VAR_8 != (struct connection *) VAR_7; VAR_8 = VAR_8->next) {
    VAR_10 = FUNC_3 (VAR_8);
    if (VAR_6 > 1) {
      FUNC_0 (VAR_5, "checked connection %p (%d %s:%d): ready status = %d (connect status %d)\n", VAR_8, VAR_8->fd, FUNC_2 (VAR_8->remote_ip), VAR_8->remote_port, VAR_10, VAR_8->status);
    }
    if (VAR_10 == VAR_2) {
      if (VAR_4) {
        FUNC_1 (VAR_7, VAR_8);
      }
      return VAR_8;
    } else
    if (VAR_10 == VAR_0) {
      VAR_12 = -(1 << 30);
      VAR_9 = VAR_8;
      VAR_11 = VAR_10;
    } else if (VAR_10 == VAR_3 && VAR_8->unreliability < VAR_12) {
      VAR_12 = VAR_8->unreliability;
      VAR_9 = VAR_8;
      VAR_11 = VAR_10;
    }
  }

  if (VAR_7->next_reconnect_timeout > 5.0 && (VAR_11 == VAR_1 || VAR_11 == VAR_0)) {
    return 0;
  }


  return VAR_9;
}
