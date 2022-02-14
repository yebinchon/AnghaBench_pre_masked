
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int endianess ;
typedef int U32 ;


 int FUNC_0 (char const*,int const,int ,int ,int ,int ) ;
 char const* VAR_0 ;

__attribute__((used)) static int FUNC_1(const char** VAR_1, int VAR_2,
                      const endianess VAR_3,
                      U32 VAR_4,
                      U32 VAR_5,
                      U32 VAR_6,
                      U32 VAR_7)
{
    int VAR_8 = 1;



    if (VAR_2==0) {
        VAR_8 &= FUNC_0(VAR_0, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    } else {
        int VAR_9;
        for (VAR_9=0; VAR_9<VAR_2; VAR_9++)
            VAR_8 &= FUNC_0(VAR_1[VAR_9], VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    }
    return VAR_8 ? 0 : 1;
}
