
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct json_writer {int json; } ;


 struct json_writer VAR_0 ;
 int FUNC_0 (char const*,char const*,int,int *,struct json_writer*) ;
 int FUNC_1 (struct json_writer*) ;
 int FUNC_2 (struct json_writer*,int ) ;
 int FUNC_3 (struct json_writer*,char*,char const*) ;
 int FUNC_4 (struct json_writer*) ;
 int FUNC_5 (struct json_writer*,char*,char const*,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(const char *VAR_2, int VAR_3, const char *VAR_4,
      va_list VAR_5)
{
 const char *VAR_6 = "error";
 struct json_writer VAR_7 = VAR_0;

 FUNC_2(&VAR_7, 0);
 FUNC_0(VAR_6, VAR_2, VAR_3, ((void*)0), &VAR_7);
 FUNC_5(&VAR_7, "msg", VAR_4, VAR_5);






 if (VAR_4 && *VAR_4)
  FUNC_3(&VAR_7, "fmt", VAR_4);
 FUNC_1(&VAR_7);

 FUNC_6(&VAR_1, &VAR_7.json);
 FUNC_4(&VAR_7);
}
