
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; int boot_mem_top; int dump_active; } ;
struct TYPE_5__ {scalar_t__ (* fadump_setup_metadata ) (TYPE_2__*) ;int (* fadump_init_mem_struct ) (TYPE_2__*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(void)
{
 FUNC_4(&VAR_0);
 if (!VAR_1.dump_active) {
  FUNC_5(&VAR_0);
  return;
 }

 FUNC_0();
 FUNC_5(&VAR_0);

 FUNC_2(VAR_1.boot_mem_top, FUNC_3());
 FUNC_1();





 if (VAR_1.ops->fadump_setup_metadata &&
     (VAR_1.ops->fadump_setup_metadata(&VAR_1) < 0))
  FUNC_6("Failed to setup kernel metadata!\n");
 VAR_1.ops->fadump_init_mem_struct(&VAR_1);
}
