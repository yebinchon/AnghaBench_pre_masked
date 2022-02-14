
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3_system_bus_device {int core; } ;
struct ps3_storage_device {int sbd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct ps3_storage_device*) ;
 struct ps3_storage_device* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ps3_system_bus_device *VAR_2)
{
 struct ps3_storage_device *VAR_3 = FUNC_6(&VAR_2->core);

 FUNC_2(((void*)0));
 FUNC_1(&VAR_1);
 FUNC_5(VAR_3);
 FUNC_0(FUNC_3(&VAR_3->sbd));
 FUNC_4(&VAR_3->sbd, ((void*)0));
 VAR_0 = ((void*)0);
 return 0;
}
