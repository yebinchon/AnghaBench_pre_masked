
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(int VAR_2, const char *VAR_3[],
         unsigned char (*VAR_4)(unsigned char VAR_5,
        unsigned char VAR_6))
{
 unsigned char VAR_7[VAR_1];
 unsigned char VAR_8[VAR_1];
 int VAR_9;
 int VAR_10;

 if (VAR_2 != 2) {
  FUNC_2();
  return VAR_0;
 }

 VAR_9 = FUNC_0(VAR_3[0], VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_3[1], VAR_8);
 if (VAR_9)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  VAR_7[VAR_10] = VAR_4(VAR_7[VAR_10],VAR_8[VAR_10]);

 FUNC_1(VAR_7);
 return 0;
}
