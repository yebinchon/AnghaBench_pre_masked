
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_1, uint32_t VAR_2,
    uint32_t VAR_3)
{

 FUNC_0("\tFlags={");
 if (VAR_3 & VAR_0)
  FUNC_0("ENABLED");
 else
  FUNC_0("DISABLED");
 FUNC_0("}\n");
 FUNC_0("\tAPIC ID=%d\n", VAR_1);
 FUNC_0("\tProximity Domain=%d\n", VAR_2);
}
