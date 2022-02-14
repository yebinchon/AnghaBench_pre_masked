
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ncpu ;


 int VAR_0 ;
 int FUNC_0 (char*,int*,size_t*,int *,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_1, VAR_2, VAR_3;
 size_t VAR_4;

 VAR_4 = sizeof(VAR_1);
 VAR_2 = FUNC_0("hw.ncpu", &VAR_1, &VAR_4, ((void*)0), 0);
 if (VAR_2) {
  FUNC_1("sysctlbyname(hw.ncpu) failed defaulting to %d nfs servers",
      VAR_0);
  VAR_3 = VAR_0;
 } else {
  VAR_3 = VAR_1 * 8;
 }
 return VAR_3;
}
