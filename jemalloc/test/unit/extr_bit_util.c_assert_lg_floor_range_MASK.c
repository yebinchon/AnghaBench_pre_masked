
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int,char*,unsigned int) ;
 int FUNC_2 (size_t,unsigned int,char*,unsigned int,size_t) ;
 int FUNC_3 (size_t,unsigned int,char*,unsigned int,size_t) ;

void
FUNC_4(size_t VAR_0, unsigned VAR_1) {
 if (VAR_0 == 1) {
  FUNC_1(0, VAR_1, "Got %u as lg_floor of 1", VAR_1);
  return;
 }
 FUNC_2(VAR_0, (FUNC_0(1) << VAR_1),
     "Got %u as lg_floor of %zu", VAR_1, VAR_0);
 FUNC_3(VAR_0, (FUNC_0(1) << (VAR_1 + 1)),
     "Got %u as lg_floor of %zu", VAR_1, VAR_0);
}
