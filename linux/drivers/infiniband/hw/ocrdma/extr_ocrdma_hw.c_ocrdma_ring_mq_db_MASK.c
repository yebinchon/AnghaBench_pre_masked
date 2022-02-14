
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ db; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ sq; } ;
struct ocrdma_dev {TYPE_3__ nic_info; TYPE_2__ mq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_dev *VAR_3)
{
 u32 VAR_4 = 0;

 VAR_4 |= VAR_3->mq.sq.id & VAR_1;
 VAR_4 |= 1 << VAR_2;
 FUNC_0(VAR_4, VAR_3->nic_info.db + VAR_0);
}
