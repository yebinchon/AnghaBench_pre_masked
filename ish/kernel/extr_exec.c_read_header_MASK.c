
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* ops; } ;
struct elf_header {scalar_t__ type; scalar_t__ bitness; scalar_t__ endian; int elfversion1; scalar_t__ machine; int magic; } ;
struct TYPE_2__ {int (* read ) (struct fd*,struct elf_header*,int) ;scalar_t__ (* lseek ) (struct fd*,int ,int ) ;} ;


 scalar_t__ ELF_32BIT ;
 scalar_t__ ELF_DYNAMIC ;
 scalar_t__ ELF_EXECUTABLE ;
 scalar_t__ ELF_LITTLEENDIAN ;
 int ELF_MAGIC ;
 scalar_t__ ELF_X86 ;
 int SEEK_SET ;
 int _EIO ;
 int _ENOEXEC ;
 scalar_t__ memcmp (int *,int ,int) ;
 scalar_t__ stub1 (struct fd*,int ,int ) ;
 int stub2 (struct fd*,struct elf_header*,int) ;

__attribute__((used)) static int read_header(struct fd *fd, struct elf_header *header) {
    int err;
    if (fd->ops->lseek(fd, 0, SEEK_SET))
        return _EIO;
    if ((err = fd->ops->read(fd, header, sizeof(*header))) != sizeof(*header)) {
        if (err < 0)
            return _EIO;
        return _ENOEXEC;
    }
    if (memcmp(&header->magic, ELF_MAGIC, sizeof(header->magic)) != 0
            || (header->type != ELF_EXECUTABLE && header->type != ELF_DYNAMIC)
            || header->bitness != ELF_32BIT
            || header->endian != ELF_LITTLEENDIAN
            || header->elfversion1 != 1
            || header->machine != ELF_X86)
        return _ENOEXEC;
    return 0;
}
