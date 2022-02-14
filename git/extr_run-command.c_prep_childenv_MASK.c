
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {char const* const buf; } ;
struct TYPE_6__ {void* util; } ;
struct TYPE_5__ {void* util; } ;
struct TYPE_4__ {char* util; } ;


 int FUNC_0 (char**,int) ;
 struct strbuf VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_1 (struct strbuf*,char const* const,int) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 char* FUNC_4 (char const* const,char) ;
 TYPE_3__* FUNC_5 (struct string_list*,char const* const) ;
 int FUNC_6 (struct string_list*,int ) ;
 TYPE_2__* FUNC_7 (struct string_list*,char const* const) ;
 int FUNC_8 (struct string_list*,char const* const,int ) ;
 int FUNC_9 (struct string_list*) ;

__attribute__((used)) static char **FUNC_10(const char *const *VAR_2)
{
 extern char **VAR_3;
 char **VAR_4;
 struct string_list VAR_5 = VAR_1;
 struct strbuf VAR_6 = VAR_0;
 const char *const *VAR_7;
 int VAR_8;


 for (VAR_7 = (const char *const *) VAR_3; VAR_7 && *VAR_7; VAR_7++) {
  const char *VAR_9 = FUNC_4(*VAR_7, '=');

  if (VAR_9) {
   FUNC_3(&VAR_6);
   FUNC_1(&VAR_6, *VAR_7, VAR_9 - *VAR_7);
   FUNC_5(&VAR_5, VAR_6.buf)->util = (void *) *VAR_7;
  } else {
   FUNC_5(&VAR_5, *VAR_7)->util = (void *) *VAR_7;
  }
 }
 FUNC_9(&VAR_5);


 for (VAR_7 = VAR_2; VAR_7 && *VAR_7; VAR_7++) {
  const char *VAR_10 = FUNC_4(*VAR_7, '=');

  if (VAR_10) {

   FUNC_3(&VAR_6);
   FUNC_1(&VAR_6, *VAR_7, VAR_10 - *VAR_7);
   FUNC_7(&VAR_5, VAR_6.buf)->util = (void *) *VAR_7;
  } else {

   FUNC_8(&VAR_5, *VAR_7, 0);
  }
 }


 FUNC_0(VAR_4, VAR_5.nr + 1);
 for (VAR_8 = 0; VAR_8 < VAR_5.nr; VAR_8++)
  VAR_4[VAR_8] = VAR_5.items[VAR_8].util;
 VAR_4[VAR_5.nr] = ((void*)0);

 FUNC_6(&VAR_5, 0);
 FUNC_2(&VAR_6);
 return VAR_4;
}
