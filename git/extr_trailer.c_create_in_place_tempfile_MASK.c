
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct stat {int st_mode; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,...) ;
 int * FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 int FUNC_6 (struct strbuf*,char const*,int) ;
 int FUNC_7 (struct strbuf*,char*) ;
 int FUNC_8 (struct strbuf*) ;
 char* FUNC_9 (char const*,char) ;
 int VAR_2 ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static FILE *FUNC_11(const char *VAR_3)
{
 struct stat VAR_4;
 struct strbuf VAR_5 = VAR_0;
 const char *VAR_6;
 FILE *VAR_7;

 if (FUNC_5(VAR_3, &VAR_4))
  FUNC_3(FUNC_1("could not stat %s"), VAR_3);
 if (!FUNC_0(VAR_4.st_mode))
  FUNC_2(FUNC_1("file %s is not a regular file"), VAR_3);
 if (!(VAR_4.st_mode & VAR_1))
  FUNC_2(FUNC_1("file %s is not writable by user"), VAR_3);


 VAR_6 = FUNC_9(VAR_3, '/');
 if (VAR_6 != ((void*)0))
  FUNC_6(&VAR_5, VAR_3, VAR_6 - VAR_3 + 1);
 FUNC_7(&VAR_5, "git-interpret-trailers-XXXXXX");

 VAR_2 = FUNC_10(VAR_5.buf, VAR_4.st_mode);
 FUNC_8(&VAR_5);
 VAR_7 = FUNC_4(VAR_2, "w");
 if (!VAR_7)
  FUNC_3(FUNC_1("could not open temporary file"));

 return VAR_7;
}
