
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * reserved; int * active; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int,int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(void)
{
 FUNC_0(((1 << VAR_0) - 1) <= FUNC_4());

 if (FUNC_3(&VAR_3, VAR_0, 1,
    VAR_2))
  FUNC_5("Unable to initialize ASID allocator for %lu ASIDs\n",
        FUNC_1(&VAR_3));

 VAR_3.active = &VAR_1;
 VAR_3.reserved = &VAR_4;

 FUNC_6("ASID allocator initialised with %lu entries\n",
  FUNC_2(&VAR_3));

 return 0;
}
