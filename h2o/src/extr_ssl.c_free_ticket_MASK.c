
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_session_ticket_t {int keybuf; int hmac; int cipher; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct st_session_ticket_t*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct st_session_ticket_t *VAR_0)
{
    int VAR_1 = FUNC_0(VAR_0->cipher), VAR_2 = FUNC_1(VAR_0->hmac);
    FUNC_3(VAR_0->keybuf, 0, VAR_1 + VAR_2);
    FUNC_2(VAR_0);
}
