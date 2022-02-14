
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_3__ {unsigned int scp_data_len; int scp_data; } ;
struct TYPE_4__ {TYPE_1__ fcp; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,size_t,int *,void*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_1(struct file *VAR_1, struct kobject *VAR_2,
     struct bin_attribute *VAR_3, char *VAR_4,
     loff_t VAR_5, size_t VAR_6)
{
 unsigned int VAR_7 = VAR_0.fcp.scp_data_len;
 void *VAR_8 = &VAR_0.fcp.scp_data;

 return FUNC_0(VAR_4, VAR_6, &VAR_5, VAR_8, VAR_7);
}
