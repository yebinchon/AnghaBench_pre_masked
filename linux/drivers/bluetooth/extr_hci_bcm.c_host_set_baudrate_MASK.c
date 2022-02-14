
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {scalar_t__ serdev; } ;


 int FUNC_0 (struct hci_uart*,unsigned int) ;
 int FUNC_1 (scalar_t__,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct hci_uart *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->serdev)
  FUNC_1(VAR_0->serdev, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
