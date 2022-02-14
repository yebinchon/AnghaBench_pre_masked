
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ mthd; int * data; } ;
struct nvkm_memx {TYPE_1__ c; } ;
typedef int data ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__*,scalar_t__) ;
 int FUNC_2 (struct nvkm_memx*) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_memx *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3[])
{
 if ((VAR_0->c.size + VAR_2 >= FUNC_0(VAR_0->c.data)) ||
     (VAR_0->c.mthd && VAR_0->c.mthd != VAR_1))
  FUNC_2(VAR_0);
 FUNC_1(&VAR_0->c.data[VAR_0->c.size], VAR_3, VAR_2 * sizeof(VAR_3[0]));
 VAR_0->c.size += VAR_2;
 VAR_0->c.mthd = VAR_1;
}
