
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int FUNC_0 (char*,int const) ;

__attribute__((used)) static void FUNC_1(const void* VAR_0, size_t VAR_1)
{
    const BYTE* VAR_2 = (const BYTE*)VAR_0;
    size_t VAR_3;
    for (VAR_3=VAR_1-1; VAR_3<VAR_1; VAR_3--)
        FUNC_0("%02x", VAR_2[VAR_3]);
}
