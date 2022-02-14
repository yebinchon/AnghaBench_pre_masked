
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcre_uint32 ;



__attribute__((used)) static pcre_uint32
FUNC_0(pcre_uint32 VAR_0)
{
return ((VAR_0 & 0x000000ff) << 24) |
       ((VAR_0 & 0x0000ff00) << 8) |
       ((VAR_0 & 0x00ff0000) >> 8) |
       (VAR_0 >> 24);
}
