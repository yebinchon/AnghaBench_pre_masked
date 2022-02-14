
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 struct commit_list** FUNC_0 (struct repository*,struct commit_list**,struct object_id*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,struct object_id*) ;
 int FUNC_4 (struct repository*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct strbuf*,int,char) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static void FUNC_8(struct repository *VAR_4,
     struct commit_list **VAR_5)
{
 int VAR_6;
 struct strbuf VAR_7 = VAR_2;

 VAR_6 = FUNC_5(FUNC_4(VAR_4), VAR_1);
 if (VAR_6 < 0) {
  if (VAR_3 == VAR_0)
   return;
  FUNC_2("cannot open '%s' for reading",
      FUNC_4(VAR_4));
 }

 while (!FUNC_6(&VAR_7, VAR_6, '\n')) {
  struct object_id VAR_8;
  if (FUNC_3(VAR_7.buf, &VAR_8))
   FUNC_2("unknown line in '%s': %s",
       FUNC_4(VAR_4), VAR_7.buf);
  VAR_5 = FUNC_0(VAR_4, VAR_5, &VAR_8);
 }
 FUNC_1(VAR_6);
 FUNC_7(&VAR_7);
}
