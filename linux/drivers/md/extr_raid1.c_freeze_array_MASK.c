
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int array_frozen; int resync_lock; int wait_barrier; int mddev; } ;


 int FUNC_0 (struct r1conf*) ;
 int FUNC_1 (struct r1conf*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct r1conf *VAR_0, int VAR_1)
{
 FUNC_3(&VAR_0->resync_lock);
 VAR_0->array_frozen = 1;
 FUNC_2(VAR_0->mddev, "wait freeze");
 FUNC_5(
  VAR_0->wait_barrier,
  FUNC_1(VAR_0) == VAR_1,
  VAR_0->resync_lock,
  FUNC_0(VAR_0));
 FUNC_4(&VAR_0->resync_lock);
}
