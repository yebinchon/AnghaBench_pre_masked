
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sysc_platform_data {int (* init_module ) (int ,int ,int *) ;} ;
struct sysc {int cookie; int mdata; int dev; } ;


 int VAR_0 ;
 struct ti_sysc_platform_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct sysc *VAR_1)
{
 struct ti_sysc_platform_data *VAR_2 = FUNC_0(VAR_1->dev);
 int VAR_3;

 if (!VAR_2 || !VAR_2->init_module)
  return 0;

 VAR_3 = VAR_2->init_module(VAR_1->dev, VAR_1->mdata, &VAR_1->cookie);
 if (VAR_3 == -VAR_0)
  VAR_3 = 0;

 return VAR_3;
}
