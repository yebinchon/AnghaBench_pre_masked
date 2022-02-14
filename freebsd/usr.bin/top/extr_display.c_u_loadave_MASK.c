
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_2(int VAR_6, double *VAR_7)
{
    int VAR_8;

    if (VAR_6 != -1)
    {

 if (VAR_6 != VAR_0)
 {
     FUNC_0(VAR_1, VAR_4);
     FUNC_1("%5d", VAR_6);
     VAR_0 = VAR_6;
 }


 VAR_8 = VAR_2;
    }
    else
    {
 VAR_8 = VAR_3;
    }


    FUNC_0(VAR_8, VAR_5);



    for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
    {
 FUNC_1("%s%5.2f",
     VAR_8 == 0 ? "" : ", ",
     VAR_7[VAR_8]);
    }
}
