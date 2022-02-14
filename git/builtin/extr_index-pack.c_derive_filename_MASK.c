
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct strbuf*,char const*,size_t) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (char const*,char*,size_t*) ;

__attribute__((used)) static const char *FUNC_6(const char *VAR_0, const char *VAR_1,
       struct strbuf *VAR_2)
{
 size_t VAR_3;
 if (!FUNC_5(VAR_0, ".pack", &VAR_3))
  FUNC_1(FUNC_0("packfile name '%s' does not end with '.pack'"),
      VAR_0);
 FUNC_2(VAR_2, VAR_0, VAR_3);
 FUNC_3(VAR_2, '.');
 FUNC_4(VAR_2, VAR_1);
 return VAR_2->buf;
}
