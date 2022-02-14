
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_uart*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hci_uart*) ;

__attribute__((used)) static int FUNC_3(struct hci_uart *VAR_3)
{
 if (FUNC_1(FUNC_2(VAR_3))) {
  if (!FUNC_0(VAR_3, VAR_1) &&
      !FUNC_0(VAR_3, VAR_2))
   return -VAR_0;
 } else {
  if (!FUNC_0(VAR_3, VAR_1) ||
      !FUNC_0(VAR_3, VAR_2))
   return -VAR_0;
 }

 return 0;
}
