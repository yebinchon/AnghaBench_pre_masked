
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptls_key_exchange_context_t ;
typedef int ptls_key_exchange_algorithm_t ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;




 int VAR_0 ;
 int FUNC_6 (int *,int **,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,int **,int *) ;

int FUNC_8(ptls_key_exchange_context_t **VAR_5, EVP_PKEY *VAR_6)
{
    int VAR_7, VAR_8;

    switch (VAR_8 = FUNC_4(VAR_6)) {

    case 132: {

        EC_KEY *VAR_9 = FUNC_3(VAR_6);


        ptls_key_exchange_algorithm_t *VAR_10;
        switch (FUNC_0(FUNC_2(VAR_9))) {
        case 130:
            VAR_10 = &VAR_1;
            break;
        default:
            FUNC_1(VAR_9);
            return VAR_0;
        }


        if ((VAR_7 = FUNC_7(VAR_10, VAR_5, VAR_9)) != 0) {
            FUNC_1(VAR_9);
            return VAR_7;
        }

        return 0;
    } break;
    default:
        return VAR_0;
    }
}
