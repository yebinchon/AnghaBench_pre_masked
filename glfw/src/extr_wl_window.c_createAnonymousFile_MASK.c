
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int template ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_9 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int ) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*,char const*) ;
 scalar_t__ FUNC_12 (char const*) ;

__attribute__((used)) static int FUNC_13(off_t VAR_10)
{
    static const char VAR_11[] = "/glfw-shared-XXXXXX";
    const char* VAR_12;
    char* VAR_13;
    int VAR_14;
    int VAR_15;
    {
        VAR_12 = FUNC_6("XDG_RUNTIME_DIR");
        if (!VAR_12)
        {
            VAR_9 = VAR_0;
            return -1;
        }

        VAR_13 = FUNC_0(FUNC_12(VAR_12) + sizeof(VAR_11), 1);
        FUNC_11(VAR_13, VAR_12);
        FUNC_10(VAR_13, VAR_11);

        VAR_14 = FUNC_2(VAR_13);
        FUNC_4(VAR_13);
        if (VAR_14 < 0)
            return -1;
    }





    VAR_15 = FUNC_8(VAR_14, 0, VAR_10);

    if (VAR_15 != 0)
    {
        FUNC_1(VAR_14);
        VAR_9 = VAR_15;
        return -1;
    }
    return VAR_14;
}
