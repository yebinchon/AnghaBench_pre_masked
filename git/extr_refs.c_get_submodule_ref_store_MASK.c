
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_store {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (struct strbuf*) ;
 struct ref_store* FUNC_3 (int *,char const*) ;
 struct ref_store* FUNC_4 (int ,int) ;
 int FUNC_5 (int *,char*,struct ref_store*,char const*) ;
 int FUNC_6 (struct strbuf*,char const*) ;
 int FUNC_7 (struct strbuf*) ;
 size_t FUNC_8 (char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (struct strbuf*,char const*) ;
 char* FUNC_10 (char const*,size_t) ;

struct ref_store *FUNC_11(const char *VAR_4)
{
 struct strbuf VAR_5 = VAR_2;
 struct ref_store *VAR_6;
 char *VAR_7 = ((void*)0);
 size_t VAR_8;

 if (!VAR_4)
  return ((void*)0);

 VAR_8 = FUNC_8(VAR_4);
 while (VAR_8 && FUNC_1(VAR_4[VAR_8 - 1]))
  VAR_8--;
 if (!VAR_8)
  return ((void*)0);

 if (VAR_4[VAR_8])

  VAR_4 = VAR_7 = FUNC_10(VAR_4, VAR_8);

 VAR_6 = FUNC_3(&VAR_3, VAR_4);
 if (VAR_6)
  goto done;

 FUNC_6(&VAR_5, VAR_4);
 if (!FUNC_2(&VAR_5))
  goto done;

 if (FUNC_9(&VAR_5, VAR_4))
  goto done;


 VAR_6 = FUNC_4(VAR_5.buf,
         VAR_1 | VAR_0);
 FUNC_5(&VAR_3, "submodule",
          VAR_6, VAR_4);

done:
 FUNC_7(&VAR_5);
 FUNC_0(VAR_7);

 return VAR_6;
}
