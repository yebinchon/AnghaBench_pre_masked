
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
struct TYPE_9__ {TYPE_1__* in; } ;
struct TYPE_8__ {int (* on_error ) (TYPE_2__*,char*) ;TYPE_3__* private_state; } ;
struct TYPE_7__ {char* in_head; char const* in_tail; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*,char*,size_t) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;

ws_status FUNC_4(ws_t VAR_1,
    char **VAR_2, char **VAR_3) {
  ws_private_t VAR_4 = VAR_1->private_state;
  const char *VAR_5 = VAR_4->in->in_head;
  size_t VAR_6 = VAR_4->in->in_tail - VAR_5;

  *VAR_2 = ((void*)0);
  *VAR_3 = ((void*)0);
  char *VAR_7 = FUNC_1(VAR_5, "\r\n", VAR_6);
  if (!VAR_7) {
    return VAR_1->on_error(VAR_1, "Missing \\r\\n");
  }
  if (VAR_5 < VAR_7) {
    const char *VAR_8 = VAR_5;
    if (*VAR_8 == ' ') {
      return VAR_1->on_error(VAR_1, "TODO header continuation");
    }
    const char *VAR_9 = VAR_8;
    while (++VAR_9 < VAR_7 && *VAR_9 != ':') {
    }
    const char *VAR_10 = VAR_9;
    while (++VAR_10 < VAR_7 && *VAR_10 == ' ') {
    }
    const char *VAR_11 = VAR_7;
    while (VAR_11 > VAR_10 && VAR_11[-1] == ' ') {
      VAR_11--;
    }
    *VAR_2 = FUNC_0(VAR_8, VAR_9 - VAR_8);
    *VAR_3 = FUNC_0(VAR_10, VAR_11 - VAR_10);
  }
  VAR_4->in->in_head = VAR_7 + 2;
  return VAR_0;
}
