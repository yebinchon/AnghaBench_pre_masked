
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nltype ;


 int VAR_0 ;
 char* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 char* VAR_12 ;
 int FUNC_0 (int ,char*) ;
 void* VAR_13 ;
 int FUNC_1 (char*,char***) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int ** FUNC_4 () ;
 int FUNC_5 (int ) ;
 void* VAR_18 ;
 int FUNC_6 (char*,char***) ;
 int VAR_19 ;
 int FUNC_7 (int,char*,char*) ;
 int FUNC_8 (int ) ;
 void* VAR_20 ;
 int VAR_21 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 char* VAR_22 ;
 int VAR_23 ;
 int FUNC_11 (char*,char***) ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int **) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ,int,int ) ;
 int FUNC_18 (int ) ;
 void* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,char*) ;
 scalar_t__ FUNC_21 (char*) ;
 void* VAR_33 ;
 int VAR_34 ;
 void* VAR_35 ;

int
FUNC_22(int VAR_36, char **VAR_37)
{
    char **VAR_38;
    nltype **VAR_39;
    char **VAR_40;

    --VAR_36;
    VAR_37++;
    VAR_16 = 0;
    VAR_14 = VAR_11;
    while ( *VAR_37 != 0 && **VAR_37 == '-' ) {
 (*VAR_37)++;
 switch ( **VAR_37 ) {
 case 'a':
     VAR_13 = VAR_11;
     break;
 case 'b':
     VAR_14 = VAR_5;
     break;
 case 'C':
     VAR_2 = VAR_11;
     VAR_15 = FUNC_3( *++VAR_37 );
     break;
 case 'd':
     VAR_17 = VAR_11;
     FUNC_18(VAR_32);
     VAR_16 |= FUNC_3( *++VAR_37 );
     VAR_16 |= VAR_0;



  FUNC_13("gprof: -d ignored\n");

     break;
 case 'E':
     ++VAR_37;
     FUNC_0( VAR_4 , *VAR_37 );
     VAR_3 = VAR_11;
     FUNC_0( VAR_19 , *VAR_37 );
     VAR_18 = VAR_11;
     break;
 case 'e':
     FUNC_0( VAR_19 , *++VAR_37 );
     VAR_18 = VAR_11;
     break;
 case 'F':
     ++VAR_37;
     FUNC_0( VAR_7 , *VAR_37 );
     VAR_6 = VAR_11;
     FUNC_0( VAR_21 , *VAR_37 );
     VAR_20 = VAR_11;
     break;
 case 'f':
     FUNC_0( VAR_21 , *++VAR_37 );
     VAR_20 = VAR_11;
     break;
 case 'k':
     FUNC_0( VAR_25 , *++VAR_37 );
     FUNC_0( VAR_26 , *++VAR_37 );
     VAR_24 = VAR_11;
     break;
 case 'K':
     VAR_9 = VAR_11;
     break;
 case 'l':
     VAR_27 = 1;
     VAR_10 = 0;
     break;
 case 'L':
     VAR_10 = 1;
     VAR_27 = 0;
     break;
 case 's':
     VAR_30 = VAR_11;
     break;
 case 'u':
     VAR_33 = VAR_11;
     break;
 case 'z':
     VAR_35 = VAR_11;
     break;
 }
 VAR_37++;
    }
    if ( *VAR_37 != 0 ) {
 VAR_12 = *VAR_37;
 VAR_37++;
    } else {
 VAR_12 = VAR_1;
    }
    if ( *VAR_37 != 0 ) {
 VAR_22 = *VAR_37;
 VAR_37++;
    } else {
 VAR_22 = (char *) FUNC_12(FUNC_21(VAR_12)+6);
 FUNC_20(VAR_22, VAR_12);
 FUNC_19(VAR_22, ".gmon");
    }



    if ((VAR_9 && FUNC_11(VAR_12, &VAR_40) == -1) ||
      (!VAR_9 && FUNC_6(VAR_12, &VAR_40) == -1



      ))
 FUNC_7(1, "%s: bad format", VAR_12);



    FUNC_17(VAR_28, VAR_29, sizeof(nltype), VAR_34);



    for ( VAR_38 = VAR_40 ; *VAR_38 ; VAR_38++ ) {
 VAR_3 = VAR_11;
 FUNC_0( VAR_4 , *VAR_38 );
 VAR_18 = VAR_11;
 FUNC_0( VAR_19 , *VAR_38 );
    }



    do {
 FUNC_10( VAR_22 );
 if ( *VAR_37 != 0 ) {
     VAR_22 = *VAR_37;
 }
    } while ( *VAR_37++ != 0 );




    if (VAR_23 == 0) {
 VAR_23 = 1;
 FUNC_9(VAR_31, "time is in ticks, not seconds\n");
    }



    if ( VAR_30 ) {
 FUNC_5( VAR_8 );
    }



    FUNC_2();



    VAR_39 = FUNC_4();



    if(!VAR_27) {
     FUNC_14( VAR_39 );
    }



    if(!VAR_10) {
     FUNC_16();
    }



    FUNC_15();
    FUNC_8(0);
}
