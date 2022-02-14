
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_origin {int dummy; } ;
struct blame_entry {long lno; long num_lines; long s_lno; struct blame_entry* next; struct blame_origin* suspect; } ;


 int FUNC_0 (struct blame_origin*) ;
 struct blame_entry* FUNC_1 (int,int) ;

struct blame_entry *FUNC_2(struct blame_entry *VAR_0,
     long VAR_1, long VAR_2,
     struct blame_origin *VAR_3)
{
 struct blame_entry *VAR_4 = FUNC_1(1, sizeof(struct blame_entry));
 VAR_4->lno = VAR_1;
 VAR_4->num_lines = VAR_2 - VAR_1;
 VAR_4->suspect = VAR_3;
 VAR_4->s_lno = VAR_1;
 VAR_4->next = VAR_0;
 FUNC_0(VAR_3);
 return VAR_4;
}
