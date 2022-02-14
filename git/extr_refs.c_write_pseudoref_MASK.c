
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct lock_file {int dummy; } ;


 struct lock_file VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct lock_file*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 char* FUNC_3 (char*,char const*) ;
 int FUNC_4 (struct lock_file*,char const*,int ,int ) ;
 scalar_t__ FUNC_5 (struct object_id const*) ;
 char const* FUNC_6 (struct object_id const*) ;
 int FUNC_7 (struct object_id*,struct object_id const*) ;
 scalar_t__ FUNC_8 (char const*,struct object_id*) ;
 int FUNC_9 (struct lock_file*) ;
 int FUNC_10 (struct strbuf*,char*,char const*,...) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int,int ,int ) ;

__attribute__((used)) static int FUNC_14(const char *VAR_3, const struct object_id *VAR_4,
      const struct object_id *VAR_5, struct strbuf *VAR_6)
{
 const char *VAR_7;
 int VAR_8;
 struct lock_file VAR_9 = VAR_0;
 struct strbuf VAR_10 = VAR_1;
 int VAR_11 = -1;

 if (!VAR_4)
  return 0;

 FUNC_10(&VAR_10, "%s\n", FUNC_6(VAR_4));

 VAR_7 = FUNC_3("%s", VAR_3);
 VAR_8 = FUNC_4(&VAR_9, VAR_7, 0,
            FUNC_2());
 if (VAR_8 < 0) {
  FUNC_10(VAR_6, FUNC_0("could not open '%s' for writing: %s"),
       VAR_7, FUNC_12(VAR_2));
  goto done;
 }

 if (VAR_5) {
  struct object_id VAR_12;

  if (FUNC_8(VAR_3, &VAR_12)) {
   if (!FUNC_5(VAR_5)) {
    FUNC_10(VAR_6, FUNC_0("could not read ref '%s'"),
         VAR_3);
    FUNC_9(&VAR_9);
    goto done;
   }
  } else if (FUNC_5(VAR_5)) {
   FUNC_10(VAR_6, FUNC_0("ref '%s' already exists"),
        VAR_3);
   FUNC_9(&VAR_9);
   goto done;
  } else if (!FUNC_7(&VAR_12, VAR_5)) {
   FUNC_10(VAR_6, FUNC_0("unexpected object ID when writing '%s'"),
        VAR_3);
   FUNC_9(&VAR_9);
   goto done;
  }
 }

 if (FUNC_13(VAR_8, VAR_10.buf, VAR_10.len) < 0) {
  FUNC_10(VAR_6, FUNC_0("could not write to '%s'"), VAR_7);
  FUNC_9(&VAR_9);
  goto done;
 }

 FUNC_1(&VAR_9);
 VAR_11 = 0;
done:
 FUNC_11(&VAR_10);
 return VAR_11;
}
