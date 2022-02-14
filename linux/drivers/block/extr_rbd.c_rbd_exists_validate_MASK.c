
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rbd_device {int flags; TYPE_1__* spec; } ;
struct TYPE_2__ {scalar_t__ snap_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct rbd_device*,scalar_t__) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct rbd_device *VAR_3)
{
 u64 VAR_4;

 if (!FUNC_2(VAR_2, &VAR_3->flags))
  return;

 VAR_4 = VAR_3->spec->snap_id;
 if (VAR_4 == VAR_1)
  return;

 if (FUNC_1(VAR_3, VAR_4) == VAR_0)
  FUNC_0(VAR_2, &VAR_3->flags);
}
