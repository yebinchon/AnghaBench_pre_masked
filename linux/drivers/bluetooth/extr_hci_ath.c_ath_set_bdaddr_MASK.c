
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*,int ,int ,int const*,int) ;

__attribute__((used)) static int FUNC_1(struct hci_dev *VAR_2, const bdaddr_t *VAR_3)
{
 return FUNC_0(VAR_2, VAR_1, VAR_0, VAR_3,
         sizeof(*VAR_3));
}
