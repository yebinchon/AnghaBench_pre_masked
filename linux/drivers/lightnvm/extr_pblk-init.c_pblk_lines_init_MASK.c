
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int nr_lines; } ;
struct pblk_line {int state; int id; } ;
struct pblk {struct pblk_line* luns; struct pblk_line* lines; struct pblk_line_mgmt l_mg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 struct pblk_line* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct pblk_line*) ;
 int FUNC_4 (struct pblk*,struct pblk_line*) ;
 int FUNC_5 (struct pblk*) ;
 int FUNC_6 (struct pblk*,char*) ;
 void* FUNC_7 (struct pblk*) ;
 int FUNC_8 (struct pblk_line_mgmt*,struct pblk_line*) ;
 int FUNC_9 (struct pblk*) ;
 int FUNC_10 (struct pblk*) ;
 int FUNC_11 (struct pblk*) ;
 int FUNC_12 (struct pblk*) ;
 int FUNC_13 (struct pblk*,int) ;
 scalar_t__ FUNC_14 (struct pblk*,struct pblk_line*,void*,int) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (void*) ;

__attribute__((used)) static int FUNC_17(struct pblk *VAR_3)
{
 struct pblk_line_mgmt *VAR_4 = &VAR_3->l_mg;
 struct pblk_line *VAR_5;
 void *VAR_6;
 int VAR_7 = 0;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_9(VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_11(VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_12(VAR_3);
 if (VAR_9)
  goto fail_free_meta;

 VAR_6 = FUNC_7(VAR_3);
 if (FUNC_0(VAR_6)) {
  VAR_9 = FUNC_1(VAR_6);
  goto fail_free_luns;
 }

 VAR_3->lines = FUNC_2(VAR_4->nr_lines, sizeof(struct pblk_line),
        VAR_2);
 if (!VAR_3->lines) {
  VAR_9 = -VAR_1;
  goto fail_free_chunk_meta;
 }

 for (VAR_8 = 0; VAR_8 < VAR_4->nr_lines; VAR_8++) {
  VAR_5 = &VAR_3->lines[VAR_8];

  VAR_9 = FUNC_4(VAR_3, VAR_5);
  if (VAR_9)
   goto fail_free_lines;

  VAR_7 += FUNC_14(VAR_3, VAR_5, VAR_6, VAR_8);

  FUNC_15(FUNC_5(VAR_3), VAR_5->id,
        VAR_5->state);
 }

 if (!VAR_7) {
  FUNC_6(VAR_3, "too many bad blocks prevent for sane instance\n");
  VAR_9 = -VAR_0;
  goto fail_free_lines;
 }

 VAR_9 = FUNC_13(VAR_3, VAR_7);
 if (VAR_9)
  goto fail_free_lines;

 FUNC_16(VAR_6);
 return 0;

fail_free_lines:
 while (--VAR_8 >= 0)
  FUNC_8(VAR_4, &VAR_3->lines[VAR_8]);
 FUNC_3(VAR_3->lines);
fail_free_chunk_meta:
 FUNC_16(VAR_6);
fail_free_luns:
 FUNC_3(VAR_3->luns);
fail_free_meta:
 FUNC_10(VAR_3);

 return VAR_9;
}
