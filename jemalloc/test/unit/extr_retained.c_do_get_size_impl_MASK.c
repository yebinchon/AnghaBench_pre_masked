
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mib ;


 int FUNC_0 (int ,int ,char*,char const*) ;
 int FUNC_1 (size_t*,size_t,void*,size_t*,int *,int ) ;
 int FUNC_2 (char const*,size_t*,size_t*) ;

__attribute__((used)) static size_t
FUNC_3(const char *VAR_0, unsigned VAR_1) {
 size_t VAR_2[4];
 size_t VAR_3 = sizeof(VAR_2) / sizeof(size_t);
 size_t VAR_4 = sizeof(size_t);

 FUNC_0(FUNC_2(VAR_0, VAR_2, &VAR_3),
     0, "Unexpected mallctlnametomib(\"%s\", ...) failure", VAR_0);
 VAR_2[2] = VAR_1;
 size_t VAR_5;
 FUNC_0(FUNC_1(VAR_2, VAR_3, (void *)&VAR_5, &VAR_4, ((void*)0), 0),
     0, "Unexpected mallctlbymib([\"%s\"], ...) failure", VAR_0);

 return VAR_5;
}
