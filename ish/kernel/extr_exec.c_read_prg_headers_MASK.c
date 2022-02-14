
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prg_header {int dummy; } ;
struct fd {TYPE_1__* ops; } ;
struct elf_header {int phent_count; int prghead_off; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ (* lseek ) (struct fd*,int ,int ) ;scalar_t__ (* read ) (struct fd*,struct prg_header*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct prg_header*) ;
 struct prg_header* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct fd*,int ,int ) ;
 scalar_t__ FUNC_3 (struct fd*,struct prg_header*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct fd *VAR_5, struct elf_header VAR_6, struct prg_header **VAR_7) {
    ssize_t VAR_8 = sizeof(struct prg_header) * VAR_6.phent_count;
    struct prg_header *VAR_9 = FUNC_1(VAR_8);
    if (VAR_9 == ((void*)0))
        return VAR_3;

    if (VAR_5->ops->lseek(VAR_5, VAR_6.prghead_off, VAR_0) < 0) {
        FUNC_0(VAR_9);
        return VAR_1;
    }
    if (VAR_5->ops->read(VAR_5, VAR_9, VAR_8) != VAR_8) {
        FUNC_0(VAR_9);
        if (VAR_4 != 0)
            return VAR_1;
        return VAR_2;
    }

    *VAR_7 = VAR_9;
    return 0;
}
