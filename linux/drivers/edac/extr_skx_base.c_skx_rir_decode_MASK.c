
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct decoded_addr {size_t imc; size_t channel; int chan_addr; int rank_address; int channel_rank; int dimm; int rank; int addr; TYPE_4__* dev; } ;
struct TYPE_9__ {TYPE_3__* imc; } ;
struct TYPE_8__ {TYPE_2__* chan; } ;
struct TYPE_7__ {TYPE_1__* dimms; } ;
struct TYPE_6__ {scalar_t__ close_pg; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_4__*,size_t,size_t,int,int,int ) ;
 int FUNC_2 (TYPE_4__*,size_t,size_t,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char*,int ,...) ;

__attribute__((used)) static bool FUNC_9(struct decoded_addr *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 int VAR_5;
 u32 VAR_6, VAR_7;
 u64 VAR_8, VAR_9 = 0, VAR_10;

 if (VAR_1->dev->imc[VAR_1->imc].chan[VAR_1->channel].dimms[0].close_pg)
  VAR_5 = 6;
 else
  VAR_5 = 13;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_2(VAR_1->dev, VAR_1->imc, VAR_1->channel, VAR_2, VAR_6);
  VAR_10 = FUNC_4(VAR_6);
  if (FUNC_6(VAR_6)) {
   if (VAR_9 <= VAR_1->chan_addr &&
       VAR_1->chan_addr <= VAR_10)
    goto rir_found;
  }
  VAR_9 = VAR_10;
 }
 FUNC_8(0, "No RIR entry for 0x%llx\n", VAR_1->addr);
 return 0;

rir_found:
 VAR_8 = VAR_1->chan_addr >> VAR_5;
 VAR_8 /= FUNC_7(VAR_6);
 VAR_8 <<= VAR_5;
 VAR_8 |= VAR_1->chan_addr & FUNC_0(VAR_5 - 1, 0);

 VAR_1->rank_address = VAR_8;
 VAR_3 = (VAR_1->chan_addr >> VAR_5) % FUNC_7(VAR_6);

 FUNC_1(VAR_1->dev, VAR_1->imc, VAR_1->channel, VAR_3, VAR_2, VAR_7);
 VAR_1->rank_address = VAR_8 - FUNC_5(VAR_7);
 VAR_4 = FUNC_3(VAR_7);
 VAR_1->channel_rank = VAR_4;
 VAR_1->dimm = VAR_4 / 4;
 VAR_1->rank = VAR_4 % 4;

 FUNC_8(2, "0x%llx: dimm=%d rank=%d chan_rank=%d rank_addr=0x%llx\n",
   VAR_1->addr, VAR_1->dimm, VAR_1->rank,
   VAR_1->channel_rank, VAR_1->rank_address);
 return 1;
}
