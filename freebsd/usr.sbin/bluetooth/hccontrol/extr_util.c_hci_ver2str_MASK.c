
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const*) ;

char const *
FUNC_1(int VAR_0)
{
 static char const * const VAR_1[] = {
             "Bluetooth HCI Specification 1.0B",
             "Bluetooth HCI Specification 1.1",
             "Bluetooth HCI Specification 1.2",
             "Bluetooth HCI Specification 2.0",
             "Bluetooth HCI Specification 2.1",
             "Bluetooth HCI Specification 3.0",
             "Bluetooth HCI Specification 4.0",
             "Bluetooth HCI Specification 4.1",
             "Bluetooth HCI Specification 4.2"
 };

 return (VAR_0 >= FUNC_0(VAR_1)? "?" : VAR_1[VAR_0]);
}
