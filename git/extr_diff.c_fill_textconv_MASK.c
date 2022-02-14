
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdiff_driver {scalar_t__ textconv_cache; int textconv; } ;
struct repository {int dummy; } ;
struct diff_filespec {char* data; size_t size; int oid; scalar_t__ oid_valid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct diff_filespec*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct repository*,struct diff_filespec*,int ) ;
 char* FUNC_4 (scalar_t__,int *,size_t*) ;
 int FUNC_5 (scalar_t__,int *,char*,size_t) ;
 int FUNC_6 (scalar_t__) ;
 char* FUNC_7 (struct repository*,int ,struct diff_filespec*,size_t*) ;

size_t FUNC_8(struct repository *VAR_0,
       struct userdiff_driver *VAR_1,
       struct diff_filespec *VAR_2,
       char **VAR_3)
{
 size_t VAR_4;

 if (!VAR_1) {
  if (!FUNC_1(VAR_2)) {
   *VAR_3 = "";
   return 0;
  }
  if (FUNC_3(VAR_0, VAR_2, 0))
   FUNC_2("unable to read files to diff");
  *VAR_3 = VAR_2->data;
  return VAR_2->size;
 }

 if (!VAR_1->textconv)
  FUNC_0("fill_textconv called with non-textconv driver");

 if (VAR_1->textconv_cache && VAR_2->oid_valid) {
  *VAR_3 = FUNC_4(VAR_1->textconv_cache,
       &VAR_2->oid,
       &VAR_4);
  if (*VAR_3)
   return VAR_4;
 }

 *VAR_3 = FUNC_7(VAR_0, VAR_1->textconv, VAR_2, &VAR_4);
 if (!*VAR_3)
  FUNC_2("unable to read files to diff");

 if (VAR_1->textconv_cache && VAR_2->oid_valid) {

  FUNC_5(VAR_1->textconv_cache, &VAR_2->oid, *VAR_3,
    VAR_4);






  FUNC_6(VAR_1->textconv_cache);
 }

 return VAR_4;
}
