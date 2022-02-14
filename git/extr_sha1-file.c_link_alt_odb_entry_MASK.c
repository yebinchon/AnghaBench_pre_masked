
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; int len; } ;
struct repository {TYPE_1__* objects; } ;
struct object_directory {struct object_directory* next; int path; } ;
struct TYPE_2__ {struct object_directory** odb_tail; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,struct strbuf*,char const*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct repository*,char*,int) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*,char const*,int) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*,int) ;
 struct object_directory* FUNC_11 (int,int) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(struct repository *VAR_1, const char *VAR_2,
 const char *VAR_3, int VAR_4, const char *VAR_5)
{
 struct object_directory *VAR_6;
 struct strbuf VAR_7 = VAR_0;

 if (!FUNC_3(VAR_2) && VAR_3) {
  FUNC_8(&VAR_7, VAR_3, 1);
  FUNC_5(&VAR_7, '/');
 }
 FUNC_6(&VAR_7, VAR_2);

 if (FUNC_7(&VAR_7) < 0 && VAR_3) {
  FUNC_2(FUNC_0("unable to normalize alternate object path: %s"),
        VAR_7.buf);
  FUNC_9(&VAR_7);
  return -1;
 }





 while (VAR_7.len && VAR_7.buf[VAR_7.len - 1] == '/')
  FUNC_10(&VAR_7, VAR_7.len - 1);

 if (!FUNC_1(VAR_1->objects, &VAR_7, VAR_5)) {
  FUNC_9(&VAR_7);
  return -1;
 }

 VAR_6 = FUNC_11(1, sizeof(*VAR_6));
 VAR_6->path = FUNC_12(VAR_7.buf);


 *VAR_1->objects->odb_tail = VAR_6;
 VAR_1->objects->odb_tail = &(VAR_6->next);
 VAR_6->next = ((void*)0);


 FUNC_4(VAR_1, VAR_7.buf, VAR_4 + 1);

 FUNC_9(&VAR_7);
 return 0;
}
