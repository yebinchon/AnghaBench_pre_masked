
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
typedef int in ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, const struct strbuf *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = FUNC_4(VAR_3);

 if (VAR_6 < 0)
  return -1;

 if (FUNC_5(VAR_6, VAR_4->buf, VAR_4->len) < 0)
  FUNC_1("unable to write to cache daemon");
 FUNC_3(VAR_6, VAR_1);

 while (1) {
  char VAR_7[1024];
  int VAR_8;

  VAR_8 = FUNC_2(VAR_6, VAR_7, sizeof(VAR_7));
  if (VAR_8 == 0 || (VAR_8 < 0 && VAR_2 == VAR_0))
   break;
  if (VAR_8 < 0)
   FUNC_1("read error from cache daemon");
  FUNC_6(1, VAR_7, VAR_8);
  VAR_5 = 1;
 }
 FUNC_0(VAR_6);
 return VAR_5;
}
