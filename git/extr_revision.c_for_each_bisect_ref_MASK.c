
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_store {int dummy; } ;
typedef int each_ref_fn ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct ref_store*,int ,int ,void*,int ) ;
 int FUNC_1 (struct strbuf*,char*,char const*) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static int FUNC_3(struct ref_store *VAR_1, each_ref_fn VAR_2,
          void *VAR_3, const char *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 int VAR_6;
 FUNC_1(&VAR_5, "refs/bisect/%s", VAR_4);
 VAR_6 = FUNC_0(VAR_1, VAR_5.buf, VAR_2, VAR_3, 0);
 FUNC_2(&VAR_5);
 return VAR_6;
}
