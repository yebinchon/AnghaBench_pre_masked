
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cec_notifier {int lock; int phys_addr; int conn_info; struct cec_adapter* cec_adap; } ;
struct cec_adapter {struct cec_notifier* notifier; int conn_info; } ;


 scalar_t__ FUNC_0 (int) ;
 struct cec_notifier* FUNC_1 (struct device*,char const*) ;
 int FUNC_2 (struct cec_adapter*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct cec_notifier *
FUNC_5(struct device *VAR_0, const char *VAR_1,
          struct cec_adapter *VAR_2)
{
 struct cec_notifier *VAR_3;

 if (FUNC_0(!VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3)
  return VAR_3;

 FUNC_3(&VAR_3->lock);
 VAR_3->cec_adap = VAR_2;
 VAR_2->conn_info = VAR_3->conn_info;
 VAR_2->notifier = VAR_3;
 FUNC_2(VAR_2, VAR_3->phys_addr, 0);
 FUNC_4(&VAR_3->lock);
 return VAR_3;
}
