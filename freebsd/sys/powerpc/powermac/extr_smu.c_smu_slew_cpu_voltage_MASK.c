
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_cmd {int len; char* data; int cmd; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct smu_cmd*,int) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_1, int VAR_2)
{
 struct smu_cmd VAR_3;

 VAR_3.cmd = VAR_0;
 VAR_3.len = 8;
 VAR_3.data[0] = 'V';
 VAR_3.data[1] = 'S';
 VAR_3.data[2] = 'L';
 VAR_3.data[3] = 'E';
 VAR_3.data[4] = 'W';
 VAR_3.data[5] = 0xff;
 VAR_3.data[6] = 1;
 VAR_3.data[7] = VAR_2;

 FUNC_0(VAR_1, &VAR_3, 1);
}
