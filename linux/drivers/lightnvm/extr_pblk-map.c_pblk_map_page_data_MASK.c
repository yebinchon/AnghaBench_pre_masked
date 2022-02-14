
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_w_ctx {int lba; struct ppa_addr ppa; } ;
struct pblk_sec_meta {void* lba; } ;
struct pblk_line {int nr_valid_lbas; int sec_to_update; int ref; int id; struct pblk_emeta* emeta; } ;
struct pblk_emeta {int buf; } ;
struct pblk {int min_write_pgs; int pad_wa; int rwb; } ;
typedef scalar_t__ __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pblk*,struct pblk_line*,size_t) ;
 struct ppa_addr FUNC_1 (struct pblk*,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 scalar_t__* FUNC_5 (struct pblk*,int ) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (struct pblk*,struct pblk_line*,int) ;
 int FUNC_8 (struct pblk*,struct ppa_addr,unsigned long*) ;
 struct pblk_sec_meta* FUNC_9 (struct pblk*,void*,int) ;
 int FUNC_10 (struct pblk*,struct pblk_line*) ;
 struct pblk_line* FUNC_11 (struct pblk*) ;
 scalar_t__ FUNC_12 (struct pblk_line*) ;
 struct pblk_line* FUNC_13 (struct pblk*) ;
 int FUNC_14 (struct pblk*) ;
 struct pblk_w_ctx* FUNC_15 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_16(struct pblk *VAR_2, unsigned int VAR_3,
         struct ppa_addr *VAR_4,
         unsigned long *VAR_5,
         void *VAR_6,
         unsigned int VAR_7)
{
 struct pblk_line *VAR_8 = FUNC_11(VAR_2);
 struct pblk_emeta *VAR_9;
 struct pblk_w_ctx *VAR_10;
 __le64 *VAR_11;
 u64 VAR_12;
 int VAR_13 = VAR_2->min_write_pgs;
 int VAR_14;

 if (!VAR_8)
  return -VAR_1;

 if (FUNC_12(VAR_8)) {
  struct pblk_line *VAR_15 = VAR_8;




  VAR_8 = FUNC_13(VAR_2);
  FUNC_10(VAR_2, VAR_15);

  if (!VAR_8) {
   FUNC_14(VAR_2);
   return -VAR_1;
  }

 }

 VAR_9 = VAR_8->emeta;
 VAR_11 = FUNC_5(VAR_2, VAR_9->buf);

 VAR_12 = FUNC_7(VAR_2, VAR_8, VAR_13);

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++, VAR_12++) {
  struct pblk_sec_meta *VAR_16 = FUNC_9(VAR_2, VAR_6, VAR_14);
  __le64 VAR_17 = FUNC_4(VAR_0);


  VAR_4[VAR_14] = FUNC_1(VAR_2, VAR_12, VAR_8->id);
  if (VAR_14 < VAR_7) {
   FUNC_6(&VAR_8->ref);
   FUNC_3(&VAR_8->sec_to_update);
   VAR_10 = FUNC_15(&VAR_2->rwb, VAR_3 + VAR_14);
   VAR_10->ppa = VAR_4[VAR_14];
   VAR_16->lba = FUNC_4(VAR_10->lba);
   VAR_11[VAR_12] = FUNC_4(VAR_10->lba);
   if (VAR_11[VAR_12] != VAR_17)
    VAR_8->nr_valid_lbas++;
   else
    FUNC_2(&VAR_2->pad_wa);
  } else {
   VAR_11[VAR_12] = VAR_17;
   VAR_16->lba = VAR_17;
   FUNC_0(VAR_2, VAR_8, VAR_12);
  }
 }

 FUNC_8(VAR_2, VAR_4[0], VAR_5);
 return 0;
}
