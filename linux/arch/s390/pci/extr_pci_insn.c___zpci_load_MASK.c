
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,int ) ;

int FUNC_3(u64 *VAR_2, u64 VAR_3, u64 VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 do {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_5);
  if (VAR_6 == 2)
   FUNC_1(VAR_1);
 } while (VAR_6 == 2);

 if (VAR_6)
  FUNC_2(VAR_6, VAR_5, VAR_3, VAR_4);

 return (VAR_6 > 0) ? -VAR_0 : VAR_6;
}
