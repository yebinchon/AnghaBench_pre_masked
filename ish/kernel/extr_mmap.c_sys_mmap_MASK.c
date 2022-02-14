
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmap_arg_struct {int offset; int fd; int flags; int prot; int len; int addr; } ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,struct mmap_arg_struct) ;

addr_t FUNC_2(addr_t VAR_1) {
    struct mmap_arg_struct VAR_2;
    if (FUNC_1(VAR_1, VAR_2))
        return VAR_0;
    return FUNC_0(VAR_2.addr, VAR_2.len, VAR_2.prot, VAR_2.flags, VAR_2.fd, VAR_2.offset);
}
