
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository_format {scalar_t__ version; int is_bare; scalar_t__ work_tree; int unknown_extensions; scalar_t__ worktree_config; int partial_clone; int precious_objects; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (int ,int ,struct repository_format*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct repository_format*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct strbuf*,char*,char const*) ;
 int FUNC_7 (struct strbuf*,char*) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (struct repository_format*,struct strbuf*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(const char *VAR_7, struct repository_format *VAR_8, int *VAR_9)
{
 struct strbuf VAR_10 = VAR_0;
 struct strbuf VAR_11 = VAR_0;
 int VAR_12;

 VAR_12 = FUNC_2(&VAR_10, VAR_7);
 FUNC_7(&VAR_10, "/config");
 FUNC_4(VAR_8, VAR_10.buf);
 FUNC_8(&VAR_10);






 if (VAR_8->version < 0)
  return 0;

 if (FUNC_10(VAR_8, &VAR_11) < 0) {
  if (VAR_9) {
   FUNC_11("%s", VAR_11.buf);
   FUNC_8(&VAR_11);
   *VAR_9 = -1;
   return -1;
  }
  FUNC_0("%s", VAR_11.buf);
 }

 VAR_5 = VAR_8->precious_objects;
 FUNC_5(VAR_8->partial_clone);
 VAR_6 = VAR_8->worktree_config;
 FUNC_9(&VAR_8->unknown_extensions, 0);

 if (VAR_6) {




  FUNC_6(&VAR_10, "%s/config.worktree", VAR_7);
  FUNC_3(VAR_4, VAR_10.buf, VAR_8);
  FUNC_8(&VAR_10);
  VAR_12 = 0;
 }

 if (!VAR_12) {
  if (VAR_8->is_bare != -1) {
   VAR_3 = VAR_8->is_bare;
   if (VAR_3 == 1)
    VAR_2 = -1;
  }
  if (VAR_8->work_tree) {
   FUNC_1(VAR_1);
   VAR_1 = FUNC_12(VAR_8->work_tree);
   VAR_2 = -1;
  }
 }

 return 0;
}
