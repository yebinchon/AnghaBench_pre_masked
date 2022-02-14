
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct serdev_device {int dummy; } ;
struct btmtkuart_dev {TYPE_2__* hdev; } ;
struct TYPE_3__ {size_t byte_rx; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;


 int FUNC_0 (TYPE_2__*,int const*,size_t) ;
 struct btmtkuart_dev* FUNC_1 (struct serdev_device*) ;

__attribute__((used)) static int FUNC_2(struct serdev_device *VAR_0, const u8 *VAR_1,
     size_t VAR_2)
{
 struct btmtkuart_dev *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->hdev, VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->hdev->stat.byte_rx += VAR_2;

 return VAR_2;
}
