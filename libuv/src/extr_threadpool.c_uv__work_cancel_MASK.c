
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_req_t ;
struct TYPE_5__ {int wq_mutex; int wq_async; int wq; } ;
typedef TYPE_2__ uv_loop_t ;
struct uv__work {int wq; int * work; TYPE_1__* loop; } ;
struct TYPE_4__ {int wq_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(uv_loop_t* VAR_3, uv_req_t* VAR_4, struct uv__work* VAR_5) {
  int VAR_6;

  FUNC_4(&VAR_1);
  FUNC_4(&VAR_5->loop->wq_mutex);

  VAR_6 = !FUNC_0(&VAR_5->wq) && VAR_5->work != ((void*)0);
  if (VAR_6)
    FUNC_2(&VAR_5->wq);

  FUNC_5(&VAR_5->loop->wq_mutex);
  FUNC_5(&VAR_1);

  if (!VAR_6)
    return VAR_0;

  VAR_5->work = VAR_2;
  FUNC_4(&VAR_3->wq_mutex);
  FUNC_1(&VAR_3->wq, &VAR_5->wq);
  FUNC_3(&VAR_3->wq_async);
  FUNC_5(&VAR_3->wq_mutex);

  return 0;
}
