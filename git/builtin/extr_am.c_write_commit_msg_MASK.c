
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am_state {int msg_len; int msg; } ;


 char* FUNC_0 (struct am_state const*,char*) ;
 int FUNC_1 (char const*,int ,int ) ;

__attribute__((used)) static void FUNC_2(const struct am_state *VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0, "final-commit");
 FUNC_1(VAR_1, VAR_0->msg, VAR_0->msg_len);
}
