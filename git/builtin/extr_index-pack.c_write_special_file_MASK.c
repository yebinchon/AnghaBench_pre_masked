
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char const*,char const*,struct strbuf*) ;
 int FUNC_3 (int ,char const*,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (struct strbuf*,unsigned char const*,char const*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int,char const*,int) ;

__attribute__((used)) static void FUNC_9(const char *VAR_3, const char *VAR_4,
          const char *VAR_5, const unsigned char *VAR_6,
          const char **VAR_7)
{
 struct strbuf VAR_8 = VAR_1;
 const char *VAR_9;
 int VAR_10;
 int VAR_11 = FUNC_7(VAR_4);

 if (VAR_5)
  VAR_9 = FUNC_2(VAR_5, VAR_3, &VAR_8);
 else
  VAR_9 = FUNC_5(&VAR_8, VAR_6, VAR_3);

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10 < 0) {
  if (VAR_2 != VAR_0)
   FUNC_3(FUNC_0("cannot write %s file '%s'"),
      VAR_3, VAR_9);
 } else {
  if (VAR_11 > 0) {
   FUNC_8(VAR_10, VAR_4, VAR_11);
   FUNC_8(VAR_10, "\n", 1);
  }
  if (FUNC_1(VAR_10) != 0)
   FUNC_3(FUNC_0("cannot close written %s file '%s'"),
      VAR_3, VAR_9);
  if (VAR_7)
   *VAR_7 = VAR_3;
 }
 FUNC_6(&VAR_8);
}
