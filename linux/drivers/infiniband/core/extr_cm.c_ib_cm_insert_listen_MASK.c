
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_device {int dummy; } ;
struct ib_cm_id {scalar_t__ cm_handler; scalar_t__ context; } ;
struct cm_id_private {struct ib_cm_id id; int listen_sharecount; int refcount; } ;
typedef scalar_t__ ib_cm_handler ;
typedef int __be64 ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 struct ib_cm_id* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ib_cm_id*) ;
 int FUNC_2 (struct ib_cm_id*,int ,int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_2 ;
 struct cm_id_private* FUNC_4 (struct ib_device*,int ) ;
 struct ib_cm_id* FUNC_5 (struct ib_device*,scalar_t__,int *) ;
 int FUNC_6 (struct ib_cm_id*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

struct ib_cm_id *FUNC_9(struct ib_device *VAR_3,
         ib_cm_handler VAR_4,
         __be64 VAR_5)
{
 struct cm_id_private *VAR_6;
 struct ib_cm_id *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;


 VAR_7 = FUNC_5(VAR_3, VAR_4, ((void*)0));
 if (FUNC_1(VAR_7))
  return VAR_7;

 FUNC_7(&VAR_2.lock, VAR_8);

 if (VAR_5 == VAR_1)
  goto new_id;


 VAR_6 = FUNC_4(VAR_3, VAR_5);
 if (VAR_6) {
  if (VAR_7->cm_handler != VAR_4 || VAR_7->context) {


   FUNC_8(&VAR_2.lock, VAR_8);
   return FUNC_0(-VAR_0);
  }
  FUNC_3(&VAR_6->refcount);
  ++VAR_6->listen_sharecount;
  FUNC_8(&VAR_2.lock, VAR_8);

  FUNC_6(VAR_7);
  VAR_7 = &VAR_6->id;
  return VAR_7;
 }

new_id:

 VAR_9 = FUNC_2(VAR_7, VAR_5, 0);

 FUNC_8(&VAR_2.lock, VAR_8);

 if (VAR_9) {
  FUNC_6(VAR_7);
  return FUNC_0(VAR_9);
 }
 return VAR_7;
}
