
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_entry {TYPE_1__* meta; } ;
typedef int mode_t_ ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

mode_t_ FUNC_3(struct proc_entry *VAR_2) {
    mode_t_ VAR_3 = VAR_2->meta->mode;
    if ((VAR_3 & VAR_0) == 0)
        VAR_3 |= VAR_1;
    if ((VAR_3 & 0777) == 0) {
        if (FUNC_2(VAR_3))
            VAR_3 |= 0444;
        else if (FUNC_0(VAR_3))
            VAR_3 |= 0555;
        else if (FUNC_1(VAR_3))
            VAR_3 |= 0777;
    }
    return VAR_3;
}
