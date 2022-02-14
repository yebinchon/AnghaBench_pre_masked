
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;



__attribute__((used)) static U32 FUNC_0 (U32 VAR_0)
{
    return ((VAR_0 << 24) & 0xff000000 ) |
            ((VAR_0 << 8) & 0x00ff0000 ) |
            ((VAR_0 >> 8) & 0x0000ff00 ) |
            ((VAR_0 >> 24) & 0x000000ff );
}
