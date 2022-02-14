
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int nr; } ;
struct dir_struct {int nr; struct dir_entry** entries; } ;
struct dir_entry {int dummy; } ;


 int FUNC_0 (struct pathspec*,int *,char*) ;
 scalar_t__ FUNC_1 (int *,struct dir_entry*,struct pathspec*,int,char*) ;
 int VAR_0 ;
 char* FUNC_2 (int ,int) ;

__attribute__((used)) static char *FUNC_3(struct dir_struct *VAR_1, struct pathspec *VAR_2, int VAR_3)
{
 char *VAR_4;
 int VAR_5;
 struct dir_entry **VAR_6, **VAR_7;

 VAR_4 = FUNC_2(VAR_2->nr, 1);

 VAR_6 = VAR_7 = VAR_1->entries;
 VAR_5 = VAR_1->nr;
 while (--VAR_5 >= 0) {
  struct dir_entry *VAR_8 = *VAR_6++;
  if (FUNC_1(&VAR_0, VAR_8, VAR_2, VAR_3, VAR_4))
   *VAR_7++ = VAR_8;
 }
 VAR_1->nr = VAR_7 - VAR_1->entries;
 FUNC_0(VAR_2, &VAR_0, VAR_4);
 return VAR_4;
}
