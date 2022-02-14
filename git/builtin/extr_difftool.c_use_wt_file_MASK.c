
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; int len; } ;
struct stat {int st_mode; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct strbuf*,int ,char const*) ;
 int FUNC_2 (int *,struct object_id*,int,struct stat*,int ,char const*,int ) ;
 scalar_t__ FUNC_3 (struct object_id*) ;
 int FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (struct object_id*,struct object_id*) ;
 scalar_t__ FUNC_6 (struct object_id*,struct object_id*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct strbuf*,char const*) ;
 int FUNC_9 (struct strbuf*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(const char *VAR_4, const char *VAR_5,
         struct object_id *VAR_6)
{
 struct strbuf VAR_7 = VAR_2;
 struct stat VAR_8;
 int VAR_9 = 0;

 FUNC_8(&VAR_7, VAR_4);
 FUNC_1(&VAR_7, VAR_7.len, VAR_5);

 if (!FUNC_4(VAR_7.buf, &VAR_8) && !FUNC_0(VAR_8.st_mode)) {
  struct object_id VAR_10;
  int VAR_11 = FUNC_7(VAR_7.buf, VAR_1);

  if (VAR_11 >= 0 &&
      !FUNC_2(&VAR_3, &VAR_10, VAR_11, &VAR_8, VAR_0, VAR_5, 0)) {
   if (FUNC_3(VAR_6)) {
    FUNC_5(VAR_6, &VAR_10);
    VAR_9 = 1;
   } else if (FUNC_6(VAR_6, &VAR_10))
    VAR_9 = 1;
  }
 }

 FUNC_9(&VAR_7);

 return VAR_9;
}
