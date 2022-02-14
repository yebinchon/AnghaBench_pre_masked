
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int magic ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__,int) ;
 int VAR_7 ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int,char const*,scalar_t__,int*) ;

__attribute__((used)) static int
FUNC_6(int VAR_8, const char *VAR_9)
{
 uint32_t VAR_10;
 int VAR_11 = 1;
 int VAR_12;

 while (VAR_5 < sizeof(VAR_10)) {
  VAR_12 = FUNC_3(VAR_8, VAR_4 + VAR_5, sizeof(VAR_10) - VAR_5);
  if (VAR_12 < 1)
   break;

  VAR_5 += VAR_12;
 }

 if (VAR_5 < sizeof(VAR_10)) {
  FUNC_1(VAR_7, "Could not get image magic\n");
  return 0;
 }

 VAR_10 = ((uint32_t *)VAR_4)[0];

 if (FUNC_0(VAR_10) == VAR_1)
  VAR_6 = 130;
 else if (FUNC_0(VAR_10) == VAR_0)
  VAR_6 = 131;
 else if (FUNC_2(VAR_10) == VAR_3)
  VAR_6 = 129;
 else if (FUNC_2(VAR_10) == VAR_2)
  VAR_6 = 128;

 switch (VAR_6) {
 case 130:
  if (&FUNC_5)
   VAR_11 = FUNC_5(VAR_8, VAR_9, VAR_4, &VAR_5);
  break;
 case 131:
 case 129:
 case 128:
  break;
 default:




  break;
 }

 return VAR_11;
}
