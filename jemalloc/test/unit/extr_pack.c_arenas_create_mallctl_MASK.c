
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arena_ind ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,void*,size_t*,int *,int ) ;

__attribute__((used)) static unsigned
FUNC_2(void) {
 unsigned VAR_0;
 size_t VAR_1;

 VAR_1 = sizeof(VAR_0);
 FUNC_0(FUNC_1("arenas.create", (void *)&VAR_0, &VAR_1, ((void*)0), 0),
     0, "Error in arenas.create");

 return VAR_0;
}
