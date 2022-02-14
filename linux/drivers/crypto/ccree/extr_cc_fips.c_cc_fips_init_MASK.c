
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int notifier_call; } ;
struct cc_fips_handle {TYPE_1__ nb; struct cc_drvdata* drvdata; int tasklet; } ;
struct cc_drvdata {scalar_t__ hw_rev; struct cc_fips_handle* fips_handle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (struct cc_drvdata*) ;
 int FUNC_2 (struct device*,char*) ;
 struct cc_fips_handle* FUNC_3 (struct device*,int,int ) ;
 struct device* FUNC_4 (struct cc_drvdata*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,unsigned long) ;

int FUNC_6(struct cc_drvdata *VAR_6)
{
 struct cc_fips_handle *VAR_7;
 struct device *VAR_8 = FUNC_4(VAR_6);

 if (VAR_6->hw_rev < VAR_0)
  return 0;

 VAR_7 = FUNC_3(VAR_8, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_6->fips_handle = VAR_7;

 FUNC_2(VAR_8, "Initializing fips tasklet\n");
 FUNC_5(&VAR_7->tasklet, VAR_4, (unsigned long)VAR_6);
 VAR_7->drvdata = VAR_6;
 VAR_7->nb.notifier_call = VAR_3;
 FUNC_0(&VAR_5, &VAR_7->nb);

 FUNC_1(VAR_6);

 return 0;
}
