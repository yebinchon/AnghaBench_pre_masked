
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,int) ;
 int VAR_7 ;
 int FUNC_2 (int ,long,int ) ;
 long FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int,...) ;
 scalar_t__ VAR_8 ;

void FUNC_5(void)
{
    long VAR_9;

    if (!VAR_3)
    {
        return;
    }

    VAR_3 = VAR_1;


    VAR_9 = FUNC_3(VAR_7);

    if (VAR_6)
          FUNC_4("[RecEnd  ] CheckSum[0x%08X] Length[%4d] Length[0x%X] RecEnd[0x%08lX]\n",
                VAR_0, VAR_2, VAR_2, VAR_9);

    FUNC_2( VAR_7, -((long) VAR_2), VAR_4);

    FUNC_1("Data   ", -1);

    FUNC_2( VAR_7, -4, VAR_4);

    FUNC_1("Address   ", -1);

    FUNC_2( VAR_7, -4, VAR_4);

    FUNC_1("Length   ", -1);

    FUNC_0( VAR_2 );

    FUNC_2( VAR_7, VAR_9, VAR_5);

    VAR_0 += VAR_2;

    VAR_0 = ~VAR_0 + 1;

    FUNC_0( VAR_0 );

    if (VAR_8)
        FUNC_4("[Created Record of %d Bytes with CheckSum [0x%8X]\n", VAR_2, VAR_0);
}
