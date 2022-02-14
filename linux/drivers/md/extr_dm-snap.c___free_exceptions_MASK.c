
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int complete; int pending; int * kcopyd_client; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct dm_snapshot *VAR_2)
{
 FUNC_1(VAR_2->kcopyd_client);
 VAR_2->kcopyd_client = ((void*)0);

 FUNC_0(&VAR_2->pending, VAR_1);
 FUNC_0(&VAR_2->complete, VAR_0);
}
