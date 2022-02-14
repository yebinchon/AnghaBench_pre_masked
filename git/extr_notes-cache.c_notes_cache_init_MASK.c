
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct notes_cache {int tree; int validity; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (struct notes_cache*,int ,int) ;
 int FUNC_2 (struct repository*,int ,char const*) ;
 int FUNC_3 (struct strbuf*,char*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (char const*) ;

void FUNC_6(struct repository *VAR_4, struct notes_cache *VAR_5,
        const char *VAR_6, const char *VAR_7)
{
 struct strbuf VAR_8 = VAR_2;
 int VAR_9 = VAR_1;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->validity = FUNC_5(VAR_7);

 FUNC_3(&VAR_8, "refs/notes/%s", VAR_6);
 if (!FUNC_2(VAR_4, VAR_8.buf, VAR_7))
  VAR_9 |= VAR_0;
 FUNC_0(&VAR_5->tree, VAR_8.buf, VAR_3, VAR_9);
 FUNC_4(&VAR_8);
}
