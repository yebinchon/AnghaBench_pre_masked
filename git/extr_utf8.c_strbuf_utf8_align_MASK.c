
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef scalar_t__ align_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct strbuf*,char*,unsigned int,char const*,...) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int,int ) ;

void FUNC_4(struct strbuf *VAR_3, align_type VAR_4, unsigned int VAR_5,
         const char *VAR_6)
{
 int VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = FUNC_3(VAR_6, VAR_7, 0);
 int VAR_9 = VAR_7 - VAR_8;

 if (VAR_8 >= VAR_5) {
  FUNC_1(VAR_3, VAR_6);
  return;
 }

 if (VAR_4 == VAR_0)
  FUNC_0(VAR_3, "%-*s", VAR_5 + VAR_9, VAR_6);
 else if (VAR_4 == VAR_1) {
  int VAR_10 = (VAR_5 - VAR_8) / 2;
  FUNC_0(VAR_3, "%*s%-*s", VAR_10, "", VAR_5 - VAR_10 + VAR_9, VAR_6);
 } else if (VAR_4 == VAR_2)
  FUNC_0(VAR_3, "%*s", VAR_5 + VAR_9, VAR_6);
}
