
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct object_id {int dummy; } ;
struct notes_tree {int dummy; } ;
struct notes_rewrite_cfg {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct notes_tree*,char const*) ;
 int FUNC_2 (struct notes_tree*,struct object_id*,struct object_id*,int,int ) ;
 int FUNC_3 (struct notes_rewrite_cfg*,struct object_id*,struct object_id*) ;
 struct notes_tree VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int ,struct notes_rewrite_cfg*,char const*) ;
 int FUNC_7 (struct notes_tree*) ;
 scalar_t__ FUNC_8 (char*,struct object_id*) ;
 struct notes_rewrite_cfg* FUNC_9 (char const*) ;
 int FUNC_10 (int *,int *,int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (struct strbuf*,int ) ;
 int FUNC_12 (struct strbuf**) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (struct strbuf*) ;
 struct strbuf** FUNC_15 (struct strbuf*,char) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_16(int VAR_7, const char *VAR_8)
{
 struct strbuf VAR_9 = VAR_2;
 struct notes_rewrite_cfg *VAR_10 = ((void*)0);
 struct notes_tree *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 const char *VAR_13 = "Notes added by 'git notes copy'";

 if (VAR_8) {
  VAR_10 = FUNC_9(VAR_8);
  if (!VAR_10)
   return 0;
 } else {
  FUNC_10(((void*)0), ((void*)0), ((void*)0), VAR_1);
  VAR_11 = &VAR_4;
 }

 while (FUNC_11(&VAR_9, VAR_5) != VAR_0) {
  struct object_id VAR_14, VAR_15;
  struct strbuf **VAR_16;
  int VAR_17;

  VAR_16 = FUNC_15(&VAR_9, ' ');
  if (!VAR_16[0] || !VAR_16[1])
   FUNC_4(FUNC_0("malformed input line: '%s'."), VAR_9.buf);
  FUNC_14(VAR_16[0]);
  FUNC_14(VAR_16[1]);
  if (FUNC_8(VAR_16[0]->buf, &VAR_14))
   FUNC_4(FUNC_0("failed to resolve '%s' as a valid ref."), VAR_16[0]->buf);
  if (FUNC_8(VAR_16[1]->buf, &VAR_15))
   FUNC_4(FUNC_0("failed to resolve '%s' as a valid ref."), VAR_16[1]->buf);

  if (VAR_8)
   VAR_17 = FUNC_3(VAR_10, &VAR_14, &VAR_15);
  else
   VAR_17 = FUNC_2(VAR_11, &VAR_14, &VAR_15, VAR_7,
     VAR_3);

  if (VAR_17) {
   FUNC_5(FUNC_0("failed to copy notes from '%s' to '%s'"),
         VAR_16[0]->buf, VAR_16[1]->buf);
   VAR_12 = 1;
  }

  FUNC_12(VAR_16);
 }

 if (!VAR_8) {
  FUNC_1(VAR_6, VAR_11, VAR_13);
  FUNC_7(VAR_11);
 } else {
  FUNC_6(VAR_6, VAR_10, VAR_13);
 }
 FUNC_13(&VAR_9);
 return VAR_12;
}
