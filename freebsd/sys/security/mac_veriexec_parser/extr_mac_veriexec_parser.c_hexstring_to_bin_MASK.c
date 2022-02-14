
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 size_t FUNC_2 (unsigned char*) ;

__attribute__((used)) static int
FUNC_3(unsigned char *VAR_1)
{
 size_t VAR_2, VAR_3;
 unsigned char VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_3 / 2; VAR_2++) {
  if (!FUNC_1(VAR_1[2 * VAR_2]) || !FUNC_1(VAR_1[2 * VAR_2 + 1]))
   return (VAR_0);

  VAR_4 = FUNC_0(VAR_1[2 * VAR_2]) << 4;
  VAR_4 += FUNC_0(VAR_1[2 * VAR_2 + 1]);
  VAR_1[VAR_2] = VAR_4;
 }
 return (0);
}
