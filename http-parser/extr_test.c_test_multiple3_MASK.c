
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct message {char* raw; int type; } ;
struct TYPE_2__ {scalar_t__ upgrade; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct message const*,struct message const*,struct message const*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int,int ,struct message const*) ;
 int VAR_0 ;
 size_t FUNC_4 (char*,size_t) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,size_t) ;
 int VAR_2 ;
 int FUNC_7 (char*,char*) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (char*,size_t,int,struct message const*,struct message const*,struct message const*) ;

void
FUNC_10 (const struct message *VAR_3, const struct message *VAR_4, const struct message *VAR_5)
{
  int VAR_6 = FUNC_1(3, VAR_3, VAR_4, VAR_5);

  char VAR_7[ FUNC_8(VAR_3->raw)
            + FUNC_8(VAR_4->raw)
            + FUNC_8(VAR_5->raw)
            + 1
            ];
  VAR_7[0] = '\0';

  FUNC_7(VAR_7, VAR_3->raw);
  FUNC_7(VAR_7, VAR_4->raw);
  FUNC_7(VAR_7, VAR_5->raw);

  FUNC_5(VAR_3->type);

  size_t VAR_8;

  VAR_8 = FUNC_4(VAR_7, FUNC_8(VAR_7));

  if (VAR_1.upgrade) {
    FUNC_9(VAR_7, VAR_8, 3, VAR_3, VAR_4, VAR_5);
    goto test;
  }

  if (VAR_8 != FUNC_8(VAR_7)) {
    FUNC_6(VAR_7, VAR_8);
    FUNC_0();
  }

  VAR_8 = FUNC_4(((void*)0), 0);

  if (VAR_8 != 0) {
    FUNC_6(VAR_7, VAR_8);
    FUNC_0();
  }

test:

  if (VAR_6 != VAR_0) {
    FUNC_2(VAR_2, "\n\n*** Parser didn't see 3 messages only %d *** \n", VAR_0);
    FUNC_0();
  }

  if (!FUNC_3(0, 0, VAR_3)) FUNC_0();
  if (VAR_6 > 1 && !FUNC_3(1, 0, VAR_4)) FUNC_0();
  if (VAR_6 > 2 && !FUNC_3(2, 0, VAR_5)) FUNC_0();
}
