
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int nregs ;
typedef int mib ;


 int FUNC_0 (int ,int ,char*) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (size_t*,size_t,void*,size_t*,int *,int ) ;
 int FUNC_3 (char*,size_t*,size_t*) ;

__attribute__((used)) static size_t
FUNC_4(void) {
 uint32_t VAR_0;
 size_t VAR_1;
 unsigned VAR_2 = FUNC_1();
 size_t VAR_3[4];
 size_t VAR_4 = sizeof(VAR_3)/sizeof(size_t);

 FUNC_0(FUNC_3("arenas.bin.0.nregs", VAR_3, &VAR_4), 0,
     "Unexpected mallctlnametomb failure");
 VAR_3[2] = (size_t)VAR_2;
 VAR_1 = sizeof(VAR_0);
 FUNC_0(FUNC_2(VAR_3, VAR_4, (void *)&VAR_0, &VAR_1, ((void*)0),
     0), 0, "Unexpected mallctlbymib failure");
 return VAR_0;
}
