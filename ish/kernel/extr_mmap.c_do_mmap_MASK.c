
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fd {TYPE_1__* ops; } ;
typedef int pages_t ;
typedef scalar_t__ page_t ;
typedef int fd_t ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;
struct TYPE_8__ {int mem; } ;
struct TYPE_7__ {TYPE_2__* data; } ;
struct TYPE_6__ {int file_offset; int fd; } ;
struct TYPE_5__ {int (* mmap ) (struct fd*,int ,scalar_t__,int ,int,int,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_4__* VAR_10 ;
 struct fd* FUNC_3 (int ) ;
 int FUNC_4 (struct fd*) ;
 TYPE_3__* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int ,scalar_t__,int ,int) ;
 int FUNC_9 (struct fd*,int ,scalar_t__,int ,int,int,int) ;

__attribute__((used)) static addr_t FUNC_10(addr_t VAR_11, dword_t VAR_12, dword_t VAR_13, dword_t VAR_14, fd_t VAR_15, dword_t VAR_16) {
    int VAR_17;
    pages_t VAR_18 = FUNC_1(VAR_12);
    page_t VAR_19;
    if (VAR_11 != 0) {
        if (FUNC_2(VAR_11) != 0)
            return VAR_7;
        VAR_19 = FUNC_0(VAR_11);
        if (!(VAR_14 & VAR_2) && !FUNC_7(VAR_10->mem, VAR_19, VAR_18)) {
            VAR_11 = 0;
        }
    }
    if (VAR_11 == 0) {
        VAR_19 = FUNC_6(VAR_10->mem, VAR_18);
        if (VAR_19 == VAR_0)
            return VAR_9;
    }

    if (VAR_14 & VAR_3)
        VAR_13 |= VAR_5;

    if (VAR_14 & VAR_1) {
        if ((VAR_17 = FUNC_8(VAR_10->mem, VAR_19, VAR_18, VAR_13)) < 0)
            return VAR_17;
    } else {

        struct fd *VAR_20 = FUNC_3(VAR_15);
        if (VAR_20 == ((void*)0))
            return VAR_6;
        if (VAR_20->ops->mmap == ((void*)0))
            return VAR_8;
        if ((VAR_17 = VAR_20->ops->mmap(VAR_20, VAR_10->mem, VAR_19, VAR_18, VAR_16, VAR_13, VAR_14)) < 0)
            return VAR_17;
        FUNC_5(VAR_10->mem, VAR_19)->data->fd = FUNC_4(VAR_20);
        FUNC_5(VAR_10->mem, VAR_19)->data->file_offset = VAR_16;
    }
    return VAR_19 << VAR_4;
}
