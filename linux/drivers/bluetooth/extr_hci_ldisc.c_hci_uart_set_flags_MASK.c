
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {unsigned long hdev_flags; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(struct hci_uart *VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9 = FUNC_0(VAR_4) |
        FUNC_0(VAR_5) |
        FUNC_0(VAR_1) |
        FUNC_0(VAR_3) |
        FUNC_0(VAR_2) |
        FUNC_0(VAR_6);

 if (VAR_8 & ~VAR_9)
  return -VAR_0;

 VAR_7->hdev_flags = VAR_8;

 return 0;
}
