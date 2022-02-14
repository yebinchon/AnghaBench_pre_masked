
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 int FUNC_3 (char const*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2)
{
 char VAR_3[4096];
 ssize_t VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = 1;
 VAR_6 = FUNC_3(VAR_2, VAR_0, 0);
 if (VAR_6 == -1) {
  FUNC_4("open %s", VAR_2);
  goto out;
 }
 for (;;) {
  VAR_4 = FUNC_2(VAR_6, VAR_3, sizeof(VAR_3));
  if (VAR_4 > 0) {
   VAR_5 = FUNC_1(VAR_3, 1, VAR_4, VAR_1);
   if (VAR_5 < VAR_4) {
    FUNC_5("short write to stdout");
    goto out;
   }
  }
  if (VAR_4 == (ssize_t)sizeof(VAR_3))
   continue;
  if (VAR_4 >= 0 && VAR_4 < (ssize_t)sizeof(VAR_3)) {
   VAR_7 = 0;
   goto out;
  }
  FUNC_4("read from %s", VAR_2);
  goto out;
 }
out:
 FUNC_0(VAR_6);
 return (VAR_7);
}
