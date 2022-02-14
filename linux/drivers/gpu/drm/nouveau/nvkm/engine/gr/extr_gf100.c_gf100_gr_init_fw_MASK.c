
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_falcon {int dummy; } ;
struct gf100_gr_fuc {int size; int data; } ;


 int FUNC_0 (struct nvkm_falcon*,int ,int,int ,int ) ;
 int FUNC_1 (struct nvkm_falcon*,int ,int,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_falcon *VAR_0,
   struct gf100_gr_fuc *VAR_1, struct gf100_gr_fuc *VAR_2)
{
 FUNC_0(VAR_0, VAR_2->data, 0x0, VAR_2->size, 0);
 FUNC_1(VAR_0, VAR_1->data, 0x0, VAR_1->size, 0, 0, 0);
}
