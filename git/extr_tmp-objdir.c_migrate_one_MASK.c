
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct strbuf*,struct strbuf*) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_6(struct strbuf *VAR_2, struct strbuf *VAR_3)
{
 struct stat VAR_4;

 if (FUNC_5(VAR_2->buf, &VAR_4) < 0)
  return -1;
 if (FUNC_0(VAR_4.st_mode)) {
  if (!FUNC_4(VAR_3->buf, 0777)) {
   if (FUNC_1(VAR_3->buf))
    return -1;
  } else if (VAR_1 != VAR_0)
   return -1;
  return FUNC_3(VAR_2, VAR_3);
 }
 return FUNC_2(VAR_2->buf, VAR_3->buf);
}
