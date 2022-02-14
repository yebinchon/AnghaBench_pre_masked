
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct raw_object_store {struct object_directory* odb; } ;
struct object_directory {char const* path; struct object_directory* next; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct raw_object_store *VAR_0,
     struct strbuf *VAR_1,
     const char *VAR_2)
{
 struct object_directory *VAR_3;


 if (!FUNC_3(VAR_1->buf)) {
  FUNC_1(FUNC_0("object directory %s does not exist; "
   "check .git/objects/info/alternates"),
        VAR_1->buf);
  return 0;
 }





 for (VAR_3 = VAR_0->odb; VAR_3; VAR_3 = VAR_3->next) {
  if (!FUNC_2(VAR_1->buf, VAR_3->path))
   return 0;
 }
 if (!FUNC_2(VAR_1->buf, VAR_2))
  return 0;

 return 1;
}
