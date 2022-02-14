
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;


 struct strbuf VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*,char*,...) ;
 int FUNC_2 (struct strbuf*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct strbuf*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(const char *VAR_6, const char *VAR_7, void *VAR_8)
{
 if (VAR_3) {
  struct strbuf VAR_9 = VAR_0;
  FUNC_2(&VAR_9);

  FUNC_0(VAR_9.buf, 1, VAR_9.len, VAR_4);
  FUNC_3(&VAR_9);
 }
 if (!VAR_2 && VAR_7)
  FUNC_1("%s%c%s%c", VAR_6, VAR_1, VAR_7, VAR_5);
 else
  FUNC_1("%s%c", VAR_6, VAR_5);
 return 0;
}
