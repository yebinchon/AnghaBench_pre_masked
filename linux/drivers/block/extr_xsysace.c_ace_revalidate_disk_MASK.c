
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct ace_device* private_data; } ;
struct ace_device {int id_result; int dev; int id_completion; int fsm_tasklet; int lock; int id_req_count; scalar_t__ media_change; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gendisk *VAR_0)
{
 struct ace_device *VAR_1 = VAR_0->private_data;
 unsigned long VAR_2;

 FUNC_0(VAR_1->dev, "ace_revalidate_disk()\n");

 if (VAR_1->media_change) {
  FUNC_0(VAR_1->dev, "requesting cf id and scheduling tasklet\n");

  FUNC_1(&VAR_1->lock, VAR_2);
  VAR_1->id_req_count++;
  FUNC_2(&VAR_1->lock, VAR_2);

  FUNC_3(&VAR_1->fsm_tasklet);
  FUNC_4(&VAR_1->id_completion);
 }

 FUNC_0(VAR_1->dev, "revalidate complete\n");
 return VAR_1->id_result;
}
