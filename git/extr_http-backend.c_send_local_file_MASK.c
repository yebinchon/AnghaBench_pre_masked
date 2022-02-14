
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct stat {int st_mtime; int st_size; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct strbuf*) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,struct stat*) ;
 char* FUNC_5 (char*,char const*) ;
 int FUNC_6 (struct strbuf*,int ,int ) ;
 int FUNC_7 (struct strbuf*,int ,int ) ;
 int FUNC_8 (struct strbuf*,int ,char const*) ;
 int VAR_4 ;
 int FUNC_9 (struct strbuf*,char*,char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,char*,scalar_t__) ;
 char* FUNC_13 (size_t) ;
 scalar_t__ FUNC_14 (int,char*,size_t) ;

__attribute__((used)) static void FUNC_15(struct strbuf *VAR_5, const char *VAR_6,
    const char *VAR_7)
{
 char *VAR_8 = FUNC_5("%s", VAR_7);
 size_t VAR_9 = 8192;
 char *VAR_10 = FUNC_13(VAR_9);
 int VAR_11;
 struct stat VAR_12;

 VAR_11 = FUNC_10(VAR_8, VAR_0);
 if (VAR_11 < 0)
  FUNC_9(VAR_5, "Cannot open '%s': %s", VAR_8, FUNC_11(VAR_3));
 if (FUNC_4(VAR_11, &VAR_12) < 0)
  FUNC_1("Cannot stat '%s'", VAR_8);

 FUNC_7(VAR_5, VAR_1, VAR_12.st_size);
 FUNC_8(VAR_5, VAR_2, VAR_6);
 FUNC_6(VAR_5, VAR_4, VAR_12.st_mtime);
 FUNC_2(VAR_5);

 for (;;) {
  ssize_t VAR_13 = FUNC_14(VAR_11, VAR_10, VAR_9);
  if (VAR_13 < 0)
   FUNC_1("Cannot read '%s'", VAR_8);
  if (!VAR_13)
   break;
  FUNC_12(1, VAR_10, VAR_13);
 }
 FUNC_0(VAR_11);
 FUNC_3(VAR_10);
 FUNC_3(VAR_8);
}
