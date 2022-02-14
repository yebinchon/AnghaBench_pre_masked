
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef int ws_status ;
typedef TYPE_2__* ws_private_t ;
struct TYPE_6__ {char* protocol; char* sec_key; char* req_host; int is_websocket; int version; } ;
struct TYPE_5__ {TYPE_2__* private_state; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 void* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char**,char**) ;

ws_status FUNC_7(ws_t VAR_1) {
  ws_private_t VAR_2 = VAR_1->private_state;

  bool VAR_3 = 0;
  bool VAR_4 = 0;
  while (1) {
    char *VAR_5;
    char *VAR_6;
    if (FUNC_6(VAR_1, &VAR_5, &VAR_6) || !VAR_5) {
      break;
    }
    if (!FUNC_1(VAR_5, "Connection")) {

      VAR_3 = (FUNC_2(VAR_6, "Upgrade") ? 1 : 0);
    } else if (!FUNC_1(VAR_5, "Upgrade")) {
      VAR_4 = !FUNC_1(VAR_6, "WebSocket");
    } else if (!FUNC_1(VAR_5, "Sec-WebSocket-Protocol")) {
      FUNC_0(VAR_2->protocol);
      VAR_2->protocol = FUNC_3(VAR_6);
    } else if (!FUNC_1(VAR_5, "Sec-WebSocket-Version")) {
      VAR_2->version = FUNC_5(VAR_6, ((void*)0), 0);
    } else if (!FUNC_1(VAR_5, "Sec-WebSocket-Key")) {
      FUNC_0(VAR_2->sec_key);
      VAR_2->sec_key = FUNC_3(VAR_6);
    } else if (!FUNC_1(VAR_5, "Host")) {
      FUNC_0(VAR_2->req_host);
      char *VAR_7 = FUNC_4(VAR_6, ':');
      if (VAR_7) {
        *VAR_7 = 0;
      }
      VAR_2->req_host = FUNC_3(VAR_6);
    }
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
  }

  VAR_2->is_websocket = (VAR_3 && VAR_4 && VAR_2->sec_key);
  return VAR_0;
}
