
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ ssize_t ;
typedef int ULONG ;
struct TYPE_4__ {int initialized; scalar_t__ getentropy_available; scalar_t__ getrandom_available; int random_data_source_fd; int pid; } ;
struct TYPE_3__ {scalar_t__ nonce; size_t rnd32_outleft; int initialized; scalar_t__ key; int rnd32; } ;
typedef int PVOID ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (int,scalar_t__,int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_11(void)
{
    VAR_1.nonce = FUNC_9();
    FUNC_2(VAR_1.nonce != (uint64_t) 0U);
    FUNC_4(VAR_1.rnd32, 0, sizeof VAR_1.rnd32);
    VAR_1.rnd32_outleft = (size_t) 0U;
    if (VAR_0.initialized == 0) {
        FUNC_6();
        VAR_0.initialized = 1;
    }
    if (VAR_0.random_data_source_fd == -1 ||
        FUNC_8(VAR_0.random_data_source_fd, VAR_1.key,
                  sizeof VAR_1.key) != (ssize_t) sizeof VAR_1.key) {
        FUNC_10();
    }
    VAR_1.initialized = 1;
}
