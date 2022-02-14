
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_4__ {int id; int physical; } ;
struct TYPE_3__ {int local; int peer; } ;
struct chap {int NTRespSent; TYPE_2__ auth; int authresponse; TYPE_1__ challenge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int,char*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (char*,char*,int ,int ,char,int ,int ,int) ;
 int FUNC_2 (char*) ;
 char FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct chap *VAR_3, char *VAR_4, char *VAR_5

             , u_char VAR_6, int VAR_7

            )
{
  u_char *VAR_8;

  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_3->auth.id, VAR_3->challenge.peer

                         , VAR_6, VAR_3->challenge.local, VAR_3->authresponse, VAR_7

                        );

  if (VAR_8) {
    FUNC_0(VAR_3->auth.physical, VAR_1, VAR_3->auth.id,
               VAR_8, *VAR_8 + 1 + FUNC_3(VAR_4), VAR_4);

    VAR_3->NTRespSent = !VAR_7;
    VAR_2 = 0;

    FUNC_2(VAR_8);
  } else
    FUNC_0(VAR_3->auth.physical, VAR_0, VAR_3->auth.id,
               "Out of memory!", 14, ((void*)0));
}
