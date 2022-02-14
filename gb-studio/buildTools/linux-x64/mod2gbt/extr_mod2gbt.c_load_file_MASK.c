
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (void*,unsigned int,int,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,int ,int ) ;
 unsigned int FUNC_5 (int *) ;
 void* FUNC_6 (unsigned int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;

void *FUNC_9(const char *VAR_1)
{
    unsigned int VAR_2;
    void *VAR_3 = ((void*)0);
    FILE *VAR_4 = FUNC_1(VAR_1, "rb");

    if (VAR_4 == ((void*)0))
    {
        FUNC_7("ERROR: %s couldn't be opened!\n", VAR_1);
        return ((void*)0);
    }

    FUNC_4(VAR_4, 0, VAR_0);
    VAR_2 = FUNC_5(VAR_4);
    if (VAR_2 == 0)
    {
        FUNC_7("ERROR: Size of %s is 0!\n", VAR_1);
        FUNC_0(VAR_4);
        return ((void*)0);
    }

    FUNC_8(VAR_4);
    VAR_3 = FUNC_6(VAR_2);
    if (VAR_3 == ((void*)0))
    {
        FUNC_7("ERROR: Not enought memory to load %s!\n", VAR_1);
        FUNC_0(VAR_4);
        return ((void*)0);
    }

    if (FUNC_2(VAR_3, VAR_2, 1, VAR_4) != 1)
    {
        FUNC_7("ERROR: Error while reading.\n");
        FUNC_0(VAR_4);
        FUNC_3(VAR_3);
        return ((void*)0);
    }

    FUNC_0(VAR_4);

    return VAR_3;
}
