
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,size_t,scalar_t__) ;
 int FUNC_1 (char*,size_t,int ) ;

__attribute__((used)) static int
FUNC_2(off_t VAR_1, void* VAR_2, size_t VAR_3)
{
    if ((size_t)FUNC_0(VAR_0, VAR_2, VAR_3, VAR_1) != VAR_3) {
 FUNC_1("pread (%zu @ 0x%jx)", VAR_3, (intmax_t)VAR_1);
 return 0;
    }
    return 1;
}
