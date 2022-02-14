
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint16_t ;
struct mprs_btdh_mapping {void* DevHandle; void* TargetID; void* Bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,struct mprs_btdh_mapping*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(int VAR_2, uint16_t *VAR_3, uint16_t *VAR_4, uint16_t *VAR_5)
{
 int VAR_6;
 struct mprs_btdh_mapping VAR_7;

 VAR_7.Bus = *VAR_4;
 VAR_7.TargetID = *VAR_5;
 VAR_7.DevHandle = *VAR_3;

 if ((VAR_6 = FUNC_0(VAR_2, VAR_0, &VAR_7)) != 0) {
  VAR_6 = VAR_1;
  FUNC_1("Failed to map bus/target/device");
  return (VAR_6);
 }

 *VAR_4 = VAR_7.Bus;
 *VAR_5 = VAR_7.TargetID;
 *VAR_3 = VAR_7.DevHandle;

 return (0);
}
