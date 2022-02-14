
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repl_client_status {int handshake_id; struct repl_client_status* h_next; } ;


 struct repl_client_status** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct repl_client_status*,int) ;
 struct repl_client_status* FUNC_2 (int) ;

struct repl_client_status *FUNC_3 (int VAR_3, int VAR_4) {
  int VAR_5 = VAR_3 % VAR_1;
  if (VAR_5 < 0) {
    VAR_5 += VAR_1;
  }
  struct repl_client_status **VAR_6 = &VAR_0[VAR_5], *VAR_7 = *VAR_6;
  while (VAR_7) {
    if (VAR_7->handshake_id == VAR_3) {
      if (VAR_4 < 0) {
        *VAR_6 = VAR_7->h_next;
        VAR_7->h_next = 0;
        FUNC_1 (VAR_7, sizeof (struct repl_client_status));
        return 0;
      }
      return VAR_7;
    }
    VAR_6 = &VAR_7->h_next;
    VAR_7 = *VAR_6;
  }
  FUNC_0 (VAR_4 >= 0);
  if (!VAR_4) {
    return 0;
  }
  VAR_7 = FUNC_2 (sizeof (struct repl_client_status));
  VAR_7->h_next = VAR_0[VAR_5];
  VAR_7->handshake_id = VAR_3;
  VAR_0[VAR_5] = VAR_7;
  VAR_2++;
  return VAR_7;
}
