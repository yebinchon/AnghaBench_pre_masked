
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct json_writer {int json; } ;
struct TYPE_3__ {scalar_t__ too_many_files; } ;


 struct json_writer VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*,int,int *,struct json_writer*) ;
 int FUNC_1 (char const*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct json_writer*) ;
 int FUNC_3 (struct json_writer*,int ) ;
 int FUNC_4 (struct json_writer*,char*,int ) ;
 int FUNC_5 (struct json_writer*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_7(const char *VAR_4, int VAR_5)
{
 const char *VAR_6 = "version";
 struct json_writer VAR_7 = VAR_0;

 FUNC_3(&VAR_7, 0);
 FUNC_0(VAR_6, VAR_4, VAR_5, ((void*)0), &VAR_7);
 FUNC_4(&VAR_7, "evt", VAR_1);
 FUNC_4(&VAR_7, "exe", VAR_2);
 FUNC_2(&VAR_7);

 FUNC_6(&VAR_3, &VAR_7.json);
 FUNC_5(&VAR_7);

 if (VAR_3.too_many_files)
  FUNC_1(VAR_4, VAR_5);
}
