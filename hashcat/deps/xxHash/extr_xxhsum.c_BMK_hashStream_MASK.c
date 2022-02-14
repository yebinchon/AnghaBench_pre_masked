
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h64 ;
typedef int h32 ;
typedef int algoType ;
typedef int XXH64_state_t ;
typedef int XXH32_state_t ;
typedef int U64 ;
typedef int U32 ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,void*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,void*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;


 size_t FUNC_6 (void*,int,size_t,int *) ;
 int FUNC_7 (void*,int const*,int) ;

__attribute__((used)) static void FUNC_8(void* VAR_2, const algoType VAR_3, FILE* VAR_4, void* VAR_5, size_t VAR_6)
{
    XXH64_state_t VAR_7;
    XXH32_state_t VAR_8;
    size_t VAR_9;


    FUNC_1(&VAR_8, VAR_0);
    FUNC_4(&VAR_7, VAR_1);


    VAR_9 = 1;
    while (VAR_9) {
        VAR_9 = FUNC_6(VAR_5, 1, VAR_6, VAR_4);
        switch(VAR_3)
        {
        case 129:
            FUNC_2(&VAR_8, VAR_5, VAR_9);
            break;
        case 128:
            FUNC_5(&VAR_7, VAR_5, VAR_9);
            break;
        default:
            break;
        }
    }

    switch(VAR_3)
    {
    case 129:
        { U32 const VAR_10 = FUNC_0(&VAR_8);
            FUNC_7(VAR_2, &VAR_10, sizeof(VAR_10));
            break;
        }
    case 128:
        { U64 const VAR_11 = FUNC_3(&VAR_7);
            FUNC_7(VAR_2, &VAR_11, sizeof(VAR_11));
            break;
        }
    default:
            break;
    }
}
