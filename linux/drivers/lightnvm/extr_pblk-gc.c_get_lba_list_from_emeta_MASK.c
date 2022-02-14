
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_meta {unsigned int* emeta_len; } ;
struct pblk_line {int id; } ;
struct pblk {struct pblk_line_meta lm; } ;
struct line_emeta {int dummy; } ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (struct pblk*,struct line_emeta*) ;
 int FUNC_1 (struct line_emeta*) ;
 void* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *,int ,unsigned int) ;
 int FUNC_4 (struct pblk*,char*,int ,...) ;
 int FUNC_5 (struct pblk*,struct pblk_line*,struct line_emeta*) ;
 int FUNC_6 (struct pblk*,struct line_emeta*) ;

__attribute__((used)) static __le64 *FUNC_7(struct pblk *VAR_1,
           struct pblk_line *VAR_2)
{
 struct line_emeta *VAR_3;
 struct pblk_line_meta *VAR_4 = &VAR_1->lm;
 unsigned int VAR_5 = VAR_4->emeta_len[2];
 __le64 *VAR_6;
 int VAR_7;

 VAR_3 = FUNC_2(VAR_4->emeta_len[0], VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3);
 if (VAR_7) {
  FUNC_4(VAR_1, "line %d read emeta failed (%d)\n",
    VAR_2->id, VAR_7);
  FUNC_1(VAR_3);
  return ((void*)0);
 }







 VAR_7 = FUNC_6(VAR_1, VAR_3);
 if (VAR_7) {
  FUNC_4(VAR_1, "inconsistent emeta (line %d)\n",
    VAR_2->id);
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 VAR_6 = FUNC_2(VAR_5, VAR_0);

 if (VAR_6)
  FUNC_3(VAR_6, FUNC_0(VAR_1, VAR_3), VAR_5);

 FUNC_1(VAR_3);

 return VAR_6;
}
