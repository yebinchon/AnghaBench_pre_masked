
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int const,char) ;
 int FUNC_1 (int,char) ;
 int FUNC_2 (int,char) ;

__attribute__((used)) static unsigned int
FUNC_3(int VAR_0)
{
    const unsigned VAR_1 =
        (FUNC_1(VAR_0, 'A') & FUNC_2(VAR_0, 'Z') & (VAR_0 - 'A')) |
        (FUNC_1(VAR_0, 'a') & FUNC_2(VAR_0, 'z') & (VAR_0 - ('a' - 26))) |
        (FUNC_1(VAR_0, '0') & FUNC_2(VAR_0, '9') & (VAR_0 - ('0' - 52))) | (FUNC_0(VAR_0, '-') & 62) |
        (FUNC_0(VAR_0, '_') & 63);

    return VAR_1 | (FUNC_0(VAR_1, 0) & (FUNC_0(VAR_0, 'A') ^ 0xFF));
}
