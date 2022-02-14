
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdiff_driver {int dummy; } ;
struct strbuf {unsigned long len; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct diff_filespec {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct diff_filespec* FUNC_1 (char const*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct diff_filespec*,struct object_id const*,int,unsigned int) ;
 unsigned long FUNC_4 (struct repository*,struct userdiff_driver*,struct diff_filespec*,char**) ;
 int FUNC_5 (struct diff_filespec*) ;
 scalar_t__ FUNC_6 (struct object_id const*) ;
 int FUNC_7 (struct object_id const*) ;
 char* FUNC_8 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_9 (struct strbuf*,char*,int ) ;
 char* FUNC_10 (struct strbuf*,int *) ;
 char* FUNC_11 (int,int) ;

__attribute__((used)) static char *FUNC_12(struct repository *VAR_2,
         const struct object_id *VAR_3, unsigned int VAR_4,
         unsigned long *VAR_5, struct userdiff_driver *VAR_6,
         const char *VAR_7)
{
 char *VAR_8;
 enum object_type VAR_9;

 if (FUNC_0(VAR_4)) {
  struct strbuf VAR_10 = VAR_1;
  FUNC_9(&VAR_10, "Subproject commit %s\n", FUNC_7(VAR_3));
  *VAR_5 = VAR_10.len;
  VAR_8 = FUNC_10(&VAR_10, ((void*)0));
 } else if (FUNC_6(VAR_3)) {

  *VAR_5 = 0;
  return FUNC_11(1, 1);
 } else if (VAR_6) {
  struct diff_filespec *VAR_11 = FUNC_1(VAR_7);
  FUNC_3(VAR_11, VAR_3, 1, VAR_4);
  *VAR_5 = FUNC_4(VAR_2, VAR_6, VAR_11, &VAR_8);
  FUNC_5(VAR_11);
 } else {
  VAR_8 = FUNC_8(VAR_3, &VAR_9, VAR_5);
  if (VAR_9 != VAR_0)
   FUNC_2("object '%s' is not a blob!", FUNC_7(VAR_3));
 }
 return VAR_8;
}
