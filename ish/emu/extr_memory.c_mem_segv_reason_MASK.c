
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_entry {int flags; } ;
struct mem {int dummy; } ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 struct pt_entry* FUNC_3 (struct mem*,int ) ;

int FUNC_4(struct mem *VAR_6, addr_t VAR_7, int VAR_8) {
    FUNC_1(VAR_8 == VAR_0 || VAR_8 == VAR_1);
    struct pt_entry *VAR_9 = FUNC_3(VAR_6, FUNC_0(VAR_7));
    if (VAR_9 == ((void*)0))
        return VAR_5;
    if ((VAR_8 == VAR_0 && !(VAR_9->flags & VAR_2)) ||
            (VAR_8 == VAR_1 && !(VAR_9->flags & VAR_3)))
        return VAR_4;
    FUNC_2("caught segv for valid access");
}
