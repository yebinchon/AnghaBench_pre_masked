
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_log_addrs {int dummy; } ;
struct cec_adapter {int lock; } ;


 int FUNC_0 (struct cec_adapter*,struct cec_log_addrs*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct cec_adapter *VAR_0,
      struct cec_log_addrs *VAR_1, bool VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock);
 return VAR_3;
}
