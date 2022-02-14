
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
typedef scalar_t__ loff_t ;
struct TYPE_4__ {scalar_t__ data; scalar_t__ status; scalar_t__ size; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,void*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_9, struct kobject *VAR_10,
    struct bin_attribute *VAR_11,
    char *VAR_12, loff_t VAR_13, size_t VAR_14)
{
 int VAR_15;

 FUNC_3(&VAR_7);


 if (VAR_13 == 0) {

  if (VAR_6.data)
   FUNC_1();


  if (VAR_8.status == VAR_2)
   FUNC_5(VAR_3);


  VAR_15 = FUNC_0(VAR_12, VAR_14);
  if (VAR_15)
   goto out;
 }

 if (VAR_6.status != VAR_4) {
  VAR_15 = -VAR_1;
  goto out;
 }

 if ((VAR_13 + VAR_14) > VAR_6.size) {
  VAR_15 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_6.data + VAR_13, (void *)VAR_12, VAR_14);
 VAR_15 = VAR_14;


 if ((VAR_13 + VAR_14) == VAR_6.size) {
  FUNC_6("FLASH: Candidate image loaded....\n");
  VAR_6.status = VAR_5;
 }

out:
 FUNC_4(&VAR_7);
 return VAR_15;
}
