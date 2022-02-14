
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc_entry {TYPE_1__* meta; } ;
struct TYPE_6__ {int capacity; scalar_t__ size; int * data; } ;
struct TYPE_5__ {TYPE_3__ data; struct proc_entry entry; } ;
struct fd {TYPE_2__ proc; } ;
typedef int mode_t_ ;
struct TYPE_4__ {int (* show ) (struct proc_entry*,TYPE_3__*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (struct proc_entry*) ;
 int FUNC_5 (struct proc_entry*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct fd *VAR_1) {
    mode_t_ VAR_2 = FUNC_4(&VAR_1->proc.entry);
    if (FUNC_0(VAR_2))
        return VAR_0;
    FUNC_2(FUNC_1(VAR_2));

    if (VAR_1->proc.data.data == ((void*)0)) {
        VAR_1->proc.data.capacity = 4096;
        VAR_1->proc.data.data = FUNC_3(VAR_1->proc.data.capacity);
    }
    VAR_1->proc.data.size = 0;
    struct proc_entry VAR_3 = VAR_1->proc.entry;
    int VAR_4 = VAR_3.meta->show(&VAR_3, &VAR_1->proc.data);
    if (VAR_4 < 0)
        return VAR_4;
    return 0;
}
