
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
    int VAR_3 = FUNC_1(VAR_0, "-----", 5);
    size_t VAR_4 = 5;

    if (VAR_3 == 0) {
        size_t VAR_5 = FUNC_0(VAR_1);
        VAR_3 = FUNC_1(VAR_0 + VAR_4, VAR_1, VAR_5);
        VAR_4 += VAR_5;
    }

    if (VAR_3 == 0) {
        VAR_3 = VAR_0[VAR_4] - ' ';
        VAR_4++;
    }

    if (VAR_3 == 0) {
        size_t VAR_6 = FUNC_0(VAR_2);
        VAR_3 = FUNC_1(VAR_0 + VAR_4, VAR_2, VAR_6);
        VAR_4 += VAR_6;
    }

    if (VAR_3 == 0) {
        VAR_3 = FUNC_1(VAR_0 + VAR_4, "-----", 5);
    }

    return VAR_3;
}
