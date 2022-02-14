
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_msgqueue_queue {int position; } ;
struct nvkm_msgqueue {int falcon; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_msgqueue *VAR_1, struct nvkm_msgqueue_queue *VAR_2,
        void *VAR_3, u32 VAR_4)
{
 FUNC_1(VAR_1->falcon, VAR_3, VAR_2->position, VAR_4, 0);
 VAR_2->position += FUNC_0(VAR_4, VAR_0);

 return 0;
}
