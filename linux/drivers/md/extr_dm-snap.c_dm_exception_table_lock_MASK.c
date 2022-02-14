
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_exception_table_lock {int pending_slot; int complete_slot; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dm_exception_table_lock *VAR_0)
{
 FUNC_0(VAR_0->complete_slot);
 FUNC_0(VAR_0->pending_slot);
}
