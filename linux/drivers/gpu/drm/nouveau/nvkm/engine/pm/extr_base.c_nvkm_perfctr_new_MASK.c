
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct nvkm_perfsig {int dummy; } ;
struct nvkm_perfdom {int signal; int list; } ;
struct nvkm_perfctr {int slot; int head; int ** source; struct nvkm_perfsig** signal; int logic_op; int domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvkm_perfctr* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_perfdom *VAR_3, int VAR_4, u8 VAR_5,
   struct nvkm_perfsig *VAR_6[4], u64 VAR_7[4][8],
   u16 VAR_8, struct nvkm_perfctr **VAR_9)
{
 struct nvkm_perfctr *VAR_10;
 int VAR_11, VAR_12;

 if (!VAR_3)
  return -VAR_0;

 VAR_10 = *VAR_9 = FUNC_0(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->domain = VAR_5;
 VAR_10->logic_op = VAR_8;
 VAR_10->slot = VAR_4;
 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  if (VAR_6[VAR_11]) {
   VAR_10->signal[VAR_11] = VAR_6[VAR_11] - VAR_3->signal;
   for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
    VAR_10->source[VAR_11][VAR_12] = VAR_7[VAR_11][VAR_12];
  }
 }
 FUNC_1(&VAR_10->head, &VAR_3->list);

 return 0;
}
