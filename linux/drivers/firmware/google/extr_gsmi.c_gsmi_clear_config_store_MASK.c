
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int lock; TYPE_1__* param_buf; } ;
struct TYPE_3__ {int length; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_3,
           struct kobj_attribute *VAR_4,
           const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;

 FUNC_2(&VAR_2.lock, VAR_8);


 FUNC_1(VAR_2.param_buf->start, 0, VAR_2.param_buf->length);

 VAR_7 = FUNC_0(VAR_0, VAR_1);

 FUNC_3(&VAR_2.lock, VAR_8);

 if (VAR_7)
  return VAR_7;
 return VAR_6;
}
