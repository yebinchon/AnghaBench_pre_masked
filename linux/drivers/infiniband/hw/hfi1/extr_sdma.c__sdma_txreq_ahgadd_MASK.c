
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sdma_txreq {TYPE_1__* descs; int num_desc; } ;
struct TYPE_2__ {int* qw; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;

void FUNC_1(
 struct sdma_txreq *VAR_9,
 u8 VAR_10,
 u8 VAR_11,
 u32 *VAR_12,
 u8 VAR_13)
{
 u32 VAR_14, VAR_15 = 0, VAR_16 = 0;
 u8 VAR_17;

 FUNC_0(VAR_10 > 9 || (VAR_13 & 3) || VAR_13 == 4);

 if (VAR_10 == 1)
  VAR_17 = VAR_0;
 else if (VAR_10 <= 5)
  VAR_17 = 129;
 else
  VAR_17 = 128;
 VAR_9->num_desc++;

 switch (VAR_17) {
 case 128:
  VAR_9->num_desc++;
  VAR_9->descs[2].qw[0] = 0;
  VAR_9->descs[2].qw[1] = 0;

 case 129:
  VAR_9->num_desc++;
  VAR_9->descs[1].qw[0] = 0;
  VAR_9->descs[1].qw[1] = 0;
  break;
 }
 VAR_13 >>= 2;
 VAR_9->descs[0].qw[1] |=
  (((u64)VAR_11 & VAR_3)
   << VAR_4) |
  (((u64)VAR_13 & VAR_1)
   << VAR_2) |
  (((u64)VAR_17 & VAR_5)
   << VAR_6) |
  (((u64)VAR_12[0] & VAR_7)
   << VAR_8);
 for (VAR_14 = 0; VAR_14 < (VAR_10 - 1); VAR_14++) {
  if (!VAR_15 && !(VAR_14 & 2))
   VAR_16++;
  VAR_9->descs[VAR_16].qw[!!(VAR_14 & 2)] |=
   (((u64)VAR_12[VAR_14 + 1])
    << VAR_15);
  VAR_15 = (VAR_15 + 32) & 63;
 }
}
