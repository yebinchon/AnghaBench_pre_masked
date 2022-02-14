
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int device_lock; int hash_locks; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct r5conf *VAR_1)
{
 int VAR_2;
 FUNC_1(VAR_1->hash_locks);
 for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++)
  FUNC_2(VAR_1->hash_locks + VAR_2, VAR_1->hash_locks);
 FUNC_0(&VAR_1->device_lock);
}
