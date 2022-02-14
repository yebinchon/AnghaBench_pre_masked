
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * next; } ;
struct msc_window {TYPE_2__* msc; TYPE_1__ entry; } ;
struct TYPE_4__ {int win_list; } ;



__attribute__((used)) static inline bool FUNC_0(struct msc_window *VAR_0)
{
 return VAR_0->entry.next == &VAR_0->msc->win_list;
}
