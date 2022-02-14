
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct nvm_tgt_type {int owner; int (* exit ) (int ,int) ;int (* sysfs_exit ) (struct gendisk*) ;} ;
struct nvm_target {int list; struct nvm_tgt_type* type; int dev; struct gendisk* disk; } ;
struct gendisk {int private_data; struct request_queue* queue; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (struct nvm_target*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct gendisk*) ;
 int FUNC_7 (struct gendisk*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(struct nvm_target *VAR_0, bool VAR_1)
{
 struct nvm_tgt_type *VAR_2 = VAR_0->type;
 struct gendisk *VAR_3 = VAR_0->disk;
 struct request_queue *VAR_4 = VAR_3->queue;

 FUNC_1(VAR_3);
 FUNC_0(VAR_4);

 if (VAR_2->sysfs_exit)
  VAR_2->sysfs_exit(VAR_3);

 if (VAR_2->exit)
  VAR_2->exit(VAR_3->private_data, VAR_1);

 FUNC_5(VAR_0->dev, 1);
 FUNC_6(VAR_3);
 FUNC_4(VAR_0->type->owner);

 FUNC_3(&VAR_0->list);
 FUNC_2(VAR_0);
}
