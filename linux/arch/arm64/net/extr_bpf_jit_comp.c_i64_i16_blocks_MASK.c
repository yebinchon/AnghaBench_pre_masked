
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static int FUNC_0(const u64 VAR_0, bool VAR_1)
{
 return (((VAR_0 >> 0) & 0xffff) != (VAR_1 ? 0xffff : 0x0000)) +
        (((VAR_0 >> 16) & 0xffff) != (VAR_1 ? 0xffff : 0x0000)) +
        (((VAR_0 >> 32) & 0xffff) != (VAR_1 ? 0xffff : 0x0000)) +
        (((VAR_0 >> 48) & 0xffff) != (VAR_1 ? 0xffff : 0x0000));
}
