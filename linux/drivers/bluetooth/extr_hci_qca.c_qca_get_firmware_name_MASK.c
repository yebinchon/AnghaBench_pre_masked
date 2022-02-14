
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_serdev {char const* firmware_name; } ;
struct hci_uart {scalar_t__ serdev; } ;


 struct qca_serdev* FUNC_0 (scalar_t__) ;

__attribute__((used)) static const char *FUNC_1(struct hci_uart *VAR_0)
{
 if (VAR_0->serdev) {
  struct qca_serdev *VAR_1 = FUNC_0(VAR_0->serdev);

  return VAR_1->firmware_name;
 } else {
  return ((void*)0);
 }
}
