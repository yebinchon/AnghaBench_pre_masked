
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct json_writer {int json; } ;


 struct json_writer VAR_0 ;
 int FUNC_0 (char const*,char const*,int,int *,struct json_writer*) ;
 int FUNC_1 (struct json_writer*) ;
 int FUNC_2 (struct json_writer*,int ) ;
 int FUNC_3 (struct json_writer*,char*,int,double) ;
 int FUNC_4 (struct json_writer*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(const char *VAR_2, int VAR_3,
         uint64_t VAR_4,
         uint64_t VAR_5)
{
 const char *VAR_6 = "thread_exit";
 struct json_writer VAR_7 = VAR_0;
 double VAR_8 = (double)VAR_5 / 1000000.0;

 FUNC_2(&VAR_7, 0);
 FUNC_0(VAR_6, VAR_2, VAR_3, ((void*)0), &VAR_7);
 FUNC_3(&VAR_7, "t_rel", 6, VAR_8);
 FUNC_1(&VAR_7);

 FUNC_5(&VAR_1, &VAR_7.json);
 FUNC_4(&VAR_7);
}
