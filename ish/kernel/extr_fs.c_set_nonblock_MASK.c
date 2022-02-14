
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int dummy; } ;
typedef scalar_t__ dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fd*) ;
 int FUNC_1 (struct fd*,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct fd *VAR_2, addr_t VAR_3) {
    dword_t VAR_4;
    if (FUNC_2(VAR_3, VAR_4))
        return VAR_1;
    int VAR_5 = FUNC_0(VAR_2);
    if (VAR_4)
        VAR_5 |= VAR_0;
    else
        VAR_5 &= ~VAR_0;
    return FUNC_1(VAR_2, VAR_5);
}
