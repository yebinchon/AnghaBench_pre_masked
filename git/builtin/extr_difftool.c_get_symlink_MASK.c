
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct object_id const*) ;
 int FUNC_3 (struct object_id const*) ;
 char* FUNC_4 (struct object_id const*,int*,unsigned long*) ;
 char* FUNC_5 (struct strbuf*,int *) ;
 scalar_t__ FUNC_6 (struct strbuf*,char const*,int) ;
 scalar_t__ FUNC_7 (struct strbuf*,char const*,int ) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static char *FUNC_9(const struct object_id *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 if (FUNC_2(VAR_2)) {

  struct strbuf VAR_5 = VAR_0;
  if (VAR_1) {
   if (FUNC_7(&VAR_5, VAR_3, FUNC_8(VAR_3)))
    FUNC_1(FUNC_0("could not read symlink %s"), VAR_3);
  } else if (FUNC_6(&VAR_5, VAR_3, 128))
   FUNC_1(FUNC_0("could not read symlink file %s"), VAR_3);

  VAR_4 = FUNC_5(&VAR_5, ((void*)0));
 } else {
  enum object_type VAR_6;
  unsigned long VAR_7;
  VAR_4 = FUNC_4(VAR_2, &VAR_6, &VAR_7);
  if (!VAR_4)
   FUNC_1(FUNC_0("could not read object %s for symlink %s"),
    FUNC_3(VAR_2), VAR_3);
 }

 return VAR_4;
}
