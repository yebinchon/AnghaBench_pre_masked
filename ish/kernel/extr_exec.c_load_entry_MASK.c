
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct prg_header {scalar_t__ vaddr; scalar_t__ offset; scalar_t__ memsize; scalar_t__ filesize; int flags; } ;
struct fd {TYPE_1__* ops; } ;
typedef scalar_t__ dword_t ;
typedef scalar_t__ addr_t ;
struct TYPE_8__ {int mem; } ;
struct TYPE_7__ {TYPE_2__* data; } ;
struct TYPE_6__ {scalar_t__ file_offset; int fd; } ;
struct TYPE_5__ {int (* mmap ) (struct fd*,int ,int ,int ,scalar_t__,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (struct fd*) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (struct fd*,int ,int ,int ,scalar_t__,int,int ) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct prg_header VAR_6, addr_t VAR_7, struct fd *VAR_8) {
    int VAR_9;

    addr_t VAR_10 = VAR_6.vaddr + VAR_7;
    addr_t VAR_11 = VAR_6.offset;
    addr_t VAR_12 = VAR_6.memsize;
    addr_t VAR_13 = VAR_6.filesize;

    int VAR_14 = VAR_3;
    if (VAR_6.flags & VAR_2) VAR_14 |= VAR_4;

    if ((VAR_9 = VAR_8->ops->mmap(VAR_8, VAR_5->mem, FUNC_0(VAR_10),
                    FUNC_1(VAR_13 + FUNC_2(VAR_10)),
                    VAR_11 - FUNC_2(VAR_10), VAR_14, VAR_0)) < 0)
        return VAR_9;

    FUNC_4(VAR_5->mem, FUNC_0(VAR_10))->data->fd = FUNC_3(VAR_8);
    FUNC_4(VAR_5->mem, FUNC_0(VAR_10))->data->file_offset = VAR_11 - FUNC_2(VAR_10);

    if (VAR_12 > VAR_13) {

        dword_t VAR_15 = VAR_12 - VAR_13;



        addr_t VAR_16 = VAR_10 + VAR_13;
        dword_t VAR_17 = VAR_1 - FUNC_2(VAR_16);
        if (VAR_17 == VAR_1)

            VAR_17 = 0;

        if (VAR_17 != 0)
            FUNC_7(VAR_16, 0, VAR_17);
        if (VAR_17 > VAR_15)
            VAR_17 = VAR_15;


        if (VAR_15 - VAR_17 != 0)
            if ((VAR_9 = FUNC_5(VAR_5->mem, FUNC_1(VAR_10 + VAR_13),
                    FUNC_1(VAR_15 - VAR_17), VAR_14)) < 0)
                return VAR_9;
    }
    return 0;
}
