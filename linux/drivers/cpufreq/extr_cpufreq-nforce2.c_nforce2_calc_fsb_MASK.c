
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
 unsigned char VAR_2, VAR_3;

 VAR_2 = (VAR_1 >> 8) & 0xff;
 VAR_3 = VAR_1 & 0xff;

 if (VAR_3 > 0)
  return VAR_0 * VAR_2 / VAR_3;

 return 0;
}
