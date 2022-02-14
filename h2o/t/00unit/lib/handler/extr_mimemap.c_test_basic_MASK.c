
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_mimemap_t ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,char*,int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_16()
{
    h2o_mimemap_t *VAR_1 = FUNC_4(), *VAR_2;

    FUNC_15("default-attributes", VAR_0);


    FUNC_13(FUNC_11(FUNC_6(VAR_1), "application/octet-stream"));
    {
        char VAR_3[sizeof("text/plain")];
        FUNC_14(VAR_3, "text/plain");
        FUNC_10(VAR_1, VAR_3, ((void*)0));
        FUNC_12(VAR_3, 0, sizeof(VAR_3));
    }
    FUNC_13(FUNC_11(FUNC_6(VAR_1), "text/plain"));


    FUNC_5(VAR_1, "foo", "example/foo", ((void*)0));
    FUNC_13(FUNC_11(FUNC_7(VAR_1, FUNC_1(FUNC_0("foo"))), "example/foo"));
    FUNC_13(FUNC_11(FUNC_7(VAR_1, FUNC_1(FUNC_0("FOO"))), "example/foo"));
    FUNC_13(FUNC_7(VAR_1, FUNC_1(FUNC_0("foo"))) ==
       FUNC_8(VAR_1, FUNC_1(FUNC_0("example/foo")), 0));
    FUNC_5(VAR_1, "foo", "example/overwritten", ((void*)0));
    FUNC_13(FUNC_11(FUNC_7(VAR_1, FUNC_1(FUNC_0("foo"))), "example/overwritten"));
    FUNC_13(FUNC_7(VAR_1, FUNC_1(FUNC_0("foo"))) ==
       FUNC_8(VAR_1, FUNC_1(FUNC_0("example/overwritten")), 0));
    FUNC_13(FUNC_8(VAR_1, FUNC_1(FUNC_0("example/foo")), 0) == ((void*)0));


    VAR_2 = FUNC_3(VAR_1);
    FUNC_13(FUNC_11(FUNC_6(VAR_2), "text/plain"));
    FUNC_13(FUNC_11(FUNC_7(VAR_2, FUNC_1(FUNC_0("foo"))), "example/overwritten"));
    FUNC_13(FUNC_7(VAR_1, FUNC_1(FUNC_0("foo"))) ==
       FUNC_8(VAR_1, FUNC_1(FUNC_0("example/overwritten")), 0));
    FUNC_2(VAR_2);


    FUNC_13(FUNC_11(FUNC_6(VAR_1), "text/plain"));
    FUNC_13(FUNC_11(FUNC_7(VAR_1, FUNC_1(FUNC_0("foo"))), "example/overwritten"));


    FUNC_9(VAR_1, "foo");
    FUNC_13(FUNC_11(FUNC_7(VAR_1, FUNC_1(FUNC_0("foo"))), "text/plain"));
    FUNC_13(FUNC_8(VAR_1, FUNC_1(FUNC_0("example/overwritten")), 0) == ((void*)0));
    FUNC_9(VAR_1, "foo");
    FUNC_13(FUNC_11(FUNC_7(VAR_1, FUNC_1(FUNC_0("foo"))), "text/plain"));

    FUNC_2(VAR_1);
}
