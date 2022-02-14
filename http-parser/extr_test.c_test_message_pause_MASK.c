
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct message {char* name; scalar_t__ upgrade; int type; scalar_t__ raw; } ;
struct TYPE_6__ {char* upgrade; scalar_t__ message_complete_cb_called; } ;
struct TYPE_5__ {scalar_t__ upgrade; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,struct message const*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 size_t FUNC_5 (char*,size_t) ;
 TYPE_1__ VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 size_t FUNC_8 (scalar_t__) ;

void
FUNC_9 (const struct message *VAR_5)
{
  char *VAR_6 = (char*) VAR_5->raw;
  size_t VAR_7 = FUNC_8(VAR_5->raw);
  size_t VAR_8;

  FUNC_6(VAR_5->type);

  do {
    VAR_8 = FUNC_5(VAR_6, VAR_7);



    if (VAR_2[0].message_complete_cb_called &&
        VAR_5->upgrade &&
        VAR_4.upgrade) {
      VAR_2[0].upgrade = VAR_6 + VAR_8;
      goto test;
    }

    if (VAR_8 < VAR_7) {


      if (FUNC_0(&VAR_4) == VAR_1) {
        return;
      }

      FUNC_2 (FUNC_0(&VAR_4) == VAR_0);
    }

    VAR_6 += VAR_8;
    VAR_7 -= VAR_8;
    FUNC_3(&VAR_4, 0);
  } while (VAR_7 > 0);

  VAR_8 = FUNC_5(((void*)0), 0);
  FUNC_2 (VAR_8 == 0);

test:
  if (VAR_3 != 1) {
    FUNC_7("\n*** num_messages != 1 after testing '%s' ***\n\n", VAR_5->name);
    FUNC_1();
  }

  if(!FUNC_4(0, 0, VAR_5)) FUNC_1();
}
