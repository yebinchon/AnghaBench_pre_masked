
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (char const*,struct strbuf*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct strbuf*,char*,...) ;
 scalar_t__ FUNC_4 (struct strbuf*,int ,int ) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_6, const char *VAR_7, int VAR_8,
       int VAR_9)
{
 struct strbuf VAR_10 = VAR_4;

 FUNC_3(&VAR_10, "action=%s\n", VAR_7);
 FUNC_3(&VAR_10, "timeout=%d\n", VAR_8);
 if (VAR_9 & VAR_2) {
  if (FUNC_4(&VAR_10, 0, 0) < 0)
   FUNC_0("unable to relay credential");
 }

 if (FUNC_1(VAR_6, &VAR_10) < 0) {
  if (VAR_5 != VAR_1 && VAR_5 != VAR_0)
   FUNC_0("unable to connect to cache daemon");
  if (VAR_9 & VAR_3) {
   FUNC_2(VAR_6);
   if (FUNC_1(VAR_6, &VAR_10) < 0)
    FUNC_0("unable to connect to cache daemon");
  }
 }
 FUNC_5(&VAR_10);
}
