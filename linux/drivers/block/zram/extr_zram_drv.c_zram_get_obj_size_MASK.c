
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct zram {TYPE_1__* table; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_1(struct zram *VAR_1, u32 VAR_2)
{
 return VAR_1->table[VAR_2].flags & (FUNC_0(VAR_0) - 1);
}
