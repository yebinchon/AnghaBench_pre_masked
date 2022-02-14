
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct elog_obj {int * buffer; int id; int size; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int *,size_t) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 struct elog_obj* FUNC_6 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_3, struct kobject *VAR_4,
        struct bin_attribute *VAR_5,
        char *VAR_6, loff_t VAR_7, size_t VAR_8)
{
 int VAR_9;

 struct elog_obj *VAR_10 = FUNC_6(VAR_4);


 if (!VAR_10->buffer) {
  VAR_10->buffer = FUNC_2(VAR_10->size, VAR_1);
  if (!VAR_10->buffer)
   return -VAR_0;

  VAR_9 = FUNC_4(FUNC_0(VAR_10->buffer),
      VAR_10->size, VAR_10->id);
  if (VAR_9 != VAR_2) {
   FUNC_5("ELOG: log read failed for log-id=%llx\n",
          VAR_10->id);
   FUNC_1(VAR_10->buffer);
   VAR_10->buffer = ((void*)0);
   return -VAR_0;
  }
 }

 FUNC_3(VAR_6, VAR_10->buffer + VAR_7, VAR_8);

 return VAR_8;
}
