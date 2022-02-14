
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int ULONG ;
struct TYPE_2__ {scalar_t__ getrandom_available; int random_data_source_fd; } ;
typedef int PVOID ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 size_t const VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (void* const,size_t const) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int,void* const,size_t const) ;
 int FUNC_6 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_7(void * const VAR_3, const size_t VAR_4)
{
    FUNC_4();
    if (VAR_2.random_data_source_fd == -1 ||
        FUNC_5(VAR_2.random_data_source_fd, VAR_3, VAR_4) != (ssize_t) VAR_4) {
        FUNC_6();
    }
}
