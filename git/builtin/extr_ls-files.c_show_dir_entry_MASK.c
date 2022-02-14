
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct dir_entry {int len; int name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct index_state const*,struct dir_entry*,int *,int,int ) ;
 int FUNC_2 (char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct index_state const*,int *,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct index_state *VAR_4,
      const char *VAR_5, struct dir_entry *VAR_6)
{
 int VAR_7 = VAR_0;

 if (VAR_7 > VAR_6->len)
  FUNC_0("git ls-files: internal error - directory entry not superset of prefix");

 if (!FUNC_1(VAR_4, VAR_6, &VAR_1, VAR_7, VAR_2))
  return;

 FUNC_2(VAR_5, VAR_3);
 FUNC_3(VAR_4, ((void*)0), VAR_6->name);
 FUNC_4(VAR_6->name);
}
