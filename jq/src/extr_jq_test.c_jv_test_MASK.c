
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;


typedef int nasty ;
struct TYPE_38__ {void* ptr; } ;
struct TYPE_39__ {TYPE_1__ u; } ;
typedef TYPE_2__ jv ;
typedef int big ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__ FUNC_1 () ;
 TYPE_2__ FUNC_2 (TYPE_2__,TYPE_2__) ;
 TYPE_2__ FUNC_3 (TYPE_2__,int) ;
 int FUNC_4 (TYPE_2__) ;
 TYPE_2__ FUNC_5 (TYPE_2__,int ,int) ;
 TYPE_2__ FUNC_6 (TYPE_2__) ;
 int FUNC_7 (TYPE_2__,TYPE_2__) ;
 int FUNC_8 (TYPE_2__) ;
 scalar_t__ FUNC_9 (TYPE_2__) ;
 int FUNC_10 (TYPE_2__) ;
 TYPE_2__ FUNC_11 (TYPE_2__) ;
 TYPE_2__ FUNC_12 (int) ;
 int FUNC_13 (TYPE_2__) ;
 TYPE_2__ FUNC_14 () ;
 TYPE_2__ FUNC_15 (TYPE_2__,TYPE_2__) ;
 TYPE_2__ FUNC_16 (TYPE_2__,TYPE_2__,TYPE_2__) ;
 TYPE_2__ FUNC_17 (char*) ;
 TYPE_2__ FUNC_18 (char*) ;
 TYPE_2__ FUNC_19 (char*,...) ;
 scalar_t__ FUNC_20 (TYPE_2__) ;
 int FUNC_21 (TYPE_2__) ;
 TYPE_2__ FUNC_22 (char*,int) ;
 char* FUNC_23 (TYPE_2__) ;
 scalar_t__ FUNC_24 (char*,char*) ;
 scalar_t__ FUNC_25 (char*) ;

