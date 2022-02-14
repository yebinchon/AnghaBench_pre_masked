
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_list {int dummy; } ;
struct pattern {int pattern; } ;


 int VAR_0 ;
 int FUNC_0 (struct pattern_list*,struct pattern*,int ) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 struct pattern* FUNC_3 (int) ;
 int FUNC_4 (int ,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(struct pattern_list *VAR_3, const char *VAR_4)
{
 struct pattern *VAR_5;
 size_t VAR_6;

 FUNC_1("adding pattern '%s'\n", VAR_4);
 VAR_6 = FUNC_5(VAR_4);
 if ((VAR_5 = FUNC_3(sizeof *VAR_5 + VAR_6 + 1)) == ((void*)0)) {
  VAR_1 = VAR_0;
  FUNC_2("malloc()");
 }
 FUNC_4(VAR_5->pattern, VAR_4, VAR_6 + 1);
 FUNC_0(VAR_3, VAR_5, VAR_2);
}
