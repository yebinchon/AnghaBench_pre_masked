
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ocrdma_dev {int dummy; } ;
struct ocrdma_cq {int cq_lock; int id; } ;
struct ib_cq {int device; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocrdma_cq* FUNC_0 (struct ib_cq*) ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct ocrdma_dev*,int ,int,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ib_cq *VAR_2, enum ib_cq_notify_flags VAR_3)
{
 struct ocrdma_cq *VAR_4 = FUNC_0(VAR_2);
 struct ocrdma_dev *VAR_5 = FUNC_1(VAR_2->device);
 u16 VAR_6;
 unsigned long VAR_7;
 bool VAR_8 = 0, VAR_9 = 0;

 VAR_6 = VAR_4->id;

 FUNC_3(&VAR_4->cq_lock, VAR_7);
 if (VAR_3 & VAR_0 || VAR_3 & VAR_1)
  VAR_8 = 1;
 if (VAR_3 & VAR_1)
  VAR_9 = 1;

 FUNC_2(VAR_5, VAR_6, VAR_8, VAR_9, 0);
 FUNC_4(&VAR_4->cq_lock, VAR_7);

 return 0;
}
