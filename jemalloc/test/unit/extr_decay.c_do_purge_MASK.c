
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mib ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (size_t*,size_t,int *,int *,int *,int ) ;
 int FUNC_2 (char*,size_t*,size_t*) ;

void
FUNC_3(unsigned VAR_0) {
 size_t VAR_1[3];
 size_t VAR_2 = sizeof(VAR_1)/sizeof(size_t);
 FUNC_0(FUNC_2("arena.0.purge", VAR_1, &VAR_2), 0,
     "Unexpected mallctlnametomib() failure");
 VAR_1[1] = (size_t)VAR_0;
 FUNC_0(FUNC_1(VAR_1, VAR_2, ((void*)0), ((void*)0), ((void*)0), 0), 0,
     "Unexpected mallctlbymib() failure");
}
