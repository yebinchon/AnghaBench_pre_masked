
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mib ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,void*,size_t*,int *,int ) ;
 int FUNC_2 (size_t*,size_t,void*,size_t*,int *,int ) ;
 int FUNC_3 (char*,size_t*,size_t*) ;

__attribute__((used)) static size_t
FUNC_4(void) {
 unsigned VAR_0;
 size_t VAR_1[4];
 size_t VAR_2, VAR_3, VAR_4;

 VAR_2 = sizeof(unsigned);
 FUNC_0(FUNC_1("arenas.nlextents", (void *)&VAR_0, &VAR_2, ((void*)0),
     0), 0, "Unexpected mallctl() error");

 VAR_3 = sizeof(VAR_1) / sizeof(size_t);
 FUNC_0(FUNC_3("arenas.lextent.0.size", VAR_1, &VAR_3), 0,
     "Unexpected mallctlnametomib() error");
 VAR_1[2] = VAR_0 - 1;

 VAR_2 = sizeof(size_t);
 FUNC_0(FUNC_2(VAR_1, VAR_3, (void *)&VAR_4, &VAR_2,
     ((void*)0), 0), 0, "Unexpected mallctlbymib() error");

 return VAR_4;
}
