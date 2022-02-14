
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long fadumphdr_addr; TYPE_1__* ops; int reserve_dump_area_size; } ;
struct TYPE_4__ {int (* fadump_register ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_1 ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(void)
{
 unsigned long VAR_2;
 void *VAR_3;
 int VAR_4;





 if (!VAR_1.reserve_dump_area_size)
  return -VAR_0;

 VAR_4 = FUNC_2();
 if (VAR_4)
  return VAR_4;

 VAR_2 = VAR_1.fadumphdr_addr;


 VAR_2 = FUNC_3(VAR_2);
 VAR_3 = FUNC_0(VAR_2);

 FUNC_4("Creating ELF core headers at %#016lx\n", VAR_2);
 FUNC_1(VAR_3);


 FUNC_4("Registering for firmware-assisted kernel dump...\n");
 return VAR_1.ops->fadump_register(&VAR_1);
}
