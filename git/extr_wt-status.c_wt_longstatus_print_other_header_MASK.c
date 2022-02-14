
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int hints; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int ,struct wt_status*) ;
 int FUNC_2 (struct wt_status*,char const*,char*,char const*) ;

__attribute__((used)) static void FUNC_3(struct wt_status *VAR_1,
          const char *VAR_2,
          const char *VAR_3)
{
 const char *VAR_4 = FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_1, VAR_4, "%s:", VAR_2);
 if (!VAR_1->hints)
  return;
 FUNC_2(VAR_1, VAR_4, FUNC_0("  (use \"git %s <file>...\" to include in what will be committed)"), VAR_3);
}
