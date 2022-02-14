
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int channel_t ;
 size_t FUNC_0 (int *,int*,size_t) ;
 size_t FUNC_1 (int *,int*,size_t) ;
 size_t FUNC_2 (int *,int*,size_t) ;
 size_t FUNC_3 (int *,int*,size_t) ;
 size_t FUNC_4 (int *,int*,size_t) ;
 size_t FUNC_5 (int *,int*,size_t) ;
 size_t FUNC_6 (int *,int*,size_t) ;
 int FUNC_7 (int *,int const,int) ;

__attribute__((used)) static size_t
FUNC_8(channel_t *VAR_0, uint8_t *VAR_1, size_t VAR_2, bool VAR_3)
{
 uint8_t VAR_4;
 size_t VAR_5;

 if (VAR_2-- < 1)
  return 0;

 VAR_4 = *VAR_1++;

 switch (VAR_4) {
 case 134:
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
  break;

 case 129:
  if (VAR_3)
   return 0;

  VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2);
  break;

 case 128:
  if (VAR_3)
   return 0;

  VAR_5 = FUNC_6(VAR_0, VAR_1, VAR_2);
  break;

 case 130:
  VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2);
  break;

 case 131:
  VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2);
  break;

 case 132:
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2);
  break;

 case 133:
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
  break;

 default:
  VAR_5 = 0;
  break;
 }

 if (VAR_5 == 0)
  FUNC_7(VAR_0, 134, VAR_4);

 return VAR_5;
}
