
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_cmd {int data; int len; int cmd; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct smu_cmd*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, int VAR_3)
{
 device_t VAR_4 = VAR_2;
 struct smu_cmd VAR_5;

 VAR_5.cmd = VAR_1;
 if (VAR_3 & VAR_0)
  FUNC_1(VAR_5.data, "SHUTDOWN");
 else
  FUNC_1(VAR_5.data, "RESTART");

 VAR_5.len = FUNC_2(VAR_5.data);

 FUNC_0(VAR_4, &VAR_5, 1);

 for (;;);
}
