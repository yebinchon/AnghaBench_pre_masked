
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct decoded_addr {scalar_t__ addr; int sktways; int chanways; scalar_t__ chan_addr; int channel; int imc; int dev; } ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_11 (scalar_t__,int,int,scalar_t__) ;
 int* VAR_1 ;

__attribute__((used)) static bool FUNC_12(struct decoded_addr *VAR_2)
{
 int VAR_3;
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;
 u64 VAR_9;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_2->dev, VAR_2->imc, VAR_3, VAR_4);
  FUNC_2(VAR_2->dev, VAR_2->imc, VAR_3, VAR_5);
  if (FUNC_3(VAR_4) <= VAR_2->addr && VAR_2->addr <= FUNC_6(VAR_5))
   goto tad_found;
 }
 FUNC_10(0, "No TAD entry for 0x%llx\n", VAR_2->addr);
 return 0;

tad_found:
 VAR_2->sktways = FUNC_8(VAR_5);
 VAR_2->chanways = FUNC_4(VAR_5);
 VAR_7 = VAR_1[FUNC_9(VAR_4)];
 VAR_8 = VAR_1[FUNC_5(VAR_4)];

 FUNC_1(VAR_2->dev, VAR_2->imc, VAR_2->channel, VAR_3, VAR_6);
 VAR_9 = VAR_2->addr - FUNC_7(VAR_6);

 if (VAR_2->chanways == 3 && VAR_7 > VAR_8) {

  VAR_9 = FUNC_11(VAR_9, VAR_8,
       VAR_2->chanways, VAR_9);
  VAR_9 = FUNC_11(VAR_9, VAR_7,
       VAR_2->sktways, VAR_9);
 } else {

  VAR_9 = FUNC_11(VAR_9, VAR_7,
       VAR_2->sktways, VAR_2->addr);
  VAR_9 = FUNC_11(VAR_9, VAR_8,
       VAR_2->chanways, VAR_2->addr);
 }

 VAR_2->chan_addr = VAR_9;

 FUNC_10(2, "0x%llx: chan_addr=0x%llx sktways=%d chanways=%d\n",
   VAR_2->addr, VAR_2->chan_addr, VAR_2->sktways, VAR_2->chanways);
 return 1;
}
