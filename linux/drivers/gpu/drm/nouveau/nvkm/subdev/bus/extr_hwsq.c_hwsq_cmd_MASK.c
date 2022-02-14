
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {size_t size; int * data; } ;
struct nvkm_hwsq {TYPE_1__ c; } ;
typedef int data ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_hwsq *VAR_0, int VAR_1, u8 VAR_2[])
{
 FUNC_0(&VAR_0->c.data[VAR_0->c.size], VAR_2, VAR_1 * sizeof(VAR_2[0]));
 VAR_0->c.size += VAR_1;
}
