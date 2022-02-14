
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct stat {int st_mode; int st_size; } ;
struct patch {scalar_t__ crlf_in_old; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*,int ,int ,struct strbuf*,int) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (struct strbuf*,char const*,int ) ;
 int FUNC_4 (struct strbuf*,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct stat *VAR_3, struct patch *VAR_4,
    const char *VAR_5, struct strbuf *VAR_6)
{
 int VAR_7 = VAR_4->crlf_in_old ?
  VAR_0 : VAR_1;
 switch (VAR_3->st_mode & VAR_2) {
 case 129:
  if (FUNC_4(VAR_6, VAR_5, VAR_3->st_size) < 0)
   return FUNC_2(FUNC_0("unable to read symlink %s"), VAR_5);
  return 0;
 case 128:
  if (FUNC_3(VAR_6, VAR_5, VAR_3->st_size) != VAR_3->st_size)
   return FUNC_2(FUNC_0("unable to open or read %s"), VAR_5);
  FUNC_1(((void*)0), VAR_5, VAR_6->buf, VAR_6->len, VAR_6, VAR_7);
  return 0;
 default:
  return -1;
 }
}
