
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef int ws_status ;
typedef size_t ssize_t ;
typedef TYPE_2__* my_t ;
struct TYPE_5__ {int fd; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int,void*,size_t,int ) ;

ws_status FUNC_1(ws_t VAR_2, const char *VAR_3, size_t VAR_4) {
  int VAR_5 = ((my_t)VAR_2->state)->fd;
  ssize_t VAR_6 = FUNC_0(VAR_5, (void*)VAR_3, VAR_4, 0);
  return (VAR_6 == VAR_4 ? VAR_1 : VAR_0);
}
