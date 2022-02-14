
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int ,int) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char) ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

void
FUNC_8(int VAR_6, char *VAR_7)
{
    char *VAR_8;
    int VAR_9 = VAR_6 + VAR_0;
    char *VAR_10;


    VAR_10 = &VAR_4[FUNC_3(VAR_6)];


    int VAR_11 = FUNC_7(VAR_7);
    if (VAR_3 < VAR_11)
    {
 VAR_7[VAR_3] = '\0';
    }


    if (VAR_6 >= VAR_1)
    {


 if (VAR_9 - VAR_2 == 1)
 {
     FUNC_5('\n');
     VAR_2++;
 }
 else
 {
     FUNC_0(0, VAR_9);
     VAR_2 = VAR_9;
 }


 FUNC_1(VAR_7, VAR_5);


 VAR_8 = FUNC_6(VAR_10, VAR_7);


 if (VAR_8 - VAR_10 < VAR_3)
 {
     FUNC_4(VAR_8, 0, VAR_3 - (VAR_8 - VAR_10));
 }
    }
    else
    {
 FUNC_2(VAR_10, VAR_7, 0, VAR_6 + VAR_0);
    }
}
