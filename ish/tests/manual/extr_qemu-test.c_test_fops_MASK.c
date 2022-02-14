
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double,double) ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;
 double FUNC_6 (double,double) ;
 double FUNC_7 (double) ;
 int FUNC_8 (char*,double,double,...) ;
 double FUNC_9 (double) ;
 double FUNC_10 (double) ;
 double FUNC_11 (double) ;

void FUNC_12(double VAR_0, double VAR_1)
{
    FUNC_8("a=%f b=%f a+b=%f\n", VAR_0, VAR_1, VAR_0 + VAR_1);
    FUNC_8("a=%f b=%f a-b=%f\n", VAR_0, VAR_1, VAR_0 - VAR_1);
    FUNC_8("a=%f b=%f a*b=%f\n", VAR_0, VAR_1, VAR_0 * VAR_1);
    FUNC_8("a=%f b=%f a/b=%f\n", VAR_0, VAR_1, VAR_0 / VAR_1);
    FUNC_8("a=%f b=%f fmod(a, b)=%f\n", VAR_0, VAR_1, FUNC_6(VAR_0, VAR_1));
    FUNC_8("a=%f sqrt(a)=%f\n", VAR_0, FUNC_10(VAR_0));
    FUNC_8("a=%f sin(a)=%f\n", VAR_0, FUNC_9(VAR_0));
    FUNC_8("a=%f cos(a)=%f\n", VAR_0, FUNC_4(VAR_0));
    FUNC_8("a=%f tan(a)=%f\n", VAR_0, FUNC_11(VAR_0));
    FUNC_8("a=%f log(a)=%f\n", VAR_0, FUNC_7(VAR_0));
    FUNC_8("a=%f exp(a)=%f\n", VAR_0, FUNC_5(VAR_0));
    FUNC_8("a=%f b=%f atan2(a, b)=%f\n", VAR_0, VAR_1, FUNC_3(VAR_0, VAR_1));

    FUNC_8("a=%f asin(sin(a))=%f\n", VAR_0, FUNC_1(FUNC_9(VAR_0)));
    FUNC_8("a=%f acos(cos(a))=%f\n", VAR_0, FUNC_0(FUNC_4(VAR_0)));
    FUNC_8("a=%f atan(tan(a))=%f\n", VAR_0, FUNC_2(FUNC_11(VAR_0)));

}
