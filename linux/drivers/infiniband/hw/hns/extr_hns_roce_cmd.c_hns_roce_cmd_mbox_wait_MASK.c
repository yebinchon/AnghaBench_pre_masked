
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_2__ {int event_sem; } ;
struct hns_roce_dev {TYPE_1__ cmd; } ;


 int FUNC_0 (struct hns_roce_dev*,int ,int ,unsigned long,int ,int ,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_0, u64 VAR_1,
      u64 VAR_2, unsigned long VAR_3,
      u8 VAR_4, u16 VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_0->cmd.event_sem);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2,
           VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_2(&VAR_0->cmd.event_sem);

 return VAR_7;
}
