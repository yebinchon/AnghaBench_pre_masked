
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct zpci_fib {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct zpci_fib*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int ,int ) ;

u8 FUNC_3(u64 VAR_1, struct zpci_fib *VAR_2, u8 *VAR_3)
{
 u8 VAR_4;

 do {
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_4 == 2)
   FUNC_1(VAR_0);
 } while (VAR_4 == 2);

 if (VAR_4)
  FUNC_2(VAR_4, *VAR_3, VAR_1, 0);

 return VAR_4;
}
