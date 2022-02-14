
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int) ;
 unsigned char* FUNC_1 (unsigned char**,int*,int*) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_0, unsigned char *VAR_1, int VAR_2)
{
 static unsigned char VAR_3[4096];
 static int VAR_4 = 0;
 static unsigned char *VAR_5 = VAR_3;
        unsigned char *VAR_6;
        int VAR_7;

        FUNC_0(VAR_2 > 0);


        if (VAR_4 == 0) {
                VAR_4 = FUNC_3(VAR_0, VAR_3, sizeof(VAR_3));
                if (VAR_4 == -1) {
                        VAR_4 = 0;
                        return -1;
                }
                VAR_5 = VAR_3;
        }


        VAR_6 = FUNC_1(&VAR_5, &VAR_4, &VAR_7);
        if (VAR_7 > VAR_2)
                VAR_7 = VAR_2;
        FUNC_0(VAR_7 > 0);
        FUNC_2(VAR_1, VAR_6, VAR_7);

        return VAR_7;
}
