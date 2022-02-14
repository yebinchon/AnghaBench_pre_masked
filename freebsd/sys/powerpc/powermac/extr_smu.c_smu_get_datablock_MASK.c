
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct smu_cmd {int len; int* data; int cmd; } ;
typedef int int8_t ;
typedef int device_t ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int*,size_t) ;
 int FUNC_1 (int ,struct smu_cmd*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, int8_t VAR_5, uint8_t *VAR_6, size_t VAR_7)
{
 struct smu_cmd VAR_8;
 uint8_t VAR_9[4];

 VAR_8.cmd = VAR_2;
 VAR_8.len = 2;
 VAR_8.data[0] = VAR_3;
 VAR_8.data[1] = VAR_5;

 FUNC_1(VAR_4, &VAR_8, 1);

 VAR_9[0] = VAR_9[1] = 0;
 VAR_9[2] = VAR_8.data[0];
 VAR_9[3] = VAR_8.data[1];

 VAR_8.cmd = VAR_0;
 VAR_8.len = 7;
 VAR_8.data[0] = VAR_1;
 VAR_8.data[1] = sizeof(VAR_9);
 FUNC_0(&VAR_8.data[2], VAR_9, sizeof(VAR_9));
 VAR_8.data[6] = VAR_7;

 FUNC_1(VAR_4, &VAR_8, 1);
 FUNC_0(VAR_6, VAR_8.data, VAR_7);
 return (0);
}
