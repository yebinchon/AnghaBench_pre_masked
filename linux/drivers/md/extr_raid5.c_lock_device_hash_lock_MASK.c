
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int device_lock; scalar_t__ hash_locks; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct r5conf *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0->hash_locks + VAR_1);
 FUNC_0(&VAR_0->device_lock);
}
