
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdiff_driver {int dummy; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct diff_filespec {int dummy; } ;


 struct diff_filespec* FUNC_0 (char const*) ;
 int FUNC_1 (struct diff_filespec*,struct object_id const*,int,unsigned int) ;
 unsigned long FUNC_2 (struct repository*,struct userdiff_driver*,struct diff_filespec*,char**) ;
 int FUNC_3 (struct diff_filespec*) ;
 struct userdiff_driver* FUNC_4 (struct repository*,struct diff_filespec*) ;

int FUNC_5(struct repository *VAR_0,
      const char *VAR_1,
      unsigned VAR_2,
      const struct object_id *VAR_3,
      int VAR_4,
      char **VAR_5,
      unsigned long *VAR_6)
{
 struct diff_filespec *VAR_7;
 struct userdiff_driver *VAR_8;

 VAR_7 = FUNC_0(VAR_1);
 FUNC_1(VAR_7, VAR_3, VAR_4, VAR_2);
 VAR_8 = FUNC_4(VAR_0, VAR_7);
 if (!VAR_8) {
  FUNC_3(VAR_7);
  return 0;
 }

 *VAR_6 = FUNC_2(VAR_0, VAR_8, VAR_7, VAR_5);
 FUNC_3(VAR_7);
 return 1;
}
