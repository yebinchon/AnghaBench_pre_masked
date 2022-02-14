
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct err_data {int buf; } ;
typedef int jv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,char*) ;
 char* FUNC_5 (int ,char) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void FUNC_7(void *VAR_2, jv VAR_3) {
  struct err_data *VAR_4 = VAR_2;
  if (FUNC_2(VAR_3) != VAR_0)
    VAR_3 = FUNC_0(VAR_3, VAR_1);
  if (!FUNC_6(FUNC_3(VAR_3), "jq: error", sizeof("jq: error") - 1))
    FUNC_4(VAR_4->buf, sizeof(VAR_4->buf), "%s", FUNC_3(VAR_3));
  if (FUNC_5(VAR_4->buf, '\n'))
    *(FUNC_5(VAR_4->buf, '\n')) = '\0';
  FUNC_1(VAR_3);
}
