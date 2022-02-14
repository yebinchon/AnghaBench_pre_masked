
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ssize_t ;
typedef int int64_t ;


 int FUNC_0 (char*,char*,int,int,char const) ;

ssize_t FUNC_1(char *VAR_0, int64_t VAR_1)
{
 static const char VAR_2[] = "?kMGTPEZY";
 int VAR_3 = 0, VAR_4;

 uint64_t VAR_5;

 if (VAR_1 < 0)
  VAR_5 = -VAR_1;
 else
  VAR_5 = VAR_1;





 do {
  VAR_3++;

  VAR_4 = VAR_5 & ~(~0 << 10);
  VAR_5 >>= 10;
 } while (VAR_5 >= 1000);

 if (VAR_1 < 0)



  return FUNC_0(VAR_0, "-%llu.%i%c", VAR_5, VAR_4 * 10 / 1024, VAR_2[VAR_3]);
 else
  return FUNC_0(VAR_0, "%llu.%i%c", VAR_5, VAR_4 * 10 / 1024, VAR_2[VAR_3]);
}
