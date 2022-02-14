
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_alternate_setup {int error_mode; int submodule_name; int reference; } ;
struct strbuf {int buf; } ;
struct object_directory {int path; } ;


 struct strbuf VAR_0 ;



 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,struct strbuf*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (struct strbuf*,int ,size_t) ;
 int FUNC_6 (struct strbuf*,char*,int ) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,char*,size_t*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(
  struct object_directory *VAR_2, void *VAR_3)
{
 struct submodule_alternate_setup *VAR_4 = VAR_3;
 size_t VAR_5;





 if (FUNC_9(VAR_2->path, "/objects", &VAR_5)) {
  char *VAR_6;
  struct strbuf VAR_7 = VAR_0;
  struct strbuf VAR_8 = VAR_0;
  FUNC_5(&VAR_7, VAR_2->path, VAR_5);







  FUNC_6(&VAR_7, "/modules/%s/", VAR_4->submodule_name);

  VAR_6 = FUNC_1(VAR_7.buf, &VAR_8);
  if (VAR_6) {
   FUNC_8(VAR_4->reference, FUNC_10(VAR_7.buf));
   FUNC_4(VAR_6);
  } else {
   switch (VAR_4->error_mode) {
   case 130:
    FUNC_2(FUNC_0("submodule '%s' cannot add alternate: %s"),
        VAR_4->submodule_name, VAR_8.buf);
   case 128:
    FUNC_3(VAR_1, FUNC_0("submodule '%s' cannot add alternate: %s"),
     VAR_4->submodule_name, VAR_8.buf);
   case 129:
    ;
   }
  }
  FUNC_7(&VAR_7);
 }

 return 0;
}
