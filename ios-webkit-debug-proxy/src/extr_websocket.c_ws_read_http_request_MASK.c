
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* ws_t ;
typedef int ws_status ;
typedef TYPE_3__* ws_private_t ;
struct TYPE_9__ {char* method; char* resource; char* http_version; TYPE_1__* in; } ;
struct TYPE_8__ {int (* on_error ) (TYPE_2__*,char*) ;TYPE_3__* private_state; } ;
struct TYPE_7__ {char* in_head; char const* in_tail; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*,char*,size_t) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;

ws_status FUNC_4(ws_t VAR_1) {
  ws_private_t VAR_2 = VAR_1->private_state;
  const char *VAR_3 = VAR_2->in->in_head;
  size_t VAR_4 = VAR_2->in->in_tail - VAR_3;

  char *VAR_5 = FUNC_1(VAR_3, "\r\n", VAR_4);
  if (!VAR_5) {
    return VAR_1->on_error(VAR_1, "Missing \\r\\n");
  }

  char *VAR_6[3];
  size_t VAR_7;
  for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
    while (VAR_3 < VAR_5 && *VAR_3 == ' ') {
      VAR_3++;
    }
    const char *VAR_8 = VAR_3;
    while (VAR_3 < VAR_5 && *VAR_3 != ' ') {
      VAR_3++;
    }
    VAR_6[VAR_7] = (VAR_8 < VAR_3 ? FUNC_0(VAR_8, VAR_3 - VAR_8) : ((void*)0));
  }
  VAR_2->method = VAR_6[0];
  VAR_2->resource = VAR_6[1];
  VAR_2->http_version = VAR_6[2];



  VAR_2->in->in_head = VAR_5;
  if (!VAR_2->http_version) {
    return VAR_1->on_error(VAR_1, "Invalid HTTP header");
  }
  return VAR_0;
}
