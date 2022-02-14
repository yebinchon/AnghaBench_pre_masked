
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct wa_counters {int gc; int pad; int user; } ;
struct pblk_line_meta {int dummy; } ;
struct pblk {void* gc_rst_wa; void* pad_rst_wa; void* user_rst_wa; int gc_wa; int pad_wa; int user_wa; struct pblk_line_meta lm; } ;
struct line_header {scalar_t__ version_major; int version_minor; } ;
struct line_emeta {struct line_header header; } ;


 int FUNC_0 (int *,void*) ;
 struct wa_counters* FUNC_1 (struct pblk_line_meta*,struct line_emeta*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pblk *VAR_0,
       struct line_emeta *VAR_1)
{
 struct pblk_line_meta *VAR_2 = &VAR_0->lm;
 struct line_header *VAR_3 = &VAR_1->header;
 struct wa_counters *VAR_4 = FUNC_1(VAR_2, VAR_1);


 if (VAR_3->version_major > 0 || VAR_3->version_minor >= 2) {
  u64 VAR_5 = FUNC_2(VAR_4->user);
  u64 VAR_6 = FUNC_2(VAR_4->pad);
  u64 VAR_7 = FUNC_2(VAR_4->gc);

  FUNC_0(&VAR_0->user_wa, VAR_5);
  FUNC_0(&VAR_0->pad_wa, VAR_6);
  FUNC_0(&VAR_0->gc_wa, VAR_7);

  VAR_0->user_rst_wa = VAR_5;
  VAR_0->pad_rst_wa = VAR_6;
  VAR_0->gc_rst_wa = VAR_7;
 }
}
