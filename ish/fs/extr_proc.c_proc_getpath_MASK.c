
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc_entry {TYPE_2__* meta; } ;
struct TYPE_3__ {struct proc_entry entry; } ;
struct fd {TYPE_1__ proc; } ;
struct TYPE_4__ {struct TYPE_4__* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (struct proc_entry*,char*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct fd *VAR_3, char *VAR_4) {
    char *VAR_5 = VAR_4 + VAR_1 - 1;
    size_t VAR_6 = 0;
    VAR_5[0] = '\0';
    struct proc_entry VAR_7 = VAR_3->proc.entry;
    while (VAR_7.meta != &VAR_2) {
        char VAR_8[VAR_0];
        FUNC_2(&VAR_7, VAR_8);
        size_t VAR_9 = FUNC_3(VAR_8) + 1;
        VAR_5 -= VAR_9;
        VAR_6 += VAR_9;
        *VAR_5 = '/';
        FUNC_0(VAR_5 + 1, VAR_8, VAR_9);
        VAR_7.meta = VAR_7.meta->parent;
    }
    FUNC_1(VAR_4, VAR_5, VAR_6 + 1);
    return 0;
}
