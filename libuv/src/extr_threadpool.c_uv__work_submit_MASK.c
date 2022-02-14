
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
struct uv__work {void (* work ) (struct uv__work*) ;void (* done ) (struct uv__work*,int) ;int wq; int * loop; } ;
typedef enum uv__work_kind { ____Placeholder_uv__work_kind } uv__work_kind ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(uv_loop_t* VAR_2,
                     struct uv__work* VAR_3,
                     enum uv__work_kind VAR_4,
                     void (*VAR_5)(struct uv__work* VAR_6),
                     void (*VAR_7)(struct uv__work* VAR_8, int VAR_9)) {
  FUNC_1(&VAR_1, VAR_0);
  VAR_3->loop = VAR_2;
  VAR_3->work = VAR_5;
  VAR_3->done = VAR_7;
  FUNC_0(&VAR_3->wq, VAR_4);
}
