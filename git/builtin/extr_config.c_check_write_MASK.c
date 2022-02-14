
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ blob; scalar_t__ use_stdin; int file; } ;
struct TYPE_3__ {int have_repository; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (!VAR_0.file && !VAR_1->have_repository)
  FUNC_1(FUNC_0("not in a git directory"));

 if (VAR_0.use_stdin)
  FUNC_1(FUNC_0("writing to stdin is not supported"));

 if (VAR_0.blob)
  FUNC_1(FUNC_0("writing config blobs is not supported"));
}
