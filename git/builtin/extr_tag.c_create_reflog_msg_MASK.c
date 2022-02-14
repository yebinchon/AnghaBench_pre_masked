
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; } ;
struct object_id {int dummy; } ;
struct commit {int date; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (char*,char const**) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 struct commit* FUNC_4 (int ,struct object_id const*) ;
 int FUNC_5 (int ,struct object_id const*,int *) ;
 char* FUNC_6 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct strbuf*,struct object_id const*,int ) ;
 int FUNC_9 (struct strbuf*,char) ;
 int FUNC_10 (struct strbuf*,char*,int ) ;
 int FUNC_11 (struct strbuf*,char*) ;
 int FUNC_12 (struct strbuf*,int ,char const*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_13(const struct object_id *VAR_3, struct strbuf *VAR_4)
{
 enum object_type VAR_5;
 struct commit *VAR_6;
 char *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;
 const char *VAR_10;

 char *VAR_11 = FUNC_3("GIT_REFLOG_ACTION");
 if (VAR_11) {
  FUNC_11(VAR_4, VAR_11);
 } else {
  FUNC_11(VAR_4, "tag: tagging ");
  FUNC_8(VAR_4, VAR_3, VAR_0);
 }

 FUNC_11(VAR_4, " (");
 VAR_5 = FUNC_5(VAR_2, VAR_3, ((void*)0));
 switch (VAR_5) {
 default:
  FUNC_11(VAR_4, "object of unknown type");
  break;
 case 130:
  if ((VAR_7 = FUNC_6(VAR_3, &VAR_5, &VAR_8)) != ((void*)0)) {
   VAR_9 = FUNC_1(VAR_7, &VAR_10);
   FUNC_12(VAR_4, VAR_4->len, VAR_10, VAR_9);
  } else {
   FUNC_11(VAR_4, "commit object");
  }
  FUNC_2(VAR_7);

  if ((VAR_6 = FUNC_4(VAR_2, VAR_3)) != ((void*)0))
   FUNC_10(VAR_4, ", %s", FUNC_7(VAR_6->date, 0, FUNC_0(VAR_1)));
  break;
 case 128:
  FUNC_11(VAR_4, "tree object");
  break;
 case 131:
  FUNC_11(VAR_4, "blob object");
  break;
 case 129:
  FUNC_11(VAR_4, "other tag object");
  break;
 }
 FUNC_9(VAR_4, ')');
}
