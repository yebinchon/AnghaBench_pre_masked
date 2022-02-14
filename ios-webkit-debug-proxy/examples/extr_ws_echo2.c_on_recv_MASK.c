
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef int ssize_t ;
typedef int sm_t ;
typedef int sm_status ;
typedef TYPE_2__* my_t ;
struct TYPE_5__ {TYPE_1__* ws; } ;
struct TYPE_4__ {int (* on_recv ) (TYPE_1__*,char const*,int ) ;} ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;

sm_status FUNC_1(sm_t VAR_0, int VAR_1, void *VAR_2,
    const char *VAR_3, ssize_t VAR_4) {
  ws_t VAR_5 = ((my_t)VAR_2)->ws;
  return VAR_5->on_recv(VAR_5, VAR_3, VAR_4);
}
