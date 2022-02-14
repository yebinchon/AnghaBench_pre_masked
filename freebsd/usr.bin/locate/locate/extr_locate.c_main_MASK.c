
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*) ;
 char** FUNC_1 (char**,char*,char*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int,char**,char*) ;
 int * VAR_10 ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char**) ;
 int FUNC_7 (char*,char**) ;
 char VAR_13 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;

int
FUNC_13(int VAR_14, char **VAR_15)
{
        register int VAR_16;
        char **VAR_17 = ((void*)0);
 char *VAR_18;



 (void) FUNC_8(VAR_0, "");

        while ((VAR_16 = FUNC_4(VAR_14, VAR_15, "0Scd:il:ms")) != -1)
                switch(VAR_16) {
                case '0':
   VAR_13 = '\0';
   break;
                case 'S':
                        VAR_8 = 1;
                        break;
                case 'l':
                        VAR_5 = FUNC_0(VAR_11);
                        break;
                case 'd':
                        VAR_17 = FUNC_1(VAR_17, VAR_11, VAR_2);
                        break;
                case 'i':
                        VAR_4 = 1;
                        break;
                case 'm':



      FUNC_12("mmap(2) not implemented");

                        break;
                case 's':
                        VAR_6 = 0;
                        break;
                case 'c':
                        VAR_7 = 1;
                        break;
                default:
                        FUNC_11();
                }
        VAR_15 += VAR_12;
        VAR_14 -= VAR_12;


        if (VAR_14 < 1 && !(VAR_8))
                FUNC_11();


        if (VAR_17 == ((void*)0) || *VAR_17 == ((void*)0)) {

                if ((VAR_18 = FUNC_3("LOCATE_PATH")) == ((void*)0) ||
       *VAR_18 == '\0')

                        VAR_17 = FUNC_1(VAR_17, VAR_2, VAR_2);
                else
                        VAR_17 = FUNC_1(VAR_17, VAR_18, VAR_2);
        }

        if (VAR_4 && VAR_1 < 4096)
                for (VAR_16 = 0; VAR_16 < VAR_1 + 1; VAR_16++)
                        VAR_10[VAR_16] = FUNC_10(VAR_16);


        while((VAR_18 = *VAR_17) != ((void*)0)) {
                VAR_17++;

                if (!FUNC_9(VAR_18, "-"))
                        VAR_9 = 1;
  else
   VAR_9 = 0;


  VAR_6 = 0;

                if (!VAR_6 || VAR_9 || VAR_8)
   FUNC_6(VAR_18, VAR_15);
                else
   FUNC_7(VAR_18, VAR_15);
        }

        if (VAR_7)
                FUNC_5(VAR_3);
        FUNC_2(0);
}
