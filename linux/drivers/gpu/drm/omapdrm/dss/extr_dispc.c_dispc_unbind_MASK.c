
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_device {int * dispc_ops; int * dispc; } ;
struct dispc_device {int debugfs; struct dss_device* dss; } ;
struct device {int dummy; } ;


 struct dispc_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct dispc_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dispc_device*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct dispc_device *VAR_3 = FUNC_0(VAR_0);
 struct dss_device *VAR_4 = VAR_3->dss;

 FUNC_2(VAR_3->debugfs);

 VAR_4->dispc = ((void*)0);
 VAR_4->dispc_ops = ((void*)0);

 FUNC_4(VAR_0);

 FUNC_1(VAR_3);

 FUNC_3(VAR_3);
}
