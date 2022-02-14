
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_cq {int notify; int cq_lock; int queue; } ;
struct ib_cq {int dummy; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct rxe_cq* FUNC_3 (struct ib_cq*) ;

__attribute__((used)) static int FUNC_4(struct ib_cq *VAR_3, enum ib_cq_notify_flags VAR_4)
{
 struct rxe_cq *VAR_5 = FUNC_3(VAR_3);
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_1(&VAR_5->cq_lock, VAR_6);
 if (VAR_5->notify != VAR_0)
  VAR_5->notify = VAR_4 & VAR_2;

 if ((VAR_4 & VAR_1) && !FUNC_0(VAR_5->queue))
  VAR_7 = 1;

 FUNC_2(&VAR_5->cq_lock, VAR_6);

 return VAR_7;
}
