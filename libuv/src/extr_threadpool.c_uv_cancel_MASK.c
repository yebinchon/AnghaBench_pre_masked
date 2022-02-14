
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct uv__work {int dummy; } ;
struct TYPE_9__ {struct uv__work work_req; int * loop; } ;
typedef TYPE_1__ uv_work_t ;
struct TYPE_10__ {int type; } ;
typedef TYPE_2__ uv_req_t ;
struct TYPE_11__ {struct uv__work work_req; int * loop; } ;
typedef TYPE_3__ uv_random_t ;
typedef int uv_loop_t ;
struct TYPE_12__ {struct uv__work work_req; int * loop; } ;
typedef TYPE_4__ uv_getnameinfo_t ;
struct TYPE_13__ {struct uv__work work_req; int * loop; } ;
typedef TYPE_5__ uv_getaddrinfo_t ;
struct TYPE_14__ {struct uv__work work_req; int * loop; } ;
typedef TYPE_6__ uv_fs_t ;


 int VAR_0 ;





 int FUNC_0 (int *,TYPE_2__*,struct uv__work*) ;

int FUNC_1(uv_req_t* VAR_1) {
  struct uv__work* VAR_2;
  uv_loop_t* VAR_3;

  switch (VAR_1->type) {
  case 132:
    VAR_3 = ((uv_fs_t*) VAR_1)->loop;
    VAR_2 = &((uv_fs_t*) VAR_1)->work_req;
    break;
  case 131:
    VAR_3 = ((uv_getaddrinfo_t*) VAR_1)->loop;
    VAR_2 = &((uv_getaddrinfo_t*) VAR_1)->work_req;
    break;
  case 130:
    VAR_3 = ((uv_getnameinfo_t*) VAR_1)->loop;
    VAR_2 = &((uv_getnameinfo_t*) VAR_1)->work_req;
    break;
  case 129:
    VAR_3 = ((uv_random_t*) VAR_1)->loop;
    VAR_2 = &((uv_random_t*) VAR_1)->work_req;
    break;
  case 128:
    VAR_3 = ((uv_work_t*) VAR_1)->loop;
    VAR_2 = &((uv_work_t*) VAR_1)->work_req;
    break;
  default:
    return VAR_0;
  }

  return FUNC_0(VAR_3, VAR_1, VAR_2);
}
