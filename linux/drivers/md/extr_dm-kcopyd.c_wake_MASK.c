
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_kcopyd_client {int kcopyd_work; int kcopyd_wq; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct dm_kcopyd_client *VAR_0)
{
 FUNC_0(VAR_0->kcopyd_wq, &VAR_0->kcopyd_work);
}
