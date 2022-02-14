
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_origin {int dummy; } ;
struct blame_entry {int num_lines; scalar_t__ score; scalar_t__ s_lno; scalar_t__ lno; int unblamable; int ignored; struct blame_origin* suspect; } ;


 struct blame_entry* FUNC_0 (int,int) ;

__attribute__((used)) static struct blame_entry *FUNC_1(struct blame_entry *VAR_0, int VAR_1,
       struct blame_origin *VAR_2)
{
 struct blame_entry *VAR_3 = FUNC_0(1, sizeof(struct blame_entry));

 VAR_3->suspect = VAR_2;
 VAR_3->ignored = VAR_0->ignored;
 VAR_3->unblamable = VAR_0->unblamable;
 VAR_3->lno = VAR_0->lno + VAR_1;
 VAR_3->s_lno = VAR_0->s_lno + VAR_1;
 VAR_3->num_lines = VAR_0->num_lines - VAR_1;
 VAR_0->num_lines = VAR_1;
 VAR_0->score = 0;
 return VAR_3;
}
