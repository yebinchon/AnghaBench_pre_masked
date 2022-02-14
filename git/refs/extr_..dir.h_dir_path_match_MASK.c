
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct index_state {int dummy; } ;
struct dir_entry {int len; char* name; } ;


 int FUNC_0 (struct index_state const*,struct pathspec const*,char*,int,int,char*,int) ;

__attribute__((used)) static inline int FUNC_1(const struct index_state *VAR_0,
     const struct dir_entry *VAR_1,
     const struct pathspec *VAR_2,
     int VAR_3, char *VAR_4)
{
 int VAR_5 = VAR_1->len && VAR_1->name[VAR_1->len - 1] == '/';
 int VAR_6 = VAR_5 ? VAR_1->len - 1 : VAR_1->len;
 return FUNC_0(VAR_0, VAR_2, VAR_1->name, VAR_6, VAR_3, VAR_4,
         VAR_5);
}
