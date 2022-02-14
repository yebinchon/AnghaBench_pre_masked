
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
struct grep_source {char* identifier; char* buf; size_t size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 int FUNC_6 (char const*,int ) ;
 scalar_t__ FUNC_7 (int,char*,size_t) ;
 char* FUNC_8 (size_t) ;
 size_t FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct grep_source *VAR_3)
{
 const char *VAR_4 = VAR_3->identifier;
 struct stat VAR_5;
 char *VAR_6;
 size_t VAR_7;
 int VAR_8;

 if (FUNC_5(VAR_4, &VAR_5) < 0) {
 err_ret:
  if (VAR_2 != VAR_0)
   FUNC_3(FUNC_1("failed to stat '%s'"), VAR_4);
  return -1;
 }
 if (!FUNC_0(VAR_5.st_mode))
  return -1;
 VAR_7 = FUNC_9(VAR_5.st_size);
 VAR_8 = FUNC_6(VAR_4, VAR_1);
 if (VAR_8 < 0)
  goto err_ret;
 VAR_6 = FUNC_8(VAR_7);
 if (VAR_5.st_size != FUNC_7(VAR_8, VAR_6, VAR_7)) {
  FUNC_3(FUNC_1("'%s': short read"), VAR_4);
  FUNC_2(VAR_8);
  FUNC_4(VAR_6);
  return -1;
 }
 FUNC_2(VAR_8);

 VAR_3->buf = VAR_6;
 VAR_3->size = VAR_7;
 return 0;
}
