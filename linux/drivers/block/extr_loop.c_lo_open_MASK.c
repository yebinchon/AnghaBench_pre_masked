
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop_device {int lo_refcnt; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct loop_device* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct loop_device *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_1);
 if (VAR_5)
  return VAR_5;
 VAR_4 = VAR_2->bd_disk->private_data;
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto out;
 }

 FUNC_0(&VAR_4->lo_refcnt);
out:
 FUNC_2(&VAR_1);
 return VAR_5;
}
