
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct pvrdma_dev {int * sgid_tbl; TYPE_2__* dsr; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int gid_tbl_len; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (union ib_gid*,int *,int) ;
 struct pvrdma_dev* FUNC_1 (struct ib_device*) ;

int FUNC_2(struct ib_device *VAR_1, u8 VAR_2, int VAR_3,
       union ib_gid *VAR_4)
{
 struct pvrdma_dev *VAR_5 = FUNC_1(VAR_1);

 if (VAR_3 >= VAR_5->dsr->caps.gid_tbl_len)
  return -VAR_0;

 FUNC_0(VAR_4, &VAR_5->sgid_tbl[VAR_3], sizeof(union ib_gid));

 return 0;
}
