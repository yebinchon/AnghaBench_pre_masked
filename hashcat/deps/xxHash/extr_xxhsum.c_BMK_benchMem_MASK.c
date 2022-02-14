
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 int FUNC_0 (int ,char*,char const*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(const void* VAR_2, size_t VAR_3, U32 VAR_4)
{
    FUNC_2((((size_t)VAR_2) & 8) == 0);


    if ((VAR_4==0) | (VAR_4==1))
        FUNC_0(VAR_0, "XXH32", VAR_2, VAR_3);


    if ((VAR_4==0) | (VAR_4==2))
        FUNC_0(VAR_0, "XXH32 unaligned", ((const char*)VAR_2)+1, VAR_3);


    if ((VAR_4==0) | (VAR_4==3))
        FUNC_0(VAR_1, "XXH64", VAR_2, VAR_3);


    if ((VAR_4==0) | (VAR_4==4))
        FUNC_0(VAR_1, "XXH64 unaligned", ((const char*)VAR_2)+3, VAR_3);

    if (VAR_4 > 4) {
        FUNC_1("benchmark mode invalid \n");
        return 1;
    }
    return 0;
}
