
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef size_t u16 ;
struct sdma_engine {size_t descq_head; size_t sdma_mask; size_t descq_tail; int dd; struct hw_sdma_desc* descq; int flushlist; int this_idx; } ;
struct hw_sdma_desc {int * qw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (struct sdma_engine*) ;

__attribute__((used)) static void FUNC_4(struct sdma_engine *VAR_16)
{
 struct hw_sdma_desc *VAR_17;
 u64 VAR_18[2];
 u64 VAR_19;
 u8 VAR_20;
 u16 VAR_21;
 u16 VAR_22, VAR_23, VAR_24;

 VAR_22 = VAR_16->descq_head & VAR_16->sdma_mask;
 VAR_23 = VAR_16->descq_tail & VAR_16->sdma_mask;
 VAR_24 = FUNC_3(VAR_16);

 FUNC_0(VAR_16->dd,
     "SDMA (%u) descq_head: %u descq_tail: %u freecnt: %u FLE %d\n",
     VAR_16->this_idx, VAR_22, VAR_23, VAR_24,
     !FUNC_2(&VAR_16->flushlist));


 while (VAR_22 != VAR_23) {
  char VAR_25[6] = { 'x', 'x', 'x', 'x', 0 };

  VAR_17 = &VAR_16->descq[VAR_22];
  VAR_18[0] = FUNC_1(VAR_17->qw[0]);
  VAR_18[1] = FUNC_1(VAR_17->qw[1]);
  VAR_25[0] = (VAR_18[1] & VAR_15) ? 'I' : '-';
  VAR_25[1] = (VAR_18[1] & VAR_14) ?
    'H' : '-';
  VAR_25[2] = (VAR_18[0] & VAR_2) ? 'F' : '-';
  VAR_25[3] = (VAR_18[0] & VAR_3) ? 'L' : '-';
  VAR_19 = (VAR_18[0] >> VAR_5)
   & VAR_4;
  VAR_20 = (VAR_18[1] >> VAR_7)
   & VAR_6;
  VAR_21 = (VAR_18[0] >> VAR_1)
   & VAR_0;
  FUNC_0(VAR_16->dd,
      "SDMA sdmadesc[%u]: flags:%s addr:0x%016llx gen:%u len:%u bytes\n",
      VAR_22, VAR_25, VAR_19, VAR_20, VAR_21);
  FUNC_0(VAR_16->dd,
      "\tdesc0:0x%016llx desc1 0x%016llx\n",
      VAR_18[0], VAR_18[1]);
  if (VAR_18[0] & VAR_2)
   FUNC_0(VAR_16->dd,
       "\taidx: %u amode: %u alen: %u\n",
       (u8)((VAR_18[1] &
      VAR_11) >>
     VAR_10),
       (u8)((VAR_18[1] &
      VAR_13) >>
     VAR_12),
       (u8)((VAR_18[1] &
      VAR_9) >>
     VAR_8));
  VAR_22++;
  VAR_22 &= VAR_16->sdma_mask;
 }
}
