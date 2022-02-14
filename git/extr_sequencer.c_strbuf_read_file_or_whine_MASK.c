
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*,int ) ;
 scalar_t__ FUNC_5 (struct strbuf*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct strbuf *VAR_1, const char *VAR_2)
{
 int VAR_3;
 ssize_t VAR_4;

 VAR_3 = FUNC_4(VAR_2, VAR_0);
 if (VAR_3 < 0)
  return FUNC_3(FUNC_0("could not open '%s'"), VAR_2);
 VAR_4 = FUNC_5(VAR_1, VAR_3, 0);
 FUNC_1(VAR_3);
 if (VAR_4 < 0)
  return FUNC_2(FUNC_0("could not read '%s'."), VAR_2);
 return VAR_4;
}
