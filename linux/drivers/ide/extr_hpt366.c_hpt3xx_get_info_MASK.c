
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_host {struct device** dev; scalar_t__ host_priv; } ;
struct hpt_info {int dummy; } ;
struct device {int dummy; } ;


 struct ide_host* FUNC_0 (struct device*) ;

__attribute__((used)) static struct hpt_info *FUNC_1(struct device *VAR_0)
{
 struct ide_host *VAR_1 = FUNC_0(VAR_0);
 struct hpt_info *VAR_2 = (struct hpt_info *)VAR_1->host_priv;

 return VAR_0 == VAR_1->dev[1] ? VAR_2 + 1 : VAR_2;
}
