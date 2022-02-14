
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cec_connector_info {int dummy; } ;
struct cec_notifier {int lock; scalar_t__ cec_adap; struct cec_connector_info conn_info; int phys_addr; } ;


 int VAR_0 ;
 struct cec_notifier* FUNC_0 (struct device*,char const*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,struct cec_connector_info const*) ;
 int FUNC_3 (struct cec_connector_info*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct cec_notifier *
FUNC_6(struct device *VAR_1, const char *VAR_2,
      const struct cec_connector_info *VAR_3)
{
 struct cec_notifier *VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_4)
  return VAR_4;

 FUNC_4(&VAR_4->lock);
 VAR_4->phys_addr = VAR_0;
 if (VAR_3)
  VAR_4->conn_info = *VAR_3;
 else
  FUNC_3(&VAR_4->conn_info, 0, sizeof(VAR_4->conn_info));
 if (VAR_4->cec_adap) {
  FUNC_1(VAR_4->cec_adap);
  FUNC_2(VAR_4->cec_adap, VAR_3);
 }
 FUNC_5(&VAR_4->lock);
 return VAR_4;
}
