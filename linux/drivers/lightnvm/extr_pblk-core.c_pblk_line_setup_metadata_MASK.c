
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_line_mgmt {TYPE_1__** eline_meta; int * sline_meta; int meta_bitmap; int free_lock; } ;
struct pblk_line_meta {int * emeta_len; int smeta_len; } ;
struct pblk_line {int meta_line; TYPE_1__* emeta; int smeta; } ;
struct TYPE_2__ {int sync; scalar_t__ mem; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct pblk_line *VAR_1,
         struct pblk_line_mgmt *VAR_2,
         struct pblk_line_meta *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_2->free_lock);

retry_meta:
 VAR_4 = FUNC_1(&VAR_2->meta_bitmap, VAR_0);
 if (VAR_4 == VAR_0) {
  FUNC_7(&VAR_2->free_lock);
  FUNC_2();
  FUNC_6(&VAR_2->free_lock);
  goto retry_meta;
 }

 FUNC_5(VAR_4, &VAR_2->meta_bitmap);
 VAR_1->meta_line = VAR_4;

 VAR_1->smeta = VAR_2->sline_meta[VAR_4];
 VAR_1->emeta = VAR_2->eline_meta[VAR_4];

 FUNC_4(VAR_1->smeta, 0, VAR_3->smeta_len);
 FUNC_4(VAR_1->emeta->buf, 0, VAR_3->emeta_len[0]);

 VAR_1->emeta->mem = 0;
 FUNC_0(&VAR_1->emeta->sync, 0);
}
