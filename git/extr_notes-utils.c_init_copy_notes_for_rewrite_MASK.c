
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct notes_rewrite_cfg {char const* cmd; int enabled; int strdup_strings; int refs_from_env; int mode_from_env; struct notes_rewrite_cfg* refs; int trees; int nr; int combine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char const*) ;
 int FUNC_2 (struct notes_rewrite_cfg*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct notes_rewrite_cfg*) ;
 int FUNC_5 (struct notes_rewrite_cfg*,int ) ;
 int VAR_4 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (struct notes_rewrite_cfg*,char const*) ;
 int FUNC_8 (struct notes_rewrite_cfg*,int ) ;
 struct notes_rewrite_cfg* FUNC_9 (int,int) ;
 struct notes_rewrite_cfg* FUNC_10 (int) ;

struct notes_rewrite_cfg *FUNC_11(const char *VAR_5)
{
 struct notes_rewrite_cfg *VAR_6 = FUNC_10(sizeof(struct notes_rewrite_cfg));
 const char *VAR_7 = FUNC_3(VAR_0);
 const char *VAR_8 = FUNC_3(VAR_1);
 VAR_6->cmd = VAR_5;
 VAR_6->enabled = 1;
 VAR_6->combine = VAR_3;
 VAR_6->refs = FUNC_9(1, sizeof(struct string_list));
 VAR_6->refs->strdup_strings = 1;
 VAR_6->refs_from_env = 0;
 VAR_6->mode_from_env = 0;
 if (VAR_7) {
  VAR_6->mode_from_env = 1;
  VAR_6->combine = FUNC_6(VAR_7);
  if (!VAR_6->combine)





   FUNC_1(FUNC_0("Bad %s value: '%s'"), VAR_0,
     VAR_7);
 }
 if (VAR_8) {
  VAR_6->refs_from_env = 1;
  FUNC_7(VAR_6->refs, VAR_8);
 }
 FUNC_4(VAR_4, VAR_6);
 if (!VAR_6->enabled || !VAR_6->refs->nr) {
  FUNC_8(VAR_6->refs, 0);
  FUNC_2(VAR_6->refs);
  FUNC_2(VAR_6);
  return ((void*)0);
 }
 VAR_6->trees = FUNC_5(VAR_6->refs, VAR_2);
 FUNC_8(VAR_6->refs, 0);
 FUNC_2(VAR_6->refs);
 return VAR_6;
}
