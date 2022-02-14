
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int device; } ;
struct rxe_pd {TYPE_1__ ibpd; } ;
struct rxe_mem {int lkey; int rkey; int access; scalar_t__ state; struct rxe_pd* pd; } ;
struct rxe_dev {int mr_pool; } ;
typedef enum lookup_type { ____Placeholder_lookup_type } lookup_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rxe_mem*) ;
 struct rxe_mem* FUNC_1 (int *,int) ;
 struct rxe_dev* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

struct rxe_mem *FUNC_4(struct rxe_pd *VAR_3, int VAR_4, u32 VAR_5,
      enum lookup_type VAR_6)
{
 struct rxe_mem *VAR_7;
 struct rxe_dev *VAR_8 = FUNC_2(VAR_3->ibpd.device);
 int VAR_9 = VAR_5 >> 8;

 VAR_7 = FUNC_1(&VAR_8->mr_pool, VAR_9);
 if (!VAR_7)
  return ((void*)0);

 if (FUNC_3((VAR_6 == VAR_1 && VAR_7->lkey != VAR_5) ||
       (VAR_6 == VAR_2 && VAR_7->rkey != VAR_5) ||
       VAR_7->pd != VAR_3 ||
       (VAR_4 && !(VAR_4 & VAR_7->access)) ||
       VAR_7->state != VAR_0)) {
  FUNC_0(VAR_7);
  VAR_7 = ((void*)0);
 }

 return VAR_7;
}
