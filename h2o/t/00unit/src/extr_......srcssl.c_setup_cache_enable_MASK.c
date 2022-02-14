
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lifetime; } ;
typedef int SSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,size_t) ;

__attribute__((used)) static void FUNC_5(SSL_CTX **VAR_5, size_t VAR_6, int VAR_7)
{
    size_t VAR_8;
    for (VAR_8 = 0; VAR_8 != VAR_6; ++VAR_8) {
        FUNC_0(VAR_5[VAR_8], VAR_3 | VAR_2);
        FUNC_1(VAR_5[VAR_8], VAR_0, VAR_1);
        FUNC_2(VAR_5[VAR_8], VAR_4.lifetime);
        if (VAR_7)
            FUNC_3(VAR_5[VAR_8]);
    }
    FUNC_4(VAR_5, VAR_6);
}
