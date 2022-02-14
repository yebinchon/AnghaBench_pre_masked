
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct edid {int dummy; } ;
struct TYPE_8__ {int lock; TYPE_2__* adap; int parent; int name; int unregister_work; } ;
struct drm_dp_aux {TYPE_1__ cec; int transfer; } ;
struct TYPE_9__ {int capabilities; unsigned int available_log_addrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,struct drm_dp_aux*,int ,int,unsigned int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,struct edid const*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_7 (struct drm_dp_aux*,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct drm_dp_aux *VAR_8, const struct edid *VAR_9)
{
 u32 VAR_10 = VAR_0 | VAR_2;
 unsigned int VAR_11 = 1;
 u8 VAR_12;


 if (!VAR_8->transfer)
  return;
 VAR_10 &= ~VAR_3;

 FUNC_1(&VAR_8->cec.unregister_work);

 FUNC_8(&VAR_8->cec.lock);
 if (!FUNC_7(VAR_8, &VAR_12)) {

  FUNC_6(VAR_8->cec.adap);
  VAR_8->cec.adap = ((void*)0);
  goto unlock;
 }

 if (VAR_12 & VAR_6)
  VAR_10 |= VAR_1;
 if (VAR_12 & VAR_5)
  VAR_11 = VAR_4;

 if (VAR_8->cec.adap) {
  if (VAR_8->cec.adap->capabilities == VAR_10 &&
      VAR_8->cec.adap->available_log_addrs == VAR_11) {

   FUNC_5(VAR_8->cec.adap, VAR_9);
   goto unlock;
  }




  FUNC_6(VAR_8->cec.adap);
 }


 VAR_8->cec.adap = FUNC_2(&VAR_7,
          VAR_8, VAR_8->cec.name, VAR_10,
          VAR_11);
 if (FUNC_0(VAR_8->cec.adap)) {
  VAR_8->cec.adap = ((void*)0);
  goto unlock;
 }
 if (FUNC_4(VAR_8->cec.adap, VAR_8->cec.parent)) {
  FUNC_3(VAR_8->cec.adap);
  VAR_8->cec.adap = ((void*)0);
 } else {





  FUNC_5(VAR_8->cec.adap, VAR_9);
 }
unlock:
 FUNC_9(&VAR_8->cec.lock);
}
