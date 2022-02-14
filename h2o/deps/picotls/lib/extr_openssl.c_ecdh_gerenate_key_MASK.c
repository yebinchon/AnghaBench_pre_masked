
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_KEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static EC_KEY *FUNC_4(EC_GROUP *VAR_0)
{
    EC_KEY *VAR_1;

    if ((VAR_1 = FUNC_2()) == ((void*)0))
        return ((void*)0);
    if (!FUNC_3(VAR_1, VAR_0) || !FUNC_1(VAR_1)) {
        FUNC_0(VAR_1);
        return ((void*)0);
    }

    return VAR_1;
}
