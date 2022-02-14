
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct validate_flash_t {scalar_t__ buf_size; int status; int buf; int result; } ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ status; scalar_t__ size; int data; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 struct validate_flash_t VAR_8 ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_9,
         struct kobj_attribute *VAR_10,
         const char *VAR_11, size_t VAR_12)
{
 struct validate_flash_t *VAR_13 = &VAR_8;

 if (VAR_11[0] != '1')
  return -VAR_0;

 FUNC_1(&VAR_7);

 if (VAR_6.status != VAR_1 ||
     VAR_6.size < VAR_2) {
  VAR_13->result = VAR_5;
  VAR_13->status = VAR_3;
  goto out;
 }


 FUNC_0(VAR_13->buf, VAR_6.data, VAR_2);

 VAR_13->status = VAR_4;
 VAR_13->buf_size = VAR_2;


 FUNC_3();

out:
 FUNC_2(&VAR_7);
 return VAR_12;
}
