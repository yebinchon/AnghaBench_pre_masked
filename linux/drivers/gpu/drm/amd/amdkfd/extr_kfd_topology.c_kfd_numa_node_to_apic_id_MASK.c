
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(int VAR_1)
{
 if (VAR_1 == -1) {
  FUNC_2("Invalid NUMA Node. Use online CPU mask\n");
  return FUNC_1(VAR_0);
 }
 return FUNC_1(FUNC_0(VAR_1));
}
