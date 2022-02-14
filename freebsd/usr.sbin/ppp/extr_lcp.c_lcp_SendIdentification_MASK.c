
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_4__ {int bundle; } ;
struct TYPE_3__ {char* ident; } ;
struct lcp {char* want_magic; TYPE_2__ fsm; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,int,char const**,int ,int,int ) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (TYPE_2__*,int ,int ,char*,scalar_t__,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char**,char*) ;

int
FUNC_8(struct lcp *VAR_4)
{
  static u_char VAR_5;
  u_char VAR_6[VAR_1 - 3];
  const char *VAR_7[2];
  char *VAR_8[2];

  if (*VAR_4->cfg.ident == '\0')
    return 0;

  VAR_7[0] = VAR_4->cfg.ident;
  VAR_7[1] = ((void*)0);

  FUNC_0(VAR_8, 1, VAR_7, VAR_4->fsm.bundle, 1, FUNC_3());

  FUNC_7(&VAR_4->want_magic, VAR_6);
  FUNC_6(VAR_6 + 4, VAR_8[0], sizeof VAR_6 - 5);
  VAR_6[sizeof VAR_6 - 1] = '\0';

  FUNC_2(&VAR_4->fsm, VAR_0, VAR_5++, VAR_6, 4 + FUNC_5(VAR_6 + 4), VAR_3);
  FUNC_4(VAR_2, " MAGICNUM %08x\n", VAR_4->want_magic);
  FUNC_4(VAR_2, " TEXT %s\n", VAR_6 + 4);

  FUNC_1(1, VAR_8);
  return 1;
}
