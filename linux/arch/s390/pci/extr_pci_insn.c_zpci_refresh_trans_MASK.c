
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int ,int ) ;

int FUNC_3(u64 VAR_3, u64 VAR_4, u64 VAR_5)
{
 u8 VAR_6, VAR_7;

 do {
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_7);
  if (VAR_6 == 2)
   FUNC_1(VAR_2);
 } while (VAR_6 == 2);

 if (VAR_6)
  FUNC_2(VAR_6, VAR_7, VAR_4, VAR_5);

 if (VAR_6 == 1 && (VAR_7 == 4 || VAR_7 == 16))
  return -VAR_1;

 return (VAR_6) ? -VAR_0 : 0;
}
