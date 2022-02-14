
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct strbuf {int dummy; } ;
struct remote {int url_nr; char const** url; int pushurl_nr; char** pushurl; int name; } ;
struct TYPE_2__ {int * util; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char*,char const*) ;
 void* FUNC_1 (struct strbuf*,int *) ;
 TYPE_1__* FUNC_2 (struct string_list*,int ) ;

__attribute__((used)) static int FUNC_3(struct remote *VAR_1, void *VAR_2)
{
 struct string_list *VAR_3 = VAR_2;
 struct strbuf VAR_4 = VAR_0;
 const char **VAR_5;
 int VAR_6, VAR_7;

 if (VAR_1->url_nr > 0) {
  FUNC_0(&VAR_4, "%s (fetch)", VAR_1->url[0]);
  FUNC_2(VAR_3, VAR_1->name)->util =
    FUNC_1(&VAR_4, ((void*)0));
 } else
  FUNC_2(VAR_3, VAR_1->name)->util = ((void*)0);
 if (VAR_1->pushurl_nr) {
  VAR_5 = VAR_1->pushurl;
  VAR_7 = VAR_1->pushurl_nr;
 } else {
  VAR_5 = VAR_1->url;
  VAR_7 = VAR_1->url_nr;
 }
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
 {
  FUNC_0(&VAR_4, "%s (push)", VAR_5[VAR_6]);
  FUNC_2(VAR_3, VAR_1->name)->util =
    FUNC_1(&VAR_4, ((void*)0));
 }

 return 0;
}
