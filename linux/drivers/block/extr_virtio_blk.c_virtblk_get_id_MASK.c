
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_blk {TYPE_1__* disk; } ;
struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct gendisk {struct virtio_blk* private_data; } ;
struct TYPE_2__ {struct request_queue* queue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct request_queue*,TYPE_1__*,struct request*,int) ;
 struct request* FUNC_3 (struct request_queue*,int ,int ) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (struct request_queue*,struct request*,char*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct gendisk *VAR_3, char *VAR_4)
{
 struct virtio_blk *VAR_5 = VAR_3->private_data;
 struct request_queue *VAR_6 = VAR_5->disk->queue;
 struct request *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_6, VAR_1, 0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = FUNC_6(VAR_6, VAR_7, VAR_4, VAR_2, VAR_0);
 if (VAR_8)
  goto out;

 FUNC_2(VAR_5->disk->queue, VAR_5->disk, VAR_7, 0);
 VAR_8 = FUNC_7(FUNC_8(FUNC_4(VAR_7)));
out:
 FUNC_5(VAR_7);
 return VAR_8;
}
