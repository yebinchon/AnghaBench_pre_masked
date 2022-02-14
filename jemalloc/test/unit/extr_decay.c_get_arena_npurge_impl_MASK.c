
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int npurge ;
typedef int mib ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (size_t*,size_t,void*,size_t*,int *,int ) ;
 int FUNC_2 (char const*,size_t*,size_t*) ;

__attribute__((used)) static uint64_t
FUNC_3(const char *VAR_2, unsigned VAR_3) {
 size_t VAR_4[4];
 size_t VAR_5 = sizeof(VAR_4)/sizeof(size_t);
 FUNC_0(FUNC_2(VAR_2, VAR_4, &VAR_5), 0,
     "Unexpected mallctlnametomib() failure");
 VAR_4[2] = (size_t)VAR_3;
 uint64_t VAR_6 = 0;
 size_t VAR_7 = sizeof(VAR_6);
 FUNC_0(FUNC_1(VAR_4, VAR_5, (void *)&VAR_6, &VAR_7, ((void*)0), 0),
     VAR_1 ? 0 : VAR_0, "Unexpected mallctlbymib() failure");
 return VAR_6;
}
