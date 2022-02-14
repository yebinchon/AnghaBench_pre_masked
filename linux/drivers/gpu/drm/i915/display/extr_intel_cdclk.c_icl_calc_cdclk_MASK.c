
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_0, unsigned int VAR_1)
{
 static const int VAR_2[] = { 180000, 192000, 312000, 552000, 648000 };
 static const int VAR_3[] = { 172800, 192000, 307200, 556800, 652800 };
 const int *VAR_4;
 int VAR_5, VAR_6;

 switch (VAR_1) {
 default:
  FUNC_1(VAR_1);

 case 24000:
  VAR_4 = VAR_2;
  VAR_5 = FUNC_0(VAR_2);
  break;
 case 19200:
 case 38400:
  VAR_4 = VAR_3;
  VAR_5 = FUNC_0(VAR_3);
  break;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_0 <= VAR_4[VAR_6])
   return VAR_4[VAR_6];
 }

 FUNC_2(VAR_0 > VAR_4[VAR_5 - 1]);
 return VAR_4[VAR_5 - 1];
}
