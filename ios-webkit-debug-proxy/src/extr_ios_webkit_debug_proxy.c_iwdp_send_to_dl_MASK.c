
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* iwdp_t ;
typedef TYPE_2__* iwdp_idl_t ;
typedef TYPE_3__* dl_t ;
typedef int dl_status ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {int dl_fd; TYPE_1__* self; } ;
struct TYPE_6__ {int (* send ) (TYPE_1__*,int,char const*,size_t) ;} ;


 int FUNC_0 (TYPE_1__*,int,char const*,size_t) ;

dl_status FUNC_1(dl_t VAR_0, const char *VAR_1, size_t VAR_2) {
  iwdp_idl_t VAR_3 = (iwdp_idl_t)VAR_0->state;
  iwdp_t VAR_4 = VAR_3->self;
  int VAR_5 = VAR_3->dl_fd;
  return VAR_4->send(VAR_4, VAR_5, VAR_1, VAR_2);
}
