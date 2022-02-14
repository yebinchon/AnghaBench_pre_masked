
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct stat {int st_mode; } ;
struct object_id {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 char* FUNC_3 () ;
 int FUNC_4 (struct object_id const*) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 scalar_t__ FUNC_6 (struct strbuf*,int *) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(const struct object_id *VAR_2)
{
 const char *VAR_3 = FUNC_3();
 struct stat VAR_4;
 struct strbuf VAR_5 = VAR_1;
 FILE *VAR_6;
 int VAR_7 = 0;

 if (FUNC_5(VAR_3, &VAR_4) || !FUNC_0(VAR_4.st_mode))
  return 0;

 VAR_6 = FUNC_2(VAR_3, "r");
 if (!VAR_6)
  return 0;

 if (FUNC_6(&VAR_5, VAR_6) != VAR_0)
  VAR_7 = !FUNC_8(VAR_5.buf, FUNC_4(VAR_2));

 FUNC_7(&VAR_5);
 FUNC_1(VAR_6);

 return VAR_7;
}
