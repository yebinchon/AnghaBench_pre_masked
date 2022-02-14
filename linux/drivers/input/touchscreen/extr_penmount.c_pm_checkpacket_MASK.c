
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(unsigned char *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
  VAR_1 += VAR_0[VAR_2];

 return VAR_0[5] == (unsigned char)~(VAR_1 & 0xff);
}
