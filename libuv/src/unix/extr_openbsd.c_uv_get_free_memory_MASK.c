
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct uvmexp {scalar_t__ free; } ;
typedef int info ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int*,int,struct uvmexp*,size_t*,int *,int ) ;

uint64_t FUNC_3(void) {
  struct uvmexp VAR_4;
  size_t VAR_5 = sizeof(VAR_4);
  int VAR_6[] = {VAR_0, VAR_1};

  if (FUNC_2(VAR_6, 2, &VAR_4, &VAR_5, ((void*)0), 0))
    return FUNC_0(VAR_3);

  return (uint64_t) VAR_4.free * FUNC_1(VAR_2);
}
