
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_info {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct scmi_info*,struct device*,int,int) ;

__attribute__((used)) static inline int
FUNC_1(struct scmi_info *VAR_0, struct device *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, 1);

 if (!VAR_3)
  FUNC_0(VAR_0, VAR_1, VAR_2, 0);

 return VAR_3;
}
