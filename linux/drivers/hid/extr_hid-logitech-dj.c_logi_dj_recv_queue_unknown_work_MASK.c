
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int workitem ;
struct dj_workitem {int type; } ;
struct dj_receiver_dev {int work; int notif_fifo; scalar_t__ last_query; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct dj_workitem*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dj_receiver_dev *VAR_3)
{
 struct dj_workitem VAR_4 = { .type = VAR_1 };


 if (FUNC_2(VAR_2, VAR_3->last_query + VAR_0 / 2))
  return;

 FUNC_0(&VAR_3->notif_fifo, &VAR_4, sizeof(VAR_4));
 FUNC_1(&VAR_3->work);
}
