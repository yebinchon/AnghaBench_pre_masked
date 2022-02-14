
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int count ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,void*,size_t*,int *,int ) ;

__attribute__((used)) static size_t
FUNC_2() {
 if (!VAR_0) {
  return 0;
 }
 size_t VAR_1 = 12345;
 size_t VAR_2 = sizeof(VAR_1);

 FUNC_0(FUNC_1("stats.zero_reallocs", (void *)&VAR_1, &VAR_2,
     ((void*)0), 0), 0, "Unexpected mallctl failure");
 return VAR_1;
}
