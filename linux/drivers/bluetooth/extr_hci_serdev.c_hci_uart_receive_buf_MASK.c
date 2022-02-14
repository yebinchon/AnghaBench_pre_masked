
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct serdev_device {int dummy; } ;
struct hci_uart {TYPE_3__* hdev; TYPE_2__* proto; int flags; struct serdev_device* serdev; } ;
struct TYPE_4__ {size_t byte_rx; } ;
struct TYPE_6__ {TYPE_1__ stat; } ;
struct TYPE_5__ {int (* recv ) (struct hci_uart*,int const*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct hci_uart* FUNC_1 (struct serdev_device*) ;
 int FUNC_2 (struct hci_uart*,int const*,size_t) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct serdev_device *VAR_1, const u8 *VAR_2,
       size_t VAR_3)
{
 struct hci_uart *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4 || VAR_1 != VAR_4->serdev) {
  FUNC_0(1);
  return 0;
 }

 if (!FUNC_3(VAR_0, &VAR_4->flags))
  return 0;




 VAR_4->proto->recv(VAR_4, VAR_2, VAR_3);

 if (VAR_4->hdev)
  VAR_4->hdev->stat.byte_rx += VAR_3;

 return VAR_3;
}
