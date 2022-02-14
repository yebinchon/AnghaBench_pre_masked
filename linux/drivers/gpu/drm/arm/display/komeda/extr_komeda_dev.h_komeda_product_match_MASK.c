
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int core_id; } ;
struct komeda_dev {TYPE_1__ chip; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool
FUNC_1(struct komeda_dev *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->chip.core_id) == VAR_1;
}
