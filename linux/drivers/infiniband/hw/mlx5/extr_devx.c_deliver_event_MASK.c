
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eqe {int dummy; } ;
struct devx_event_subscription {int cookie; int event_list; struct devx_async_event_file* ev_file; } ;
struct devx_async_event_file {int is_overflow_err; int poll_wait; int lock; int event_list; scalar_t__ omit_data; } ;
struct TYPE_2__ {int out_data; int cookie; } ;
struct devx_async_event_data {int list; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct devx_async_event_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,void const*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct devx_event_subscription *VAR_2,
    const void *VAR_3)
{
 struct devx_async_event_file *VAR_4;
 struct devx_async_event_data *VAR_5;
 unsigned long VAR_6;

 VAR_4 = VAR_2->ev_file;

 if (VAR_4->omit_data) {
  FUNC_4(&VAR_4->lock, VAR_6);
  if (!FUNC_2(&VAR_2->event_list)) {
   FUNC_5(&VAR_4->lock, VAR_6);
   return 0;
  }

  FUNC_1(&VAR_2->event_list, &VAR_4->event_list);
  FUNC_5(&VAR_4->lock, VAR_6);
  FUNC_6(&VAR_4->poll_wait);
  return 0;
 }

 VAR_5 = FUNC_0(sizeof(*VAR_5) + sizeof(struct mlx5_eqe),
        VAR_1);
 if (!VAR_5) {
  FUNC_4(&VAR_4->lock, VAR_6);
  VAR_4->is_overflow_err = 1;
  FUNC_5(&VAR_4->lock, VAR_6);
  return -VAR_0;
 }

 VAR_5->hdr.cookie = VAR_2->cookie;
 FUNC_3(VAR_5->hdr.out_data, VAR_3, sizeof(struct mlx5_eqe));

 FUNC_4(&VAR_4->lock, VAR_6);
 FUNC_1(&VAR_5->list, &VAR_4->event_list);
 FUNC_5(&VAR_4->lock, VAR_6);
 FUNC_6(&VAR_4->poll_wait);

 return 0;
}
