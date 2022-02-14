
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef enum ps3_bus_type { ____Placeholder_ps3_bus_type } ps3_bus_type ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int*,int *) ;

int FUNC_3(unsigned int VAR_1,
 enum ps3_bus_type *VAR_2)
{
 int VAR_3;
 u64 VAR_4 = 0;

 VAR_3 = FUNC_2(VAR_0,
  FUNC_1("bus", VAR_1),
  FUNC_0("type", 0),
  0, 0,
  &VAR_4, ((void*)0));
 *VAR_2 = VAR_4;
 return VAR_3;
}
