
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int our_ver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int*,int,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_6)
{
 u32 VAR_7 = VAR_2;

 switch (VAR_6) {
 case 129:

  VAR_3 = VAR_6;
  break;
 case 128:

  if (FUNC_0(VAR_5, &VAR_7, sizeof(VAR_7),
      VAR_4))
   return -VAR_0;
  VAR_3 = VAR_6;
  break;
 default:






  return -VAR_1;
 }
 FUNC_1("FCP: userspace daemon ver. %d connected\n", VAR_6);
 return 0;
}
