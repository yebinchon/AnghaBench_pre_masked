
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int,int ) ;
 size_t FUNC_6 (char*) ;
 unsigned int FUNC_7 (unsigned char const*,int ) ;

unsigned int FUNC_8(char *VAR_4, char *VAR_5, char *VAR_6)
{
    char *VAR_7;
    unsigned int VAR_8;
    size_t VAR_9 = 0;
    VAR_7 = FUNC_3(VAR_2);
    if (!VAR_7) {
        FUNC_0("Couldn't allocate memory for temporary board header!");
        FUNC_1(VAR_1);
    }
    FUNC_5(VAR_7, 0xff, VAR_2);


    FUNC_4(VAR_7, VAR_5, VAR_3);
    VAR_9 += VAR_3;


    FUNC_4(VAR_7 + VAR_9, VAR_5, 4);
    VAR_9 += 4;


    FUNC_4(VAR_7 + VAR_9, VAR_6, FUNC_6(VAR_6));
    VAR_9 += FUNC_6(VAR_6);

    VAR_7[VAR_9] = 0x0;
    VAR_9 = VAR_3 + 4 + VAR_0;


    if (VAR_4)
        FUNC_4(VAR_7 + VAR_9, VAR_4, 8);


    VAR_8 = FUNC_7((const unsigned char *)VAR_7, VAR_2);
    FUNC_2(VAR_7);
    return VAR_8;
}
