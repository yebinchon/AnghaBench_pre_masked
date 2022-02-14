
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef int ws_status ;
struct TYPE_4__ {int (* send_upgrade ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;

ws_status FUNC_1(ws_t VAR_0,
    const char *VAR_1, const char *VAR_2,
    int VAR_3, const char *VAR_4) {
  return VAR_0->send_upgrade(VAR_0);
}
