
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte_t ;
typedef int byte ;
typedef scalar_t__ addr_t ;


 int FUNC_0 (int,scalar_t__,int *,int) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_0, addr_t VAR_1, size_t VAR_2) {
    byte_t VAR_3;
    for (addr_t VAR_4 = VAR_1; VAR_4 < VAR_1 + VAR_2; VAR_4++) {
        FUNC_0(VAR_0, VAR_4, &VAR_3, sizeof(VAR_3));
        (void) FUNC_1(VAR_4, VAR_3);
    }
}
