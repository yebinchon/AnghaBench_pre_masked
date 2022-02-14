
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_pool_id; } ;
struct rbd_device {TYPE_1__ header; int header_oloc; int header_oid; } ;
typedef int data_pool_id ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rbd_device*,int *,int *,char*,int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct rbd_device *VAR_2)
{
 __le64 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, &VAR_2->header_oid,
      &VAR_2->header_oloc, "get_data_pool",
      ((void*)0), 0, &VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4 < sizeof(VAR_3))
  return -VAR_1;

 VAR_2->header.data_pool_id = FUNC_1(VAR_3);
 FUNC_0(VAR_2->header.data_pool_id == VAR_0);
 return 0;
}
