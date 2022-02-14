
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {int r10bio_pool; } ;
struct r10bio {TYPE_1__* mddev; } ;
struct TYPE_2__ {struct r10conf* private; } ;


 int FUNC_0 (struct r10bio*,int *) ;
 int FUNC_1 (struct r10conf*,struct r10bio*) ;

__attribute__((used)) static void FUNC_2(struct r10bio *VAR_0)
{
 struct r10conf *VAR_1 = VAR_0->mddev->private;

 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_0, &VAR_1->r10bio_pool);
}
