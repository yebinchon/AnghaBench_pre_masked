
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmuzzy ;
typedef int mib ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (size_t*,size_t,void*,size_t*,int *,int ) ;
 int FUNC_3 (char*,size_t*,size_t*) ;

__attribute__((used)) static size_t
FUNC_4(unsigned VAR_0) {
 FUNC_1();
 size_t VAR_1[4];
 size_t VAR_2 = sizeof(VAR_1)/sizeof(size_t);
 FUNC_0(FUNC_3("stats.arenas.0.pmuzzy", VAR_1, &VAR_2), 0,
     "Unexpected mallctlnametomib() failure");
 VAR_1[2] = (size_t)VAR_0;
 size_t VAR_3;
 size_t VAR_4 = sizeof(VAR_3);
 FUNC_0(FUNC_2(VAR_1, VAR_2, (void *)&VAR_3, &VAR_4, ((void*)0), 0), 0,
     "Unexpected mallctlbymib() failure");
 return VAR_3;
}
