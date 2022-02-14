
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rpmsg_device {int dummy; } ;
struct btqcomsmd {TYPE_2__* hdev; } ;
struct TYPE_3__ {int byte_rx; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,void*,int) ;

__attribute__((used)) static int FUNC_1(struct rpmsg_device *VAR_1, void *VAR_2,
      int VAR_3, void *VAR_4, u32 VAR_5)
{
 struct btqcomsmd *VAR_6 = VAR_4;

 VAR_6->hdev->stat.byte_rx += VAR_3;
 return FUNC_0(VAR_6->hdev, VAR_0, VAR_2, VAR_3);
}
