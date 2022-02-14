
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_lock_data {int * file_priv; TYPE_1__* hw_lock; } ;
struct TYPE_2__ {unsigned int lock; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int volatile*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct drm_lock_data *VAR_1,
        unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 volatile unsigned int *VAR_6 = &VAR_1->hw_lock->lock;

 VAR_1->file_priv = ((void*)0);
 do {
  VAR_3 = *VAR_6;
  VAR_4 = VAR_2 | VAR_0;
  VAR_5 = FUNC_0(VAR_6, VAR_3, VAR_4);
 } while (VAR_5 != VAR_3);
 return 1;
}