__attribute__((used)) static void FUNC_26() {

  {
    jv VAR_2 = FUNC_17("{\"a':\"12\"}");
    FUNC_0(FUNC_9(VAR_2) == VAR_1);
    VAR_2 = FUNC_11(VAR_2);
    FUNC_0(FUNC_24(FUNC_23(VAR_2), "Expected separator between values at line 1, column 9 (while parsing '{\"a':\"12\"}')") == 0);
    FUNC_8(VAR_2);
  }

  {
    jv VAR_3 = FUNC_1();
    FUNC_0(FUNC_9(VAR_3) == VAR_0);
    FUNC_0(FUNC_4(FUNC_6(VAR_3)) == 0);
    FUNC_0(FUNC_4(FUNC_6(VAR_3)) == 0);

    VAR_3 = FUNC_2(VAR_3, FUNC_12(42));
    FUNC_0(FUNC_4(FUNC_6(VAR_3)) == 1);
    FUNC_0(FUNC_13(FUNC_3(FUNC_6(VAR_3), 0)) == 42);

    jv VAR_4 = FUNC_2(FUNC_1(), FUNC_12(42));
    FUNC_0(FUNC_7(FUNC_6(VAR_3), FUNC_6(VAR_3)));
    FUNC_0(FUNC_7(FUNC_6(VAR_4), FUNC_6(VAR_4)));
    FUNC_0(FUNC_7(FUNC_6(VAR_3), FUNC_6(VAR_4)));
    FUNC_0(FUNC_7(FUNC_6(VAR_4), FUNC_6(VAR_3)));
    FUNC_8(VAR_4);

    VAR_4 = FUNC_2(FUNC_1(), FUNC_12(19));
    FUNC_0(!FUNC_7(FUNC_6(VAR_3), FUNC_6(VAR_4)));
    FUNC_0(!FUNC_7(FUNC_6(VAR_4), FUNC_6(VAR_3)));
    FUNC_8(VAR_4);


    FUNC_0(FUNC_10(VAR_3) == 1);
    VAR_3 = FUNC_2(VAR_3, FUNC_6(VAR_3));
    FUNC_0(FUNC_10(VAR_3) == 1);

    FUNC_0(FUNC_4(FUNC_6(VAR_3)) == 2);
    FUNC_0(FUNC_13(FUNC_3(FUNC_6(VAR_3), 0)) == 42);

    for (int VAR_5=0; VAR_5<10; VAR_5++) {
      jv VAR_6 = FUNC_3(FUNC_6(VAR_3), 1);
      FUNC_0(FUNC_9(VAR_6) == VAR_0);
      FUNC_0(FUNC_4(FUNC_6(VAR_6)) == 1);
      FUNC_0(FUNC_13(FUNC_3(FUNC_6(VAR_6), 0)) == 42);
      FUNC_8(VAR_6);
    }


    jv VAR_7 = FUNC_3(FUNC_6(VAR_3), 1);
    FUNC_0(FUNC_9(VAR_7) == VAR_0);
    FUNC_0(FUNC_4(FUNC_6(VAR_7)) == 1);
    FUNC_0(FUNC_13(FUNC_3(FUNC_6(VAR_7), 0)) == 42);

    jv VAR_8 = FUNC_6(VAR_7);
    VAR_8 = FUNC_2(VAR_8, FUNC_12(19));

    FUNC_0(FUNC_9(VAR_8) == VAR_0);
    FUNC_0(FUNC_4(FUNC_6(VAR_8)) == 2);
    FUNC_0(FUNC_13(FUNC_3(FUNC_6(VAR_8), 0)) == 42);
    FUNC_0(FUNC_13(FUNC_3(FUNC_6(VAR_8), 1)) == 19);

    FUNC_0(FUNC_9(VAR_7) == VAR_0);
    FUNC_0(FUNC_4(FUNC_6(VAR_7)) == 1);
    FUNC_0(FUNC_13(FUNC_3(FUNC_6(VAR_7), 0)) == 42);

    FUNC_8(VAR_7);

    void* VAR_9 = VAR_8;
    VAR_8 = FUNC_2(VAR_8, FUNC_12(200));
    void* VAR_10 = VAR_8;
    FUNC_0(VAR_9 == VAR_10);
    FUNC_8(VAR_8);

    jv VAR_11 = FUNC_2(FUNC_6(VAR_3), FUNC_12(19));
    FUNC_0(FUNC_4(FUNC_6(VAR_11)) == 3);
    FUNC_0(FUNC_13(FUNC_3(FUNC_6(VAR_11), 0)) == 42);
    FUNC_0(FUNC_4(FUNC_3(FUNC_6(VAR_11), 1)) == 1);
    FUNC_0(FUNC_13(FUNC_3(FUNC_6(VAR_11), 2)) == 19);
    FUNC_8(VAR_11);


    jv VAR_12 = FUNC_1();
    VAR_12 = FUNC_2(VAR_12, FUNC_12(1));
    VAR_12 = FUNC_2(VAR_12, FUNC_12(2));
    jv VAR_13 = FUNC_6(VAR_12);
    VAR_12 = FUNC_2(VAR_12, FUNC_12(3));
    VAR_12 = FUNC_5(VAR_12, 0, 1);
    FUNC_0(FUNC_4(FUNC_6(VAR_12)) == 1);
    VAR_12 = FUNC_2(VAR_12, FUNC_12(4));
    FUNC_0(FUNC_4(FUNC_6(VAR_12)) == 2);
    FUNC_0(FUNC_4(FUNC_6(VAR_13)) == 2);
    FUNC_8(VAR_12);
    FUNC_8(VAR_13);


    FUNC_0(FUNC_4(FUNC_6(VAR_3)) == 2);
    FUNC_0(FUNC_13(FUNC_3(FUNC_6(VAR_3), 0)) == 42);
    FUNC_0(FUNC_4(FUNC_3(FUNC_6(VAR_3), 1)) == 1);



    FUNC_8(VAR_3);
  }



  {
    FUNC_0(FUNC_7(FUNC_18("foo"), FUNC_22("foo", 3)));
    char VAR_14[] = "foo\0";
    jv VAR_15 = FUNC_18(VAR_14), VAR_16 = FUNC_22(VAR_14, sizeof(VAR_14));
    FUNC_0(FUNC_21(FUNC_6(VAR_15)) == (int)FUNC_25(VAR_14));
    FUNC_0(FUNC_21(FUNC_6(VAR_16)) == (int)sizeof(VAR_14));
    FUNC_8(VAR_15);
    FUNC_8(VAR_16);


    char VAR_17[] = "hello", VAR_18[] = "hello", VAR_19[] = "goodbye";
    jv VAR_20 = FUNC_18(VAR_17), VAR_21 = FUNC_18(VAR_18), VAR_22 = FUNC_18(VAR_19);
    FUNC_0(FUNC_7(FUNC_6(VAR_20), FUNC_6(VAR_21)));
    FUNC_0(FUNC_7(FUNC_6(VAR_21), FUNC_6(VAR_20)));
    FUNC_0(!FUNC_7(FUNC_6(VAR_20), FUNC_6(VAR_22)));

    FUNC_0(FUNC_20(FUNC_6(VAR_20)) == FUNC_20(FUNC_6(VAR_20)));
    FUNC_0(FUNC_20(FUNC_6(VAR_20)) == FUNC_20(FUNC_6(VAR_21)));
    FUNC_0(FUNC_20(FUNC_6(VAR_22)) != FUNC_20(FUNC_6(VAR_20)));
    FUNC_8(VAR_20);
    FUNC_8(VAR_21);
    FUNC_8(VAR_22);

    FUNC_0(FUNC_7(FUNC_18("hello42!"), FUNC_19("hello%d%s", 42, "!")));
    char VAR_23[20000];
    for (int VAR_24=0; VAR_24<(int)sizeof(VAR_23); VAR_24++) VAR_23[VAR_24] = 'a';
    VAR_23[sizeof(VAR_23)-1] = 0;
    jv VAR_25 = FUNC_19("%s", VAR_23);
    FUNC_0(FUNC_21(FUNC_6(VAR_25)) == sizeof(VAR_23) - 1);
    FUNC_0(!FUNC_24(VAR_23, FUNC_23(VAR_25)));
    FUNC_8(VAR_25);
  }


  {
    jv VAR_26 = FUNC_14();
    VAR_26 = FUNC_16(VAR_26, FUNC_18("foo"), FUNC_12(42));
    VAR_26 = FUNC_16(VAR_26, FUNC_18("bar"), FUNC_12(24));
    FUNC_0(FUNC_13(FUNC_15(FUNC_6(VAR_26), FUNC_18("foo"))) == 42);
    FUNC_0(FUNC_13(FUNC_15(FUNC_6(VAR_26), FUNC_18("bar"))) == 24);

    jv VAR_27 = FUNC_16(FUNC_6(VAR_26), FUNC_18("foo"), FUNC_12(420));
    VAR_27 = FUNC_16(VAR_27, FUNC_18("bar"), FUNC_12(240));
    FUNC_0(FUNC_13(FUNC_15(FUNC_6(VAR_26), FUNC_18("foo"))) == 42);
    FUNC_0(FUNC_13(FUNC_15(FUNC_6(VAR_26), FUNC_18("bar"))) == 24);
    FUNC_0(FUNC_13(FUNC_15(FUNC_6(VAR_27), FUNC_18("foo"))) == 420);
    FUNC_8(VAR_26);
    FUNC_0(FUNC_13(FUNC_15(FUNC_6(VAR_27), FUNC_18("bar"))) == 240);


    FUNC_8(VAR_27);
  }
}
