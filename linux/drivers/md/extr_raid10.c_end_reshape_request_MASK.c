
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10bio {int master_bio; int sectors; int mddev; int remaining; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct r10bio*) ;

__attribute__((used)) static void FUNC_4(struct r10bio *VAR_0)
{
 if (!FUNC_0(&VAR_0->remaining))
  return;
 FUNC_2(VAR_0->mddev, VAR_0->sectors, 1);
 FUNC_1(VAR_0->master_bio);
 FUNC_3(VAR_0);
}
