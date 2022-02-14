
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_entry {TYPE_1__* meta; } ;
struct TYPE_2__ {scalar_t__ name; int (* getname ) (struct proc_entry*,char*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct proc_entry*,char*) ;

void FUNC_3(struct proc_entry *VAR_0, char *VAR_1) {
    if (VAR_0->meta->getname)
        VAR_0->meta->getname(VAR_0, VAR_1);
    else if (VAR_0->meta->name)
        FUNC_1(VAR_1, VAR_0->meta->name);
    else
        FUNC_0(!"missing name in proc entry");
}
