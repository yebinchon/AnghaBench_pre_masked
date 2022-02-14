
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_entry {TYPE_1__* data; } ;
struct mem {int dummy; } ;
typedef int page_t ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 struct pt_entry* FUNC_3 (struct mem*,int) ;
 int FUNC_4 (char const*,int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (int,int ,int ) ;

void FUNC_8(struct mem *VAR_7, const char *VAR_8) {
    int VAR_9 = FUNC_4(VAR_8, VAR_1 | VAR_2 | VAR_3, 0666);
    if (VAR_9 < 0) {
        FUNC_5("open");
        return;
    }
    if (FUNC_1(VAR_9, 0xffffffff) < 0) {
        FUNC_5("ftruncate");
        return;
    }

    int VAR_10 = 0;
    for (page_t VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
        struct pt_entry *VAR_12 = FUNC_3(VAR_7, VAR_11);
        if (VAR_12 == ((void*)0))
            continue;
        VAR_10++;
        if (FUNC_2(VAR_9, VAR_11 << VAR_4, VAR_6) < 0) {
            FUNC_5("lseek");
            return;
        }
        if (FUNC_7(VAR_9, VAR_12->data->data, VAR_5) < 0) {
            FUNC_5("write");
            return;
        }
    }
    FUNC_6("dumped %d pages\n", VAR_10);
    FUNC_0(VAR_9);
}
