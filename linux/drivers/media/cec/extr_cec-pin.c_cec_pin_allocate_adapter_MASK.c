
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cec_pin_ops {int dummy; } ;
struct TYPE_2__ {int function; } ;
struct cec_pin {struct cec_adapter* adap; void* tx_custom_high_usecs; void* tx_custom_low_usecs; int kthread_waitq; TYPE_1__ timer; struct cec_pin_ops const* ops; } ;
struct cec_adapter {struct cec_pin* pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cec_adapter* FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct cec_adapter*) ;
 struct cec_adapter* FUNC_2 (int *,void*,char const*,int,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct cec_pin*) ;
 int VAR_9 ;
 int FUNC_4 (struct cec_pin*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cec_pin*) ;
 struct cec_pin* FUNC_8 (int,int ) ;

struct cec_adapter *FUNC_9(const struct cec_pin_ops *VAR_10,
     void *VAR_11, const char *VAR_12, u32 VAR_13)
{
 struct cec_adapter *VAR_14;
 struct cec_pin *VAR_15 = FUNC_8(sizeof(*VAR_15), VAR_6);

 if (VAR_15 == ((void*)0))
  return FUNC_0(-VAR_5);
 VAR_15->ops = VAR_10;
 FUNC_5(&VAR_15->timer, VAR_4, VAR_7);
 VAR_15->timer.function = VAR_9;
 FUNC_6(&VAR_15->kthread_waitq);
 VAR_15->tx_custom_low_usecs = VAR_3;
 VAR_15->tx_custom_high_usecs = VAR_3;

 VAR_14 = FUNC_2(&VAR_8, VAR_11, VAR_12,
       VAR_13 | VAR_0 | VAR_1,
       VAR_2);

 if (FUNC_1(VAR_14)) {
  FUNC_7(VAR_15);
  return VAR_14;
 }

 VAR_14->pin = VAR_15;
 VAR_15->adap = VAR_14;
 FUNC_4(VAR_15, FUNC_3(VAR_15), 1);
 return VAR_14;
}
