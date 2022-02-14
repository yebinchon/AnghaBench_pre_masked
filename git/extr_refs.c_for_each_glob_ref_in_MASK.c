
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_filter {char const* prefix; void* cb_data; int fn; int pattern; } ;
typedef int each_ref_fn ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ref_filter*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*) ;

int FUNC_7(each_ref_fn VAR_2, const char *VAR_3,
 const char *VAR_4, void *VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 struct ref_filter VAR_7;
 int VAR_8;

 if (!VAR_4 && !FUNC_2(VAR_3, "refs/"))
  FUNC_4(&VAR_6, "refs/");
 else if (VAR_4)
  FUNC_4(&VAR_6, VAR_4);
 FUNC_4(&VAR_6, VAR_3);

 if (!FUNC_1(VAR_3)) {

  FUNC_5(&VAR_6, '/');

  FUNC_3(&VAR_6, '*');
 }

 VAR_7.pattern = VAR_6.buf;
 VAR_7.prefix = VAR_4;
 VAR_7.fn = VAR_2;
 VAR_7.cb_data = VAR_5;
 VAR_8 = FUNC_0(VAR_1, &VAR_7);

 FUNC_6(&VAR_6);
 return VAR_8;
}
