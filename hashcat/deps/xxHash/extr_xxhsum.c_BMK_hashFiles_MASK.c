
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int endianess ;
typedef int algoType ;


 int FUNC_0 (char const*,int ,int ) ;
 int FUNC_1 (char*,char*) ;
 char const* VAR_0 ;

__attribute__((used)) static int FUNC_2(const char** VAR_1, int VAR_2,
                         algoType VAR_3, endianess VAR_4)
{
    int VAR_5;
    int VAR_6 = 0;

    if (VAR_2==0)
        return FUNC_0(VAR_0, VAR_3, VAR_4);

    for (VAR_5=0; VAR_5<VAR_2; VAR_5++)
        VAR_6 += FUNC_0(VAR_1[VAR_5], VAR_3, VAR_4);
    FUNC_1("\r%70s\r", "");
    return VAR_6;
}
