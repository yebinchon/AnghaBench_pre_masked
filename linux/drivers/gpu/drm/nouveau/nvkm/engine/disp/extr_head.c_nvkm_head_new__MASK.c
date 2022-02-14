
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_head_func {int dummy; } ;
struct nvkm_head {int id; int head; struct nvkm_disp* disp; struct nvkm_head_func const* func; } ;
struct nvkm_disp {int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_head*,char*) ;
 struct nvkm_head* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(const struct nvkm_head_func *VAR_2,
        struct nvkm_disp *VAR_3, int VAR_4)
{
 struct nvkm_head *VAR_5;
 if (!(VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1)))
  return -VAR_0;
 VAR_5->func = VAR_2;
 VAR_5->disp = VAR_3;
 VAR_5->id = VAR_4;
 FUNC_2(&VAR_5->head, &VAR_3->head);
 FUNC_0(VAR_5, "ctor");
 return 0;
}
