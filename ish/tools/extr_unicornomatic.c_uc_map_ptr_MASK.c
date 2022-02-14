
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uc_engine ;
typedef scalar_t__ dword_t ;
typedef scalar_t__ addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,void*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(uc_engine *VAR_2, addr_t VAR_3, void *VAR_4, dword_t VAR_5) {
    FUNC_2(VAR_2, VAR_3, VAR_5);
    for (addr_t VAR_6 = VAR_3; VAR_6 < VAR_3 + VAR_5; VAR_6 += VAR_0) {
        FUNC_1(FUNC_0(VAR_2, VAR_6, VAR_0, VAR_1, VAR_4 + (VAR_6 - VAR_3)), "mmap emulation");
    }
}
