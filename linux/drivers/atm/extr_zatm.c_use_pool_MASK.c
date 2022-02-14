
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zatm_dev {TYPE_1__* pool_info; int ** last_free; int lock; scalar_t__ pool_base; int * pool; } ;
struct atm_dev {int dummy; } ;
struct TYPE_2__ {int low_water; int ref_count; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 struct zatm_dev* FUNC_1 (struct atm_dev*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct atm_dev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct zatm_dev*,unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct atm_dev *VAR_5,int VAR_6)
{
 struct zatm_dev *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_5);
 if (!(VAR_7->pool_info[VAR_6].ref_count++)) {
  FUNC_3(&VAR_7->pool[VAR_6]);
  VAR_9 = VAR_6-VAR_0;
  if (VAR_9 < 0) VAR_9 = 0;
  else if (VAR_9 > 10) VAR_9 = 10;
  FUNC_4(&VAR_7->lock, VAR_8);
  FUNC_6(VAR_7,((VAR_7->pool_info[VAR_6].low_water/4) <<
      VAR_2) |
      (1 << VAR_4) |
      (VAR_9 << VAR_3),
      VAR_7->pool_base+VAR_6*2);
  FUNC_6(VAR_7,(unsigned long) VAR_1,VAR_7->pool_base+
      VAR_6*2+1);
  FUNC_5(&VAR_7->lock, VAR_8);
  VAR_7->last_free[VAR_6] = ((void*)0);
  FUNC_2(VAR_5,VAR_6);
 }
 FUNC_0("pool %d: %d\n",VAR_6,VAR_7->pool_info[VAR_6].ref_count);
}
