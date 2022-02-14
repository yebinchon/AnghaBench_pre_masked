
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {TYPE_1__* bi_disk; } ;
struct TYPE_2__ {int sync_io; } ;


 int FUNC_0 (unsigned long,int *) ;

__attribute__((used)) static inline void FUNC_1(struct bio *VAR_0, unsigned long VAR_1)
{
 FUNC_0(VAR_1, &VAR_0->bi_disk->sync_io);
}
