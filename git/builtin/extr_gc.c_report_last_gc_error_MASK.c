
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct stat {scalar_t__ st_mtime; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (struct strbuf*,char*,int ) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_8(void)
{
 struct strbuf VAR_4 = VAR_1;
 int VAR_5 = 0;
 ssize_t VAR_6;
 struct stat VAR_7;
 char *VAR_8 = FUNC_3("gc.log");

 if (FUNC_4(VAR_8, &VAR_7)) {
  if (VAR_2 == VAR_0)
   goto done;

  VAR_5 = FUNC_1(FUNC_0("cannot stat '%s'"), VAR_8);
  goto done;
 }

 if (VAR_7.st_mtime < VAR_3)
  goto done;

 VAR_6 = FUNC_5(&VAR_4, VAR_8, 0);
 if (VAR_6 < 0)
  VAR_5 = FUNC_1(FUNC_0("cannot read '%s'"), VAR_8);
 else if (VAR_6 > 0) {





  FUNC_7(FUNC_0("The last gc run reported the following. "
          "Please correct the root cause\n"
          "and remove %s.\n"
          "Automatic cleanup will not be performed "
          "until the file is removed.\n\n"
          "%s"),
       VAR_8, VAR_4.buf);
  VAR_5 = 1;
 }
 FUNC_6(&VAR_4);
done:
 FUNC_2(VAR_8);
 return VAR_5;
}
