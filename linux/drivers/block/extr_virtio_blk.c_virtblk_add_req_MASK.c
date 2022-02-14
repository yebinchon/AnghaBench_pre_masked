
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {int vdev; } ;
struct TYPE_2__ {int type; } ;
struct virtblk_req {TYPE_1__ status; TYPE_1__ out_hdr; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct scatterlist*,TYPE_1__*,int) ;
 int FUNC_2 (struct virtqueue*,struct scatterlist**,unsigned int,unsigned int,struct virtblk_req*,int ) ;

__attribute__((used)) static int FUNC_3(struct virtqueue *VAR_2, struct virtblk_req *VAR_3,
  struct scatterlist *VAR_4, bool VAR_5)
{
 struct scatterlist VAR_6, VAR_7, *VAR_8[3];
 unsigned int VAR_9 = 0, VAR_10 = 0;

 FUNC_1(&VAR_6, &VAR_3->out_hdr, sizeof(VAR_3->out_hdr));
 VAR_8[VAR_9++] = &VAR_6;

 if (VAR_5) {
  if (VAR_3->out_hdr.type & FUNC_0(VAR_2->vdev, VAR_1))
   VAR_8[VAR_9++] = VAR_4;
  else
   VAR_8[VAR_9 + VAR_10++] = VAR_4;
 }

 FUNC_1(&VAR_7, &VAR_3->status, sizeof(VAR_3->status));
 VAR_8[VAR_9 + VAR_10++] = &VAR_7;

 return FUNC_2(VAR_2, VAR_8, VAR_9, VAR_10, VAR_3, VAR_0);
}
