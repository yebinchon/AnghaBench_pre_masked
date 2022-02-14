
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; } ;
struct TYPE_4__ {TYPE_1__ font; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(void) {
    VAR_0 = FUNC_1(VAR_0);
    VAR_4 = FUNC_1(VAR_4);

    int VAR_10 = 5;
    VAR_5 = FUNC_0("i3 has just crashed. Please report a bug for this.");
    VAR_6 = FUNC_0("To debug this problem, you can either attach gdb or choose from the following options:");
    VAR_7 = FUNC_0("- 'b' to save a backtrace (requires gdb)");
    VAR_9 = FUNC_0("- 'r' to restart i3 in-place");
    VAR_8 = FUNC_0("- 'f' to forget the previous layout and restart i3");

    int VAR_11 = FUNC_2(VAR_6);

    VAR_3 = VAR_11 + 2 * VAR_0 + 2 * VAR_4;
    VAR_2 = VAR_10 * VAR_1.font.height + 2 * VAR_0 + 2 * VAR_4;
}
