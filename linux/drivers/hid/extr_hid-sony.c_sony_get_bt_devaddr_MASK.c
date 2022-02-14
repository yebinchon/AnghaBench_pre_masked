
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sony_sc {int * mac_address; TYPE_1__* hdev; } ;
struct TYPE_2__ {int uniq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sony_sc *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1->hdev->uniq);
 if (VAR_2 != 17)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1->hdev->uniq,
  "%02hhx:%02hhx:%02hhx:%02hhx:%02hhx:%02hhx",
  &VAR_1->mac_address[5], &VAR_1->mac_address[4], &VAR_1->mac_address[3],
  &VAR_1->mac_address[2], &VAR_1->mac_address[1], &VAR_1->mac_address[0]);

 if (VAR_2 != 6)
  return -VAR_0;

 return 0;
}
