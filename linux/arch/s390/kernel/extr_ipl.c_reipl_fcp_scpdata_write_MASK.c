
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_5__ {size_t scp_data_len; scalar_t__ len; scalar_t__ scp_data; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_6__ {TYPE_2__ fcp; TYPE_1__ hdr; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,char*,size_t) ;
 int FUNC_1 (scalar_t__,int ,size_t) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_4, struct kobject *VAR_5,
           struct bin_attribute *VAR_6,
           char *VAR_7, loff_t VAR_8, size_t VAR_9)
{
 size_t VAR_10 = VAR_9;
 size_t VAR_11;


 if (VAR_8)
  return -VAR_0;

 FUNC_0(VAR_3->fcp.scp_data, VAR_7, VAR_9);
 if (VAR_10 % 8) {
  VAR_11 = 8 - (VAR_10 % 8);
  FUNC_1(VAR_3->fcp.scp_data + VAR_10,
         0, VAR_11);
  VAR_10 += VAR_11;
 }

 VAR_3->hdr.len = VAR_2 + VAR_10;
 VAR_3->fcp.len = VAR_1 + VAR_10;
 VAR_3->fcp.scp_data_len = VAR_10;

 return VAR_9;
}
