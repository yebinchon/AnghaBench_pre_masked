
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct json_writer {int json; } ;


 struct json_writer VAR_0 ;
 int FUNC_0 (char const*,char const*,int,int *,struct json_writer*) ;
 int FUNC_1 (struct json_writer*,char const**) ;
 int FUNC_2 (struct json_writer*) ;
 int FUNC_3 (struct json_writer*,int ) ;
 int FUNC_4 (struct json_writer*,char*) ;
 int FUNC_5 (struct json_writer*,char*,int) ;
 int FUNC_6 (struct json_writer*,char*,char const*) ;
 int FUNC_7 (struct json_writer*) ;
 int FUNC_8 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(const char *VAR_2, int VAR_3, uint64_t VAR_4,
         int VAR_5, const char *VAR_6, const char **VAR_7)
{
 const char *VAR_8 = "exec";
 struct json_writer VAR_9 = VAR_0;

 FUNC_3(&VAR_9, 0);
 FUNC_0(VAR_8, VAR_2, VAR_3, ((void*)0), &VAR_9);
 FUNC_5(&VAR_9, "exec_id", VAR_5);
 if (VAR_6)
  FUNC_6(&VAR_9, "exe", VAR_6);
 FUNC_4(&VAR_9, "argv");
 FUNC_1(&VAR_9, VAR_7);
 FUNC_2(&VAR_9);
 FUNC_2(&VAR_9);

 FUNC_8(&VAR_1, &VAR_9.json);
 FUNC_7(&VAR_9);
}
