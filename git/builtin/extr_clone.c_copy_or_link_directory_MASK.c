
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct TYPE_2__ {int st_mode; } ;
struct dir_iterator {int relative_path; TYPE_1__ st; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct dir_iterator*) ;
 struct dir_iterator* FUNC_7 (int ,unsigned int) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct strbuf*,char) ;
 int FUNC_13 (struct strbuf*,int ) ;
 int FUNC_14 (struct strbuf*,int) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct strbuf *VAR_8, struct strbuf *VAR_9,
       const char *VAR_10)
{
 int VAR_11, VAR_12;
 struct dir_iterator *VAR_13;
 int VAR_14;
 unsigned int VAR_15;

 FUNC_10(VAR_9->buf, 0777);

 VAR_15 = VAR_1 | VAR_0;
 VAR_13 = FUNC_7(VAR_8->buf, VAR_15);

 if (!VAR_13)
  FUNC_5(FUNC_1("failed to start iterator over '%s'"), VAR_8->buf);

 FUNC_12(VAR_8, '/');
 VAR_11 = VAR_8->len;
 FUNC_12(VAR_9, '/');
 VAR_12 = VAR_9->len;

 while ((VAR_14 = FUNC_6(VAR_13)) == VAR_4) {
  FUNC_14(VAR_8, VAR_11);
  FUNC_13(VAR_8, VAR_13->relative_path);
  FUNC_14(VAR_9, VAR_12);
  FUNC_13(VAR_9, VAR_13->relative_path);

  if (FUNC_0(VAR_13->st.st_mode)) {
   FUNC_10(VAR_9->buf, 0777);
   continue;
  }


  if (!FUNC_8(VAR_13->relative_path, "info/alternates")) {
   FUNC_2(VAR_8, VAR_10);
   continue;
  }

  if (FUNC_15(VAR_9->buf) && VAR_5 != VAR_2)
   FUNC_5(FUNC_1("failed to unlink '%s'"), VAR_9->buf);
  if (!VAR_7) {
   if (!FUNC_9(FUNC_11(VAR_8->buf), VAR_9->buf))
    continue;
   if (VAR_6 > 0)
    FUNC_5(FUNC_1("failed to create link '%s'"), VAR_9->buf);
   VAR_7 = 1;
  }
  if (FUNC_3(VAR_9->buf, VAR_8->buf, 0666))
   FUNC_5(FUNC_1("failed to copy file to '%s'"), VAR_9->buf);
 }

 if (VAR_14 != VAR_3) {
  FUNC_14(VAR_8, VAR_11);
  FUNC_4(FUNC_1("failed to iterate over '%s'"), VAR_8->buf);
 }
}
