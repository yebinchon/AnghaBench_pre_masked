
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int buf; } ;
struct stat {int st_mode; int st_size; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,struct stat*) ;
 int * FUNC_9 (int ) ;
 struct dirent* FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct strbuf*,char) ;
 int FUNC_13 (struct strbuf*,char*) ;
 scalar_t__ FUNC_14 (struct strbuf*,int ,int ) ;
 int FUNC_15 (struct strbuf*) ;
 int FUNC_16 (struct strbuf*,size_t) ;
 scalar_t__ FUNC_17 (int ,int ) ;

__attribute__((used)) static void FUNC_18(struct strbuf *VAR_3, struct strbuf *VAR_4,
        DIR *VAR_5)
{
 size_t VAR_6 = VAR_3->len;
 size_t VAR_7 = VAR_4->len;
 struct dirent *VAR_8;
 FUNC_11(VAR_3->buf, 1);
 while ((VAR_8 = FUNC_10(VAR_5)) != ((void*)0)) {
  struct stat VAR_9, VAR_10;
  int VAR_11 = 0;

  FUNC_16(VAR_3, VAR_6);
  FUNC_16(VAR_4, VAR_7);

  if (VAR_8->d_name[0] == '.')
   continue;
  FUNC_13(VAR_3, VAR_8->d_name);
  FUNC_13(VAR_4, VAR_8->d_name);
  if (FUNC_8(VAR_3->buf, &VAR_9)) {
   if (VAR_2 != VAR_0)
    FUNC_6(FUNC_3("cannot stat '%s'"), VAR_3->buf);
  }
  else
   VAR_11 = 1;

  if (FUNC_8(VAR_4->buf, &VAR_10))
   FUNC_6(FUNC_3("cannot stat template '%s'"), VAR_4->buf);

  if (FUNC_0(VAR_10.st_mode)) {
   DIR *VAR_12 = FUNC_9(VAR_4->buf);
   if (!VAR_12)
    FUNC_6(FUNC_3("cannot opendir '%s'"), VAR_4->buf);
   FUNC_12(VAR_3, '/');
   FUNC_12(VAR_4, '/');
   FUNC_18(VAR_3, VAR_4, VAR_12);
   FUNC_4(VAR_12);
  }
  else if (VAR_11)
   continue;
  else if (FUNC_1(VAR_10.st_mode)) {
   struct strbuf VAR_13 = VAR_1;
   if (FUNC_14(&VAR_13, VAR_4->buf,
         VAR_10.st_size) < 0)
    FUNC_6(FUNC_3("cannot readlink '%s'"), VAR_4->buf);
   if (FUNC_17(VAR_13.buf, VAR_3->buf))
    FUNC_6(FUNC_3("cannot symlink '%s' '%s'"),
       VAR_13.buf, VAR_3->buf);
   FUNC_15(&VAR_13);
  }
  else if (FUNC_2(VAR_10.st_mode)) {
   if (FUNC_5(VAR_3->buf, VAR_4->buf, VAR_10.st_mode))
    FUNC_6(FUNC_3("cannot copy '%s' to '%s'"),
       VAR_4->buf, VAR_3->buf);
  }
  else
   FUNC_7(FUNC_3("ignoring template %s"), VAR_4->buf);
 }
}
