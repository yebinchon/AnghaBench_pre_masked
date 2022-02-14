
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int total_bytes; } ;
struct connection {int last_response_time; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct raw_message*,int*,int) ;
 int FUNC_2 (struct connection*,int,int*) ;
 int FUNC_3 (int,char*,int ,int,int) ;

int FUNC_4 (struct connection *VAR_3, int VAR_4, struct raw_message *VAR_5) {
  FUNC_3 (1, "rpcs_execute: fd=%d, op=%d, len=%d\n", VAR_3->fd, VAR_4, VAR_5->total_bytes);
  if (VAR_4 == VAR_0 && VAR_5->total_bytes == 12) {
    VAR_3->last_response_time = VAR_2;
    static int VAR_6[12];
    FUNC_0 (FUNC_1 (VAR_5, VAR_6, 12) == 12);
    static int VAR_7[12];
    VAR_7[0] = VAR_1;
    VAR_7[1] = VAR_6[1];
    VAR_7[2] = VAR_6[2];

    FUNC_2 (VAR_3, 12, VAR_7);
    return 0;
  }
  return 0;
}
