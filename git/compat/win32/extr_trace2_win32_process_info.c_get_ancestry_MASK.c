
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_writer {int dummy; } ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 struct json_writer VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct json_writer*,scalar_t__) ;
 int FUNC_3 (struct json_writer*,int ) ;
 int FUNC_4 (struct json_writer*) ;
 int FUNC_5 (struct json_writer*) ;
 int VAR_3 ;
 int FUNC_6 (char*,int ,char*,struct json_writer*) ;

__attribute__((used)) static void FUNC_7(void)
{
 HANDLE VAR_4 = FUNC_1(VAR_2, 0);

 if (VAR_4 != VAR_0) {
  struct json_writer VAR_5 = VAR_1;

  FUNC_3(&VAR_5, 0);
  FUNC_2(&VAR_5, VAR_4);
  FUNC_4(&VAR_5);

  FUNC_6("process", VAR_3, "windows/ancestry",
     &VAR_5);

  FUNC_5(&VAR_5);
  FUNC_0(VAR_4);
 }
}
