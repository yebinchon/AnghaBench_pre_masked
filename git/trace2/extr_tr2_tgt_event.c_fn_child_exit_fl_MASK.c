
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
 int FUNC_4 (struct json_writer*,char*,int) ;
 int FUNC_5 (struct json_writer*) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(const char *VAR_2, int VAR_3,
        uint64_t VAR_4, int VAR_5, int VAR_6,
        int VAR_7, uint64_t VAR_8)
{
 const char *VAR_9 = "child_exit";
 struct json_writer VAR_10 = VAR_0;
 double VAR_11 = (double)VAR_8 / 1000000.0;

 FUNC_2(&VAR_10, 0);
 FUNC_0(VAR_9, VAR_2, VAR_3, ((void*)0), &VAR_10);
 FUNC_4(&VAR_10, "child_id", VAR_5);
 FUNC_4(&VAR_10, "pid", VAR_6);
 FUNC_4(&VAR_10, "code", VAR_7);
 FUNC_3(&VAR_10, "t_rel", 6, VAR_11);
 FUNC_1(&VAR_10);

 FUNC_6(&VAR_1, &VAR_10.json);

 FUNC_5(&VAR_10);
}
