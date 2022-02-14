
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hidpp_device*,int,int*) ;
 int FUNC_1 (struct hidpp_device*,int,unsigned int,char*,int) ;
 int FUNC_2 (char**,int) ;
 int FUNC_3 (struct hidpp_device*,int ,int*,int*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int,int ) ;

__attribute__((used)) static char *FUNC_6(struct hidpp_device *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 u8 VAR_5;
 char *VAR_6;
 unsigned VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_1,
  &VAR_4, &VAR_3);
 if (VAR_8)
  return ((void*)0);

 VAR_8 = FUNC_0(VAR_2, VAR_4,
  &VAR_5);
 if (VAR_8)
  return ((void*)0);

 VAR_6 = FUNC_5(VAR_5 + 1, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 while (VAR_7 < VAR_5) {
  VAR_8 = FUNC_1(VAR_2,
   VAR_4, VAR_7, VAR_6 + VAR_7,
   VAR_5 - VAR_7);
  if (VAR_8 <= 0) {
   FUNC_4(VAR_6);
   return ((void*)0);
  }
  VAR_7 += VAR_8;
 }


 FUNC_2(&VAR_6, VAR_5 + 1);

 return VAR_6;
}
