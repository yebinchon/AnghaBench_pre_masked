
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct child_process {int dummy; } ;
typedef enum protocol_version { ____Placeholder_protocol_version } protocol_version ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 struct child_process* FUNC_2 (int*,char*) ;
 struct child_process* FUNC_3 (int*,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*,char*,...) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static struct child_process *FUNC_11(int VAR_1[2], char *VAR_2,
          const char *VAR_3, const char *VAR_4,
          enum protocol_version VAR_5,
          int VAR_6)
{
 struct child_process *VAR_7;
 struct strbuf VAR_8 = VAR_0;





 char *VAR_9 = FUNC_1("GIT_OVERRIDE_VIRTUAL_HOST");
 if (VAR_9)
  VAR_9 = FUNC_10(VAR_9);
 else
  VAR_9 = FUNC_10(VAR_2);

 FUNC_9("git");





 if (FUNC_4(VAR_2))
  VAR_7 = FUNC_2(VAR_1, VAR_2);
 else
  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_6);







 FUNC_7(&VAR_8,
      "%s %s%chost=%s%c",
      VAR_4, VAR_3, 0,
      VAR_9, 0);


 if (VAR_5 > 0) {
  FUNC_6(&VAR_8, '\0');
  FUNC_7(&VAR_8, "version=%d%c",
       VAR_5, '\0');
 }

 FUNC_5(VAR_1[1], VAR_8.buf, VAR_8.len);

 FUNC_0(VAR_9);
 FUNC_8(&VAR_8);
 return VAR_7;
}
