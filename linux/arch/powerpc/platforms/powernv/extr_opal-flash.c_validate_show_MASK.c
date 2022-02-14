
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct validate_flash_t {scalar_t__ status; int result; int buf_size; int buf; } ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,int) ;
 struct validate_flash_t VAR_4 ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_5,
        struct kobj_attribute *VAR_6, char *VAR_7)
{
 struct validate_flash_t *VAR_8 = &VAR_4;
 int VAR_9;


 if (VAR_8->status < VAR_3) {
  VAR_9 = FUNC_1(VAR_7, "%d\n", VAR_8->status);
  goto out;
 }


 VAR_9 = FUNC_1(VAR_7, "%d\n", VAR_8->result);


 if ((VAR_8->result != VAR_3) &&
     (VAR_8->result < VAR_2))
  goto out;

 if (VAR_8->buf_size > (VAR_1 - VAR_9)) {
  FUNC_0(VAR_7 + VAR_9, VAR_8->buf, VAR_1 - VAR_9);
  VAR_9 = VAR_1;
 } else {
  FUNC_0(VAR_7 + VAR_9, VAR_8->buf, VAR_8->buf_size);
  VAR_9 += VAR_8->buf_size;
 }
out:

 VAR_8->status = VAR_0;
 return VAR_9;
}
