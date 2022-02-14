
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int fd_t ;
typedef scalar_t__ dword_t ;
typedef int addr_t ;
struct TYPE_4__ {TYPE_1__* mem; } ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static addr_t FUNC_4(addr_t VAR_5, dword_t VAR_6, dword_t VAR_7, dword_t VAR_8, fd_t VAR_9, dword_t VAR_10) {
    FUNC_0("mmap(0x%x, 0x%x, 0x%x, 0x%x, %d, %d)", VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    if (VAR_6 == 0)
        return VAR_3;
    if (VAR_7 & ~VAR_2)
        return VAR_3;
    if ((VAR_8 & VAR_0) && (VAR_8 & VAR_1))
        return VAR_3;

    FUNC_2(&VAR_4->mem->lock);
    addr_t VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_3(&VAR_4->mem->lock);
    return VAR_11;
}
