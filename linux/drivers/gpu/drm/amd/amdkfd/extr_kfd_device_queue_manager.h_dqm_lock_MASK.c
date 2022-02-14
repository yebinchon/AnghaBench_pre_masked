
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_queue_manager {int saved_flags; int lock_hidden; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct device_queue_manager *VAR_0)
{
 FUNC_1(&VAR_0->lock_hidden);
 VAR_0->saved_flags = FUNC_0();
}
