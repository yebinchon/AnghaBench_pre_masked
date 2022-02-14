
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* referer; void* agent; void* ws_sock_ver; void* ws_key; void* ws_protocol; void* connection; void* upgrade; void* origin; void* host; } ;
typedef TYPE_1__ WSHeaders ;


 scalar_t__ FUNC_0 (char*,char*) ;
 void* FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (WSHeaders * VAR_0, char *VAR_1, char *VAR_2)
{
  if (FUNC_0 ("Host", VAR_1) == 0)
    VAR_0->host = FUNC_1 (VAR_2);
  else if (FUNC_0 ("Origin", VAR_1) == 0)
    VAR_0->origin = FUNC_1 (VAR_2);
  else if (FUNC_0 ("Upgrade", VAR_1) == 0)
    VAR_0->upgrade = FUNC_1 (VAR_2);
  else if (FUNC_0 ("Connection", VAR_1) == 0)
    VAR_0->connection = FUNC_1 (VAR_2);
  else if (FUNC_0 ("Sec-WebSocket-Protocol", VAR_1) == 0)
    VAR_0->ws_protocol = FUNC_1 (VAR_2);
  else if (FUNC_0 ("Sec-WebSocket-Key", VAR_1) == 0)
    VAR_0->ws_key = FUNC_1 (VAR_2);
  else if (FUNC_0 ("Sec-WebSocket-Version", VAR_1) == 0)
    VAR_0->ws_sock_ver = FUNC_1 (VAR_2);
  else if (FUNC_0 ("User-Agent", VAR_1) == 0)
    VAR_0->agent = FUNC_1 (VAR_2);
  else if (FUNC_0 ("Referer", VAR_1) == 0)
    VAR_0->referer = FUNC_1 (VAR_2);
}
