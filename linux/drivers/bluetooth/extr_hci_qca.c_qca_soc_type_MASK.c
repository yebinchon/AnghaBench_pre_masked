
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_serdev {int btsoc_type; } ;
struct hci_uart {scalar_t__ serdev; } ;
typedef enum qca_btsoc_type { ____Placeholder_qca_btsoc_type } qca_btsoc_type ;


 int VAR_0 ;
 struct qca_serdev* FUNC_0 (scalar_t__) ;

__attribute__((used)) static enum qca_btsoc_type FUNC_1(struct hci_uart *VAR_1)
{
 enum qca_btsoc_type VAR_2;

 if (VAR_1->serdev) {
  struct qca_serdev *VAR_3 = FUNC_0(VAR_1->serdev);

  VAR_2 = VAR_3->btsoc_type;
 } else {
  VAR_2 = VAR_0;
 }

 return VAR_2;
}
