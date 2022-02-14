
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__* cpu; } ;
struct lima_vm {TYPE_3__* bts; TYPE_2__ pd; TYPE_1__* dev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {scalar_t__ dma; scalar_t__* cpu; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__* FUNC_2 (int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_3 (struct lima_vm*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct lima_vm *VAR_8, dma_addr_t *VAR_9,
      u32 VAR_10, u32 VAR_11)
{
 u64 VAR_12;
 int VAR_13 = 0;

 for (VAR_12 = VAR_10; VAR_12 <= VAR_11; VAR_12 += VAR_2) {
  u32 VAR_14 = FUNC_1(VAR_12);
  u32 VAR_15 = FUNC_0(VAR_12);

  if (!VAR_8->bts[VAR_14].cpu) {
   dma_addr_t VAR_16;
   u32 *VAR_17;
   int VAR_18;

   VAR_8->bts[VAR_14].cpu = FUNC_2(
    VAR_8->dev->dev, VAR_2 << VAR_6,
    &VAR_8->bts[VAR_14].dma, VAR_1 | VAR_7);
   if (!VAR_8->bts[VAR_14].cpu) {
    if (VAR_12 != VAR_10)
     FUNC_3(VAR_8, VAR_10, VAR_12 - 1);
    return -VAR_0;
   }

   VAR_16 = VAR_8->bts[VAR_14].dma;
   VAR_17 = VAR_8->pd.cpu + (VAR_14 << VAR_6);
   for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
    VAR_17[VAR_18] = VAR_16 | VAR_4;
    VAR_16 += VAR_2;
   }
  }

  VAR_8->bts[VAR_14].cpu[VAR_15] = VAR_9[VAR_13++] | VAR_3;
 }

 return 0;
}
