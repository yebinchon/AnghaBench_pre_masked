
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_req_t ;
typedef int uv_loop_t ;
struct TYPE_3__ {int flags; int retcode; int work_req; int * loop; int type; scalar_t__ getnameinfo_cb; int storage; } ;
typedef TYPE_1__ uv_getnameinfo_t ;
typedef scalar_t__ uv_getnameinfo_cb ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct sockaddr const*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ,int (*) (int *),int (*) (int *,int )) ;

int FUNC_5(uv_loop_t* VAR_5,
                   uv_getnameinfo_t* VAR_6,
                   uv_getnameinfo_cb VAR_7,
                   const struct sockaddr* VAR_8,
                   int VAR_9) {
  if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0))
    return VAR_2;

  if (VAR_8->sa_family == VAR_0) {
    FUNC_0(&VAR_6->storage,
           VAR_8,
           sizeof(struct sockaddr_in));
  } else if (VAR_8->sa_family == VAR_1) {
    FUNC_0(&VAR_6->storage,
           VAR_8,
           sizeof(struct sockaddr_in6));
  } else {
    return VAR_2;
  }

  FUNC_3(VAR_5, (uv_req_t*)VAR_6, VAR_3);

  VAR_6->getnameinfo_cb = VAR_7;
  VAR_6->flags = VAR_9;
  VAR_6->type = VAR_3;
  VAR_6->loop = VAR_5;
  VAR_6->retcode = 0;

  if (VAR_7) {
    FUNC_4(VAR_5,
                    &VAR_6->work_req,
                    VAR_4,
                    FUNC_2,
                    FUNC_1);
    return 0;
  } else {
    FUNC_2(&VAR_6->work_req);
    FUNC_1(&VAR_6->work_req, 0);
    return VAR_6->retcode;
  }
}
