
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_vmm_page {unsigned long long shift; } ;
struct nvkm_vmm {TYPE_1__* func; } ;
struct TYPE_2__ {struct nvkm_vmm_page* page; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,unsigned long long) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_vmm_page const*,int,int) ;
 int FUNC_3 (struct nvkm_vmm*,struct nvkm_vmm_page const*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_vmm *VAR_0, u64 VAR_1, u64 VAR_2, bool VAR_3)
{
 const struct nvkm_vmm_page *VAR_4 = VAR_0->func->page;
 int VAR_5 = 0, VAR_6;
 u64 VAR_7 = VAR_1;
 u64 VAR_8;

 while (VAR_2) {

  while (VAR_2 < (1ULL << VAR_4[VAR_5].shift))
   VAR_5++;
  VAR_6 = VAR_5;


  while (!FUNC_1(VAR_1, 1ULL << VAR_4[VAR_6].shift))
   VAR_6++;


  if (VAR_6 != VAR_5) {

   u64 VAR_9 = 1ULL << VAR_4[VAR_6 - 1].shift;
   u64 VAR_10 = FUNC_0(VAR_1, VAR_9) - VAR_1;
   if (VAR_2 - VAR_10 >= VAR_9)
    VAR_8 = (VAR_10 >> VAR_4[VAR_6].shift) << VAR_4[VAR_6].shift;
   else
    VAR_8 = (VAR_2 >> VAR_4[VAR_6].shift) << VAR_4[VAR_6].shift;
  } else {
   VAR_8 = (VAR_2 >> VAR_4[VAR_6].shift) << VAR_4[VAR_6].shift;
  }


  if (VAR_3) {
   int VAR_11 = FUNC_2(VAR_0, &VAR_4[VAR_6], VAR_1, VAR_8);
   if (VAR_11) {
    if ((VAR_2 = VAR_1 - VAR_7))
     FUNC_4(VAR_0, VAR_7, VAR_2, 0);
    return VAR_11;
   }
  } else {
   FUNC_3(VAR_0, &VAR_4[VAR_6], VAR_1, VAR_8);
  }

  VAR_2 -= VAR_8;
  VAR_1 += VAR_8;
 }

 return 0;
}
