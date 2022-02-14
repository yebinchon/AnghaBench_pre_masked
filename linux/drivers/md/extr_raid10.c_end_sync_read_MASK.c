
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {int dummy; } ;
struct r10bio {TYPE_1__* mddev; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct r10conf* private; } ;


 int FUNC_0 (struct r10bio*,struct bio*,int) ;
 int FUNC_1 (struct r10conf*,struct r10bio*,struct bio*,int *,int *) ;
 struct r10bio* FUNC_2 (struct bio*) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0)
{
 struct r10bio *VAR_1 = FUNC_2(VAR_0);
 struct r10conf *VAR_2 = VAR_1->mddev->private;
 int VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_0, ((void*)0), ((void*)0));

 FUNC_0(VAR_1, VAR_0, VAR_3);
}
