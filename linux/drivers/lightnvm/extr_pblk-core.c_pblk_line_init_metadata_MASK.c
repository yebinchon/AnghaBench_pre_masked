
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pblk_line_mgmt {int free_lock; int bad_list; } ;
struct pblk_line_meta {int blk_per_line; int min_blk_line; int lun_bitmap_len; } ;
struct pblk_line {int sec_in_line; int seq_nr; int id; struct pblk_emeta* emeta; TYPE_1__* lun_bitmap; int type; int list; int lock; int state; int blk_bitmap; scalar_t__ smeta; } ;
struct pblk_emeta {struct line_emeta* buf; } ;
struct pblk {int instance_uuid; struct pblk_line_mgmt l_mg; struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int all_luns; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct TYPE_5__ {void* crc; int version_minor; int version_major; int type; void* id; int uuid; void* identifier; } ;
struct line_smeta {void* prev_id; TYPE_1__ header; void* crc; void* window_wr_lun; void* seq_nr; } ;
struct line_header {int dummy; } ;
struct line_emeta {void* prev_id; void* crc; void* next_id; void* nr_valid_lbas; void* nr_lbas; void* seq_nr; TYPE_1__ header; } ;
typedef int guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_8 (struct pblk*,TYPE_1__*) ;
 int FUNC_9 (struct pblk*,struct line_smeta*) ;
 int FUNC_10 (struct pblk*,char*,int ) ;
 int FUNC_11 (struct pblk*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct pblk *VAR_7, struct pblk_line *VAR_8,
      struct pblk_line *VAR_9)
{
 struct nvm_tgt_dev *VAR_10 = VAR_7->dev;
 struct nvm_geo *VAR_11 = &VAR_10->geo;
 struct pblk_line_meta *VAR_12 = &VAR_7->lm;
 struct pblk_line_mgmt *VAR_13 = &VAR_7->l_mg;
 struct pblk_emeta *VAR_14 = VAR_8->emeta;
 struct line_emeta *VAR_15 = VAR_14->buf;
 struct line_smeta *VAR_16 = (struct line_smeta *)VAR_8->smeta;
 int VAR_17;




 VAR_17 = VAR_12->blk_per_line -
   FUNC_1(VAR_8->blk_bitmap, VAR_12->blk_per_line);
 if (VAR_17 < VAR_12->min_blk_line) {
  FUNC_12(&VAR_13->free_lock);
  FUNC_12(&VAR_8->lock);
  VAR_8->state = VAR_2;
  FUNC_14(FUNC_11(VAR_7), VAR_8->id,
     VAR_8->state);
  FUNC_13(&VAR_8->lock);

  FUNC_6(&VAR_8->list, &VAR_13->bad_list);
  FUNC_13(&VAR_13->free_lock);

  FUNC_10(VAR_7, "line %d is bad\n", VAR_8->id);

  return 0;
 }


 VAR_8->lun_bitmap = ((void *)(VAR_16)) + sizeof(struct line_smeta);


 FUNC_0(VAR_8->lun_bitmap, 0, VAR_12->lun_bitmap_len);

 VAR_16->header.identifier = FUNC_3(VAR_4);
 FUNC_5((guid_t *)&VAR_16->header.uuid, &VAR_7->instance_uuid);
 VAR_16->header.id = FUNC_3(VAR_8->id);
 VAR_16->header.type = FUNC_2(VAR_8->type);
 VAR_16->header.version_major = VAR_5;
 VAR_16->header.version_minor = VAR_6;


 VAR_16->seq_nr = FUNC_4(VAR_8->seq_nr);
 VAR_16->window_wr_lun = FUNC_3(VAR_11->all_luns);


 if (VAR_9) {
  FUNC_7(VAR_8->lun_bitmap, VAR_9->lun_bitmap, VAR_12->lun_bitmap_len);
  VAR_16->prev_id = FUNC_3(VAR_9->id);
  VAR_9->emeta->buf->next_id = FUNC_3(VAR_8->id);
 } else {
  VAR_16->prev_id = FUNC_3(VAR_3);
 }


 VAR_16->header.crc = FUNC_3(
   FUNC_8(VAR_7, &VAR_16->header));
 VAR_16->crc = FUNC_3(FUNC_9(VAR_7, VAR_16));


 FUNC_7(&VAR_15->header, &VAR_16->header,
      sizeof(struct line_header));

 VAR_15->header.version_major = VAR_0;
 VAR_15->header.version_minor = VAR_1;
 VAR_15->header.crc = FUNC_3(
   FUNC_8(VAR_7, &VAR_15->header));

 VAR_15->seq_nr = FUNC_4(VAR_8->seq_nr);
 VAR_15->nr_lbas = FUNC_4(VAR_8->sec_in_line);
 VAR_15->nr_valid_lbas = FUNC_4(0);
 VAR_15->next_id = FUNC_3(VAR_3);
 VAR_15->crc = FUNC_3(0);
 VAR_15->prev_id = VAR_16->prev_id;

 return 1;
}
