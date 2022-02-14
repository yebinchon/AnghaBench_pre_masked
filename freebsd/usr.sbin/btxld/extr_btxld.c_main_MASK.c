
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* VAR_2 ;
 int FUNC_1 (char*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char**,char*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* FUNC_3 (void*) ;
 void* VAR_9 ;
 int FUNC_4 (void*) ;
 scalar_t__ VAR_10 ;
 void* FUNC_5 (void*,int) ;
 void* VAR_11 ;
 int VAR_12 ;
 int FUNC_6 () ;
 int VAR_13 ;
 void* VAR_14 ;

int
FUNC_7(int VAR_15, char *VAR_16[])
{
    int VAR_17;

    while ((VAR_17 = FUNC_2(VAR_15, VAR_16, "qvb:E:e:f:l:o:P:W:")) != -1)
 switch (VAR_17) {
 case 'q':
     VAR_12 = 1;
     break;
 case 'v':
     VAR_13 = 1;
     break;
 case 'b':
     VAR_2 = VAR_9;
     break;
 case 'E':
     VAR_3 = FUNC_3(VAR_9);
     VAR_1 = 1;
     break;
 case 'e':
     VAR_6 = FUNC_3(VAR_9);
     break;
 case 'f':
     VAR_5 = FUNC_4(VAR_9);
     break;
 case 'l':
     VAR_7 = VAR_9;
     break;
 case 'o':
     VAR_8 = VAR_9;
     break;
 case 'P':
     VAR_11 = FUNC_5(VAR_9, 1);
     break;
 case 'W':
     VAR_14 = FUNC_5(VAR_9, VAR_0);
     break;
 default:
     FUNC_6();
 }
    VAR_15 -= VAR_10;
    VAR_16 += VAR_10;
    if (VAR_15 != 1)
 FUNC_6();
    FUNC_0(VAR_4);
    FUNC_1(*VAR_16);
    return 0;
}
