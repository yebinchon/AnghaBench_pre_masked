
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_http2_casper_t ;


 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int*,char*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
    h2o_http2_casper_t *VAR_0 = FUNC_2(13, 6);

    unsigned VAR_1 = FUNC_1(VAR_0, FUNC_0("/index.html")), VAR_2;
    FUNC_4(&VAR_2, "\x14\xfe\x45\x59", 4);
    VAR_2 &= (1 << 13) - 1;
    FUNC_5(VAR_1 == VAR_2);

    FUNC_3(VAR_0);
}
