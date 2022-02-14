
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct cache_entry {char* name; } ;


 struct cache_entry** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct cache_entry*,struct pathspec*,int *) ;
 scalar_t__ FUNC_1 (struct cache_entry*,char) ;
 int FUNC_2 (int ,char*,char,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct pathspec *VAR_4, char VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct cache_entry *VAR_7 = VAR_0[VAR_6];

  if (VAR_4 && !FUNC_0(&VAR_3, VAR_7, VAR_4, ((void*)0)))
   continue;

  if (FUNC_1(VAR_7, VAR_5) < 0)
   FUNC_2(VAR_2, "cannot chmod %cx '%s'\n", VAR_5, VAR_7->name);
 }
}
