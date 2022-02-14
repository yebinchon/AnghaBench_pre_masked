
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wa_counters {void* gc; void* pad; void* user; } ;
struct pblk_line_mgmt {int close_lock; int emeta_list; int vsc_list; } ;
struct pblk_line_meta {int blk_bitmap_len; int vsc_list_len; } ;
struct pblk_line {scalar_t__ id; scalar_t__ emeta_ssec; scalar_t__ cur_sec; int lock; int list; int nr_valid_lbas; int type; int blk_bitmap; struct pblk_emeta* emeta; } ;
struct pblk_emeta {struct line_emeta* buf; } ;
struct pblk {int instance_uuid; int gc_wa; int pad_wa; int user_wa; struct pblk_line_meta lm; struct pblk_line_mgmt l_mg; } ;
struct TYPE_2__ {void* crc; int version_minor; int version_major; int type; void* id; int uuid; void* identifier; } ;
struct line_emeta {void* crc; void* nr_valid_lbas; TYPE_1__ header; } ;
typedef int guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct line_emeta*) ;
 int FUNC_5 (struct pblk*,struct line_emeta*) ;
 struct wa_counters* FUNC_6 (struct pblk_line_meta*,struct line_emeta*) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct pblk*,struct line_emeta*) ;
 scalar_t__ FUNC_12 (struct pblk*,TYPE_1__*) ;
 int FUNC_13 (struct pblk*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct pblk *VAR_3, struct pblk_line *VAR_4)
{
 struct pblk_line_mgmt *VAR_5 = &VAR_3->l_mg;
 struct pblk_line_meta *VAR_6 = &VAR_3->lm;
 struct pblk_emeta *VAR_7 = VAR_4->emeta;
 struct line_emeta *VAR_8 = VAR_7->buf;
 struct wa_counters *VAR_9 = FUNC_6(VAR_6, VAR_8);


 FUNC_10(FUNC_5(VAR_3, VAR_8), VAR_5->vsc_list, VAR_6->vsc_list_len);
 FUNC_10(FUNC_4(VAR_8), VAR_4->blk_bitmap, VAR_6->blk_bitmap_len);

 VAR_9->user = FUNC_3(FUNC_0(&VAR_3->user_wa));
 VAR_9->pad = FUNC_3(FUNC_0(&VAR_3->pad_wa));
 VAR_9->gc = FUNC_3(FUNC_0(&VAR_3->gc_wa));

 if (FUNC_8(VAR_8->header.identifier) != VAR_2) {
  VAR_8->header.identifier = FUNC_2(VAR_2);
  FUNC_7((guid_t *)&VAR_8->header.uuid,
       &VAR_3->instance_uuid);
  VAR_8->header.id = FUNC_2(VAR_4->id);
  VAR_8->header.type = FUNC_1(VAR_4->type);
  VAR_8->header.version_major = VAR_0;
  VAR_8->header.version_minor = VAR_1;
  VAR_8->header.crc = FUNC_2(
   FUNC_12(VAR_3, &VAR_8->header));
 }

 VAR_8->nr_valid_lbas = FUNC_3(VAR_4->nr_valid_lbas);
 VAR_8->crc = FUNC_2(FUNC_11(VAR_3, VAR_8));

 FUNC_14(&VAR_5->close_lock);
 FUNC_14(&VAR_4->lock);




 if (VAR_4->emeta_ssec != VAR_4->cur_sec)
  VAR_4->emeta_ssec = VAR_4->cur_sec;

 FUNC_9(&VAR_4->list, &VAR_5->emeta_list);
 FUNC_15(&VAR_4->lock);
 FUNC_15(&VAR_5->close_lock);

 FUNC_13(VAR_3);
}
