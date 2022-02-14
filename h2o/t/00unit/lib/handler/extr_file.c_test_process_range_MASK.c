
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_mem_pool_t ;
typedef int h2o_iovec_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 size_t* FUNC_5 (int *,int *,int,size_t*) ;

__attribute__((used)) static void FUNC_6(void)
{
    h2o_mem_pool_t VAR_0;
    size_t VAR_1, *VAR_2;
    h2o_iovec_t VAR_3;
    FUNC_3(&VAR_0);

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=, 0-10"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 1);
        FUNC_4(*VAR_2++ == 0);
        FUNC_4(*VAR_2 == 11);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=60-"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 1);
        FUNC_4(*VAR_2++ == 60);
        FUNC_4(*VAR_2 == 40);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=-10"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 1);
        FUNC_4(*VAR_2++ == 90);
        FUNC_4(*VAR_2 == 10);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=0-10, -10"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 2);
        FUNC_4(*VAR_2++ == 0);
        FUNC_4(*VAR_2++ == 11);
        FUNC_4(*VAR_2++ == 90);
        FUNC_4(*VAR_2 == 10);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=0-0, 20-89"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 2);
        FUNC_4(*VAR_2++ == 0);
        FUNC_4(*VAR_2++ == 1);
        FUNC_4(*VAR_2++ == 20);
        FUNC_4(*VAR_2 == 70);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=-10,-20"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 2);
        FUNC_4(*VAR_2++ == 90);
        FUNC_4(*VAR_2++ == 10);
        FUNC_4(*VAR_2++ == 80);
        FUNC_4(*VAR_2++ == 20);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=100-102"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=70-21"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=90-102"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 1);
        FUNC_4(*VAR_2++ == 90);
        FUNC_4(*VAR_2 == 10);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=-200"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 1);
        FUNC_4(*VAR_2++ == 0);
        FUNC_4(*VAR_2 == 100);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=100-102,  90-102, 72-30,-22, 95-"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 3);
        FUNC_4(*VAR_2++ == 90);
        FUNC_4(*VAR_2++ == 10);
        FUNC_4(*VAR_2++ == 78);
        FUNC_4(*VAR_2++ == 22);
        FUNC_4(*VAR_2++ == 95);
        FUNC_4(*VAR_2++ == 5);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes 20-1002"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes="));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bsdfeadsfjwleakjf"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=100-102, 90-102, -72-30,-22,95-"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=10-12-13, 90-102, -72, -22, 95-"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=100-102, 90-102, 70-39, -22$"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=-0"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=20-200"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 1);
        FUNC_4(*VAR_2++ == 20);
        FUNC_4(*VAR_2 == 80);
    }

    {
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 1000, &VAR_1);
        FUNC_4(VAR_1 == 1);
        FUNC_4(*VAR_2++ == 20);
        FUNC_4(*VAR_2 == 181);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=,\t,1-3 ,, ,5-9,"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 2);
        FUNC_4(*VAR_2++ == 1);
        FUNC_4(*VAR_2++ == 3);
        FUNC_4(*VAR_2++ == 5);
        FUNC_4(*VAR_2 == 5);
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes= 1-3"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=1-3 5-10"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_2 == ((void*)0));
    }

    {
        VAR_3 = FUNC_1(FUNC_0("bytes=1-\t,5-10"));
        VAR_2 = FUNC_5(&VAR_0, &VAR_3, 100, &VAR_1);
        FUNC_4(VAR_1 == 2);
        FUNC_4(*VAR_2++ == 1);
        FUNC_4(*VAR_2++ == 99);
        FUNC_4(*VAR_2++ == 5);
        FUNC_4(*VAR_2 == 6);
    }

    FUNC_2(&VAR_0);
}
