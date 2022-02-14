
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_cmd {int len; int* data; int cmd; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct smu_cmd*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2, int VAR_3)
{
 static struct smu_cmd VAR_4;
 device_t VAR_5 = VAR_2;

 VAR_4.cmd = VAR_0;
 VAR_4.len = 3;
 VAR_4.data[0] = VAR_1;
 VAR_4.data[1] = 0;
 VAR_4.data[2] = VAR_3;

 FUNC_0(VAR_5, &VAR_4, 0);
}
