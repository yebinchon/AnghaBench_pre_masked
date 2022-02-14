
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct apply_state {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct apply_state*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static int FUNC_4(struct apply_state *VAR_1, const char *VAR_2)
{
 int VAR_3;
 struct strbuf VAR_4 = VAR_0;

 FUNC_0(*VAR_2 != '\0');
 FUNC_2(&VAR_4, VAR_2);
 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 FUNC_3(&VAR_4);

 return VAR_3;
}
