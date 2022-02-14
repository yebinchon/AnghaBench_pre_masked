
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;



__attribute__((used)) static unsigned int FUNC_0(const void *VAR_0)
{
 const u8 *VAR_1 = VAR_0;
 unsigned int VAR_2 = VAR_1[2];
 VAR_2 |= ((unsigned int)VAR_1[1]) << 8;
 VAR_2 |= ((unsigned int)VAR_1[0]) << 16;

 return VAR_2;
}
