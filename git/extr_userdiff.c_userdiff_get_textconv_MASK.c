
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdiff_driver {struct notes_cache* textconv_cache; int textconv; int name; scalar_t__ textconv_want_cache; } ;
struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct notes_cache {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct repository*,struct notes_cache*,int ,int ) ;
 int FUNC_1 (struct strbuf*,char*,int ) ;
 int FUNC_2 (struct strbuf*) ;
 struct notes_cache* FUNC_3 (int) ;

struct userdiff_driver *FUNC_4(struct repository *VAR_1,
           struct userdiff_driver *VAR_2)
{
 if (!VAR_2->textconv)
  return ((void*)0);

 if (VAR_2->textconv_want_cache && !VAR_2->textconv_cache) {
  struct notes_cache *VAR_3 = FUNC_3(sizeof(*VAR_3));
  struct strbuf VAR_4 = VAR_0;

  FUNC_1(&VAR_4, "textconv/%s", VAR_2->name);
  FUNC_0(VAR_1, VAR_3, VAR_4.buf, VAR_2->textconv);
  VAR_2->textconv_cache = VAR_3;
  FUNC_2(&VAR_4);
 }

 return VAR_2;
}
