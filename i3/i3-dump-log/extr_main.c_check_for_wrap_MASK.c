
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int i3_shmlog_header ;
struct TYPE_2__ {scalar_t__ wrap_count; int offset_last_wrap; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int const) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1(void) {
    if (VAR_4 == VAR_1->wrap_count)
        return 0;



    VAR_4 = VAR_1->wrap_count;
    const int VAR_5 = (VAR_2 + VAR_1->offset_last_wrap) - VAR_3;
    FUNC_0(VAR_0, VAR_3, VAR_5);
    VAR_3 = VAR_2 + sizeof(i3_shmlog_header);
    return 1;
}
