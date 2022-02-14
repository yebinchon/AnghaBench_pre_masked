
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int index; } ;
struct nvkm_msgqueue_hdr {int size; } ;
struct nvkm_msgqueue {TYPE_2__* func; struct nvkm_falcon* falcon; } ;
struct nvkm_falcon {struct nvkm_subdev* owner; } ;
struct TYPE_4__ {TYPE_1__* init_func; } ;
struct TYPE_3__ {int (* init_callback ) (struct nvkm_msgqueue*,struct nvkm_msgqueue_hdr*) ;} ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_1 (struct nvkm_subdev const*,char*,int) ;
 int FUNC_2 (struct nvkm_falcon*,int) ;
 int FUNC_3 (struct nvkm_falcon*,int,int,int ,struct nvkm_msgqueue_hdr*) ;
 int FUNC_4 (struct nvkm_falcon*,int,int) ;
 int* VAR_5 ;
 int FUNC_5 (struct nvkm_msgqueue*,struct nvkm_msgqueue_hdr*) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_msgqueue *VAR_6,
    struct nvkm_msgqueue_hdr *VAR_7)
{
 struct nvkm_falcon *VAR_8 = VAR_6->falcon;
 const struct nvkm_subdev *VAR_9 = VAR_8->owner;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;





 switch (VAR_8->owner->index) {
 case 128:
  VAR_11 = 0x4cc;
  break;
 case 129:
  VAR_11 = 0xa34;
  break;
 default:
  FUNC_1(VAR_9, "falcon %s unsupported for msgqueue!\n",
      VAR_5[VAR_8->owner->index]);
  return -VAR_0;
 }





 VAR_10 = FUNC_2(VAR_8, VAR_11);
 FUNC_3(VAR_8, VAR_10, VAR_2, 0, VAR_7);

 if (VAR_7->size > VAR_3) {
  FUNC_1(VAR_9, "message too big (%d bytes)\n", VAR_7->size);
  return -VAR_1;
 }

 FUNC_3(VAR_8, VAR_10 + VAR_2, VAR_7->size - VAR_2, 0,
         (VAR_7 + 1));

 VAR_10 += FUNC_0(VAR_7->size, VAR_4);
 FUNC_4(VAR_8, VAR_11, VAR_10);

 VAR_12 = VAR_6->func->init_func->init_callback(VAR_6, VAR_7);
 if (VAR_12)
  return VAR_12;

 return 0;
}
