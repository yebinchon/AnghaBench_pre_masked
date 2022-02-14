
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdiff_driver {int textconv; } ;
struct repository {int dummy; } ;
struct grep_source {int type; char* buf; size_t size; int * identifier; int path; } ;
struct diff_filespec {int dummy; } ;


 int FUNC_0 (char*) ;


 struct diff_filespec* FUNC_1 (int ) ;
 int FUNC_2 (struct diff_filespec*,int *,int,int) ;
 size_t FUNC_3 (struct repository*,struct userdiff_driver*,struct diff_filespec*,char**) ;
 int FUNC_4 (struct diff_filespec*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct grep_source*) ;
 int FUNC_8 (struct grep_source*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_9(struct repository *VAR_1,
         struct userdiff_driver *VAR_2,
         struct grep_source *VAR_3)
{
 struct diff_filespec *VAR_4;
 char *VAR_5;
 size_t VAR_6;

 if (!VAR_2 || !VAR_2->textconv)
  return FUNC_8(VAR_3);






 VAR_4 = FUNC_1(VAR_3->path);
 switch (VAR_3->type) {
 case 128:
  FUNC_2(VAR_4, VAR_3->identifier, 1, 0100644);
  break;
 case 129:
  FUNC_2(VAR_4, &VAR_0, 0, 0100644);
  break;
 default:
  FUNC_0("attempt to textconv something without a path?");
 }






 FUNC_5();
 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_4, &VAR_5);
 FUNC_6();
 FUNC_4(VAR_4);
 FUNC_7(VAR_3);
 VAR_3->buf = VAR_5;
 VAR_3->size = VAR_6;

 return 0;
}
