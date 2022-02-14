
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int MD5_CTX ;
typedef int MD4_CTX ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,size_t,char*,char*,char*,char*,char*) ;
 int FUNC_1 (char*,char*,char*,char*,size_t,char*) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,size_t) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (char*,size_t,char*) ;
 char* FUNC_11 (size_t) ;
 int FUNC_12 (char*,char*,size_t) ;
 int FUNC_13 (char*,char,int) ;
 int FUNC_14 (char*,char*,char*) ;
 int FUNC_15 (char*,char*) ;
 size_t FUNC_16 (char*) ;

__attribute__((used)) static char *
FUNC_17(char *VAR_8, char *VAR_9, u_char VAR_10, char *VAR_11

   , u_char VAR_12, char *VAR_13, char *VAR_14,
   int VAR_15

                )
{
  char *VAR_16, *VAR_17;
  size_t VAR_18, VAR_19;

  VAR_18 = FUNC_16(VAR_8);
  VAR_19 = FUNC_16(VAR_9);


  if (VAR_12 == 0x80) {
    char VAR_20[VAR_0 << 2];
    MD4_CTX VAR_21;
    size_t VAR_22;

    if ((VAR_16 = FUNC_11(1 + VAR_18 + VAR_7)) == ((void*)0))
      return VAR_16;

    VAR_17 = VAR_16;
    *VAR_17++ = VAR_7;
    FUNC_12(VAR_17 + VAR_7, VAR_8, VAR_18);
    if (VAR_15) {
      FUNC_13(VAR_17 + 24, '\0', 25);
      FUNC_14(VAR_17, VAR_11 + 1, VAR_9);
    } else {
      FUNC_13(VAR_17, '\0', 25);
      VAR_17 += 24;

      for (VAR_22 = 0; VAR_22 < VAR_19; VAR_22++) {
        VAR_20[2*VAR_22] = VAR_9[VAR_22];
        VAR_20[2*VAR_22+1] = '\0';
      }





      FUNC_5(&VAR_21);
      FUNC_6(&VAR_21, VAR_20, VAR_19 << 1);
      FUNC_4(VAR_17, &VAR_21);






      FUNC_15(VAR_17, VAR_11 + 1);
    }







  } else if (VAR_12 == 0x81) {
    char VAR_23[VAR_0 << 2];
    char VAR_24[VAR_3];
    char VAR_25[VAR_3];
    char *VAR_26;
    size_t VAR_27;

    if ((VAR_16 = FUNC_11(1 + VAR_18 + VAR_5)) == ((void*)0))
      return VAR_16;

    FUNC_13(VAR_16, 0, 1 + VAR_18 + VAR_5);

    VAR_17 = VAR_16;
    *VAR_17++ = VAR_5;


    FUNC_12(VAR_17, VAR_13 + 1, VAR_2);


    for (VAR_27 = 0; VAR_27 < VAR_19; VAR_27++) {
      VAR_23[2*VAR_27] = VAR_9[VAR_27];
      VAR_23[2*VAR_27+1] = '\0';
    }

    VAR_26 = VAR_17 + VAR_4;


    FUNC_10(VAR_23, VAR_19 * 2, VAR_24);
    FUNC_3(VAR_24, VAR_25);


    FUNC_1(VAR_11 + 1, VAR_13 + 1, VAR_8,
                       VAR_23, VAR_19 * 2, VAR_26);


    FUNC_2(VAR_25, VAR_26, VAR_6);


    FUNC_0(VAR_23, VAR_19 * 2, VAR_26,
                                  VAR_13 + 1, VAR_11 + 1, VAR_8,
                                  VAR_14);

    VAR_14[VAR_1] = 0;

    FUNC_12(VAR_17 + VAR_5, VAR_8, VAR_18);
  } else

  if ((VAR_16 = FUNC_11(VAR_18 + 17)) != ((void*)0)) {

    MD5_CTX VAR_28;

    VAR_17 = VAR_16;
    *VAR_17++ = 16;

    FUNC_8(&VAR_28);
    FUNC_9(&VAR_28, &VAR_10, 1);
    FUNC_9(&VAR_28, VAR_9, VAR_19);
    FUNC_9(&VAR_28, VAR_11 + 1, *VAR_11);
    FUNC_7(VAR_17, &VAR_28);

    FUNC_12(VAR_17 + 16, VAR_8, VAR_18);





  }

  return VAR_16;
}
