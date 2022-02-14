
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct message {char* raw; char* name; scalar_t__ upgrade; int type; } ;
struct TYPE_4__ {char const* upgrade; int headers_complete_cb_called; } ;
struct TYPE_3__ {size_t nread; scalar_t__ upgrade; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct message const*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 size_t FUNC_3 (char const*,size_t) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,size_t) ;
 int FUNC_6 (char*,char*) ;
 size_t FUNC_7 (char*) ;

void
FUNC_8 (const struct message *VAR_4)
{
  size_t VAR_5 = FUNC_7(VAR_4->raw);
  size_t VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    FUNC_4(VAR_4->type);

    size_t VAR_7;
    const char *VAR_8 = VAR_4->raw;
    const char *VAR_9 = VAR_8 + VAR_6;
    size_t VAR_10 = VAR_5 - VAR_6;

    if (VAR_6) {
      FUNC_1(VAR_2 == 0);
      VAR_1[0].headers_complete_cb_called = VAR_0;

      VAR_7 = FUNC_3(VAR_8, VAR_6);

      if (!VAR_1[0].headers_complete_cb_called && VAR_3.nread != VAR_7) {
        FUNC_1(VAR_3.nread == VAR_7);
        FUNC_5(VAR_8, VAR_7);
        FUNC_0();
      }

      if (VAR_4->upgrade && VAR_3.upgrade && VAR_2 > 0) {
        VAR_1[VAR_2 - 1].upgrade = VAR_8 + VAR_7;
        goto test;
      }

      if (VAR_7 != VAR_6) {
        FUNC_5(VAR_8, VAR_7);
        FUNC_0();
      }
    }


    VAR_7 = FUNC_3(VAR_9, VAR_10);

    if (VAR_4->upgrade && VAR_3.upgrade) {
      VAR_1[VAR_2 - 1].upgrade = VAR_9 + VAR_7;
      goto test;
    }

    if (VAR_7 != VAR_10) {
      FUNC_5(VAR_9, VAR_7);
      FUNC_0();
    }

    VAR_7 = FUNC_3(((void*)0), 0);

    if (VAR_7 != 0) {
      FUNC_5(VAR_4->raw, VAR_7);
      FUNC_0();
    }

  test:

    if (VAR_2 != 1) {
      FUNC_6("\n*** num_messages != 1 after testing '%s' ***\n\n", VAR_4->name);
      FUNC_0();
    }

    if(!FUNC_2(0, 0, VAR_4)) FUNC_0();
  }
}
