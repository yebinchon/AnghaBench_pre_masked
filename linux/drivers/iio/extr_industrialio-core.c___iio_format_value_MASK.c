
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef long long s64 ;
 int FUNC_0 (int const) ;
 unsigned long long FUNC_1 (long long,int const) ;
 scalar_t__ FUNC_2 (unsigned long long,long long,int*) ;
 unsigned long long FUNC_3 (long long,int const) ;
 int FUNC_4 (char*,size_t,char*,int const,...) ;

__attribute__((used)) static ssize_t FUNC_5(char *VAR_0, size_t VAR_1, unsigned int VAR_2,
      int VAR_3, const int *VAR_4)
{
 unsigned long long VAR_5;
 int VAR_6, VAR_7;
 bool VAR_8 = 0;

 switch (VAR_2) {
 case 132:
  return FUNC_4(VAR_0, VAR_1, "%d", VAR_4[0]);
 case 129:
  VAR_8 = 1;

 case 130:
  if (VAR_4[1] < 0)
   return FUNC_4(VAR_0, VAR_1, "-%d.%06u%s", FUNC_0(VAR_4[0]),
     -VAR_4[1], VAR_8 ? " dB" : "");
  else
   return FUNC_4(VAR_0, VAR_1, "%d.%06u%s", VAR_4[0], VAR_4[1],
     VAR_8 ? " dB" : "");
 case 128:
  if (VAR_4[1] < 0)
   return FUNC_4(VAR_0, VAR_1, "-%d.%09u", FUNC_0(VAR_4[0]),
     -VAR_4[1]);
  else
   return FUNC_4(VAR_0, VAR_1, "%d.%09u", VAR_4[0], VAR_4[1]);
 case 134:
  VAR_5 = FUNC_1((s64)VAR_4[0] * 1000000000LL, VAR_4[1]);
  VAR_7 = VAR_4[1];
  VAR_6 = (int)FUNC_2(VAR_5, 1000000000, &VAR_7);
  return FUNC_4(VAR_0, VAR_1, "%d.%09u", VAR_6, FUNC_0(VAR_7));
 case 133:
  VAR_5 = FUNC_3((s64)VAR_4[0] * 1000000000LL, VAR_4[1]);
  VAR_6 = (int)FUNC_2(VAR_5, 1000000000LL, &VAR_7);
  return FUNC_4(VAR_0, VAR_1, "%d.%09u", VAR_6, FUNC_0(VAR_7));
 case 131:
 {
  int VAR_9;
  int VAR_10 = 0;

  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
   VAR_10 += FUNC_4(&VAR_0[VAR_10], VAR_1 - VAR_10, "%d ", VAR_4[VAR_9]);
   if (VAR_10 >= VAR_1)
    break;
  }
  return VAR_10;
 }
 default:
  return 0;
 }
}
