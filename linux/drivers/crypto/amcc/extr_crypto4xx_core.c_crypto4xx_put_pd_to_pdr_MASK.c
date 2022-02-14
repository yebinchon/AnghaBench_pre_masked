
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct pd_uinfo {int state; } ;
struct crypto4xx_device {scalar_t__ pdr_tail; TYPE_1__* core_dev; struct pd_uinfo* pdr_uinfo; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_2(struct crypto4xx_device *VAR_2, u32 VAR_3)
{
 struct pd_uinfo *VAR_4 = &VAR_2->pdr_uinfo[VAR_3];
 u32 VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_2->core_dev->lock, VAR_6);
 VAR_4->state = VAR_0;

 if (VAR_2->pdr_tail != VAR_1)
  VAR_2->pdr_tail++;
 else
  VAR_2->pdr_tail = 0;
 VAR_5 = VAR_2->pdr_tail;
 FUNC_1(&VAR_2->core_dev->lock, VAR_6);

 return VAR_5;
}
