
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int ** info; } ;
typedef TYPE_1__ _pattern_t ;


 int FUNC_0 (int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int,int ,int ,int ,int ,int ) ;
 char* VAR_0 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int *,int *,int *,int *,int *) ;

void FUNC_9(_pattern_t * VAR_1, u8 VAR_2)
{
    FUNC_7("const unsigned char ","");
    FUNC_7(VAR_0,VAR_0);
    FUNC_6(VAR_2);
    FUNC_7("[] = {\n",":\n");

    int VAR_3;
    for(VAR_3 = 0; VAR_3 < 64; VAR_3 ++)
    {
        FUNC_7("  ","  DB  ");

        u8 VAR_4[4];
        u8 VAR_5; u16 VAR_6; u8 VAR_7, VAR_8;

        u8 VAR_9;


        FUNC_4(VAR_4,VAR_1->info[VAR_3][0],4);
        FUNC_8(VAR_4,&VAR_5,&VAR_6,&VAR_7,&VAR_8);
        VAR_9 = FUNC_5(VAR_6,VAR_2,VAR_3,1);

        FUNC_0(VAR_2,VAR_3,
                         VAR_9,VAR_5,VAR_6,VAR_7,VAR_8);
        FUNC_7(", ",", ");


        FUNC_4(VAR_4,VAR_1->info[VAR_3][1],4);
        FUNC_8(VAR_4,&VAR_5,&VAR_6,&VAR_7,&VAR_8);
        VAR_9 = FUNC_5(VAR_6,VAR_2,VAR_3,2);

        FUNC_1(VAR_2,VAR_3,
                         VAR_9,VAR_5,VAR_6,VAR_7,VAR_8);
        FUNC_7(", ",", ");


        FUNC_4(VAR_4,VAR_1->info[VAR_3][2],4);
        FUNC_8(VAR_4,&VAR_5,&VAR_6,&VAR_7,&VAR_8);
        VAR_9 = FUNC_5(VAR_6,VAR_2,VAR_3,3);

        FUNC_2(VAR_2,VAR_3,
                         VAR_9,VAR_5,VAR_6,VAR_7,VAR_8);
        FUNC_7(", ",", ");


        FUNC_4(VAR_4,VAR_1->info[VAR_3][3],4);
        FUNC_8(VAR_4,&VAR_5,&VAR_6,&VAR_7,&VAR_8);
        VAR_9 = FUNC_5(VAR_6,VAR_2,VAR_3,4);

        FUNC_3(VAR_2,VAR_3,
                         VAR_9,VAR_5,VAR_6,VAR_7,VAR_8);

        if(VAR_3 == 63) FUNC_7("\n","\n");
        else FUNC_7(",\n","\n");
    }

    FUNC_7("};\n\n","\n\n");
}
