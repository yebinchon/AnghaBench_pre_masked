
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_handle {int dummy; } ;
struct ti_sci_info {struct ti_sci_handle handle; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 struct ti_sci_info* FUNC_0 (struct notifier_block*) ;
 int FUNC_1 (struct ti_sci_handle const*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_1, unsigned long VAR_2,
    void *VAR_3)
{
 struct ti_sci_info *VAR_4 = FUNC_0(VAR_1);
 const struct ti_sci_handle *VAR_5 = &VAR_4->handle;

 FUNC_1(VAR_5);


 return VAR_0;
}
