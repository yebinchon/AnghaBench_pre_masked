
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct exception_table_entry {int dummy; } ;
struct TYPE_3__ {unsigned long addr; } ;
struct TYPE_4__ {TYPE_1__ program_old_psw; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (unsigned long,int ,int ) ;
 int FUNC_1 (unsigned long,int ,int ) ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (struct exception_table_entry const*) ;
 struct exception_table_entry* FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(void)
{
 const struct exception_table_entry *VAR_1;
 unsigned long VAR_2, VAR_3;
 unsigned long VAR_4;

 VAR_4 = VAR_0.program_old_psw.addr;
 VAR_1 = FUNC_4(VAR_4);
 if (!VAR_1)
  FUNC_2();

 FUNC_1(VAR_2, 0, 0);
 VAR_3 = VAR_2 & ~(1UL << 28);
 FUNC_0(VAR_3, 0, 0);
 VAR_0.program_old_psw.addr = FUNC_3(VAR_1);
 FUNC_0(VAR_2, 0, 0);
}
