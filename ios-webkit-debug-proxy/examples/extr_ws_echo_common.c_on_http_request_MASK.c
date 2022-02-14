
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef int ws_status ;
typedef TYPE_2__* my_t ;
struct TYPE_6__ {int port; } ;
struct TYPE_5__ {int (* send_data ) (TYPE_1__*,char*,int ) ;scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;

ws_status FUNC_5(ws_t VAR_2,
    const char *VAR_3, const char *VAR_4, const char *VAR_5,
    const char *VAR_6, const char *VAR_7, size_t VAR_8,
    bool VAR_9, bool *VAR_10) {
  if (FUNC_2(VAR_3, "GET") || FUNC_2(VAR_4, "/")) {
    return VAR_0;
  }
  if (!VAR_9) {
    char *VAR_11 = FUNC_0(((my_t)VAR_2->state)->port, 3);
    ws_status VAR_12 = VAR_2->send_data(VAR_2, VAR_11, FUNC_3(VAR_11));
    FUNC_1(VAR_11);
    return VAR_12;
  }
  return VAR_1;
}
