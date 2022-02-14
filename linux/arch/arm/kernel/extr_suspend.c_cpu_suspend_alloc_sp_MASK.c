
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int save_ptr_stash_phys; void* save_ptr_stash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int ,int,int ) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(void)
{
 void *VAR_3;

 VAR_3 = FUNC_1(FUNC_2(), sizeof(u32), VAR_1);

 if (FUNC_0(!VAR_3))
  return -VAR_0;
 VAR_2.save_ptr_stash = VAR_3;
 VAR_2.save_ptr_stash_phys = FUNC_4(VAR_3);
 FUNC_3(&VAR_2);
 return 0;
}
