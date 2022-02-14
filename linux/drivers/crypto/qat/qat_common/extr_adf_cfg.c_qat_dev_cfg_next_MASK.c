
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct adf_cfg_device_data* private; } ;
struct adf_cfg_device_data {int sec_list; } ;
typedef int loff_t ;


 void* FUNC_0 (void*,int *,int *) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct adf_cfg_device_data *VAR_3 = VAR_0->private;

 return FUNC_0(VAR_1, &VAR_3->sec_list, VAR_2);
}
