
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int ch ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (int,char*,int,int ) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3)
{
 ssize_t VAR_4;
 char VAR_5;

 VAR_5 = 0;
 VAR_4 = FUNC_2(VAR_3, &VAR_5, sizeof(VAR_5), 0);
 if (VAR_4 < 0) {
  if (VAR_1 == VAR_0)
   return;
  FUNC_0(-1, "%s: send", VAR_2);
 }
 FUNC_1(-1, "%s: send: returned %zd", VAR_2, VAR_4);
}
