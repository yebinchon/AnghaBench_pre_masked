
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct dir_rename_entry {char const* dir; TYPE_1__ new_dir; scalar_t__ non_unique_new_dir; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,TYPE_1__*) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 char* FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 (struct strbuf*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *FUNC_5(struct dir_rename_entry *VAR_1,
         const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 int VAR_4, VAR_5;

 if (VAR_1->non_unique_new_dir)
  return ((void*)0);

 VAR_4 = FUNC_4(VAR_1->dir);
 if (VAR_1->new_dir.len == 0)
  VAR_4++;
 VAR_5 = VAR_1->new_dir.len + (FUNC_4(VAR_2) - VAR_4) + 1;
 FUNC_3(&VAR_3, VAR_5);
 FUNC_0(&VAR_3, &VAR_1->new_dir);
 FUNC_1(&VAR_3, &VAR_2[VAR_4]);

 return FUNC_2(&VAR_3, ((void*)0));
}
