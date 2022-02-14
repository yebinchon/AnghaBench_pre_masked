
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct message {int type; int raw; } ;
typedef int buf1 ;
struct TYPE_4__ {int headers_complete_cb_called; } ;
struct TYPE_3__ {size_t nread; scalar_t__ upgrade; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct message const*,struct message const*,struct message const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int,int ,struct message const*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 size_t FUNC_6 (char*,size_t) ;
 TYPE_1__ VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,size_t) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int,char*,size_t) ;
 int FUNC_14 (char*,size_t,int,struct message const*,struct message const*,struct message const*) ;

void
FUNC_15 (const struct message *VAR_7, const struct message *VAR_8, const struct message *VAR_9)
{
  char VAR_10[80*1024] = "\0";
  char VAR_11[80*1024] = "\0";
  char VAR_12[80*1024] = "\0";
  char VAR_13[80*1024] = "\0";

  FUNC_11(VAR_10, VAR_7->raw);
  FUNC_11(VAR_10, VAR_8->raw);
  FUNC_11(VAR_10, VAR_9->raw);

  size_t VAR_14;

  int VAR_15 = FUNC_12(VAR_10);

  int VAR_16 = 2 * (VAR_15 - 1) * (VAR_15 - 2) / 2;
  int VAR_17 = 0 ;

  size_t VAR_18, VAR_19, VAR_20;
  int VAR_21 = FUNC_2(3, VAR_7, VAR_8, VAR_9);

  int VAR_22,VAR_23,VAR_24;
  for (VAR_24 = 0; VAR_24 < 2; VAR_24 ++ ) {
    for (VAR_23 = 2; VAR_23 < VAR_15; VAR_23 ++ ) {
      for (VAR_22 = 1; VAR_22 < VAR_23; VAR_22 ++ ) {

        if (VAR_17 % 1000 == 0) {
          FUNC_9("\b\b\b\b%3.0f%%", 100 * (float)VAR_17 /(float)VAR_16);
          FUNC_3(VAR_6);
        }
        VAR_17 += 1;

        FUNC_7(VAR_24 ? VAR_1 : VAR_7->type);

        VAR_18 = VAR_22;
        FUNC_13(VAR_11, sizeof(VAR_11), VAR_10, VAR_18);
        VAR_11[VAR_18] = 0;

        VAR_19 = VAR_23 - VAR_22;
        FUNC_13(VAR_12, sizeof(VAR_11), VAR_10+VAR_22, VAR_19);
        VAR_12[VAR_19] = 0;

        VAR_20 = VAR_15 - VAR_23;
        FUNC_13(VAR_13, sizeof(VAR_11), VAR_10+VAR_23, VAR_20);
        VAR_13[VAR_20] = 0;

        FUNC_1(VAR_3 == 0);
        VAR_2[0].headers_complete_cb_called = VAR_0;

        VAR_14 = FUNC_6(VAR_11, VAR_18);

        if (!VAR_2[0].headers_complete_cb_called && VAR_4.nread != VAR_14) {
          FUNC_8(VAR_11, VAR_14);
          goto error;
        }

        if (VAR_4.upgrade) goto test;

        if (VAR_14 != VAR_18) {
          FUNC_8(VAR_11, VAR_14);
          goto error;
        }

        VAR_14 += FUNC_6(VAR_12, VAR_19);

        if (VAR_4.upgrade) goto test;

        if (VAR_14 != VAR_18 + VAR_19) {
          FUNC_8(VAR_12, VAR_14);
          goto error;
        }

        VAR_14 += FUNC_6(VAR_13, VAR_20);

        if (VAR_4.upgrade) goto test;

        if (VAR_14 != VAR_18 + VAR_19 + VAR_20) {
          FUNC_8(VAR_13, VAR_14);
          goto error;
        }

        FUNC_6(((void*)0), 0);

test:
        if (VAR_4.upgrade) {
          FUNC_14(VAR_10, VAR_14, 3, VAR_7, VAR_8, VAR_9);
        }

        if (VAR_21 != VAR_3) {
          FUNC_4(VAR_5, "\n\nParser didn't see %d messages only %d\n",
            VAR_21, VAR_3);
          goto error;
        }

        if (!FUNC_5(0, 0, VAR_7)) {
          FUNC_4(VAR_5, "\n\nError matching messages[0] in test_scan.\n");
          goto error;
        }

        if (VAR_21 > 1 && !FUNC_5(1, 0, VAR_8)) {
          FUNC_4(VAR_5, "\n\nError matching messages[1] in test_scan.\n");
          goto error;
        }

        if (VAR_21 > 2 && !FUNC_5(2, 0, VAR_9)) {
          FUNC_4(VAR_5, "\n\nError matching messages[2] in test_scan.\n");
          goto error;
        }
      }
    }
  }
  FUNC_10("\b\b\b\b100%");
  return;

 error:
  FUNC_4(VAR_5, "i=%d  j=%d\n", VAR_22, VAR_23);
  FUNC_4(VAR_5, "buf1 (%u) %s\n\n", (unsigned int)VAR_18, VAR_11);
  FUNC_4(VAR_5, "buf2 (%u) %s\n\n", (unsigned int)VAR_19 , VAR_12);
  FUNC_4(VAR_5, "buf3 (%u) %s\n", (unsigned int)VAR_20, VAR_13);
  FUNC_0();
}
