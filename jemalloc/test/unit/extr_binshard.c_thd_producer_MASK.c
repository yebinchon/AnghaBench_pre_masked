
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arena ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (char*,void*,size_t*,int *,int ) ;
 void* FUNC_3 (int,int) ;

__attribute__((used)) static void *
FUNC_4(void *VAR_2) {
 void **VAR_3 = VAR_2;
 unsigned VAR_4, VAR_5;
 size_t VAR_6;

 VAR_6 = sizeof(VAR_4);

 FUNC_1(FUNC_2("arenas.create", (void *)&VAR_4, &VAR_6, ((void*)0), 0), 0,
     "Unexpected mallctl() failure");
 for (VAR_5 = 0; VAR_5 < VAR_1 / 2; VAR_5++) {
  VAR_3[VAR_5] = FUNC_3(1, VAR_0 | FUNC_0(VAR_4));
 }


 for (; VAR_5 < VAR_1; VAR_5++) {
  VAR_3[VAR_5] = FUNC_3(1, VAR_0 | FUNC_0(0));
 }

 return ((void*)0);
}
