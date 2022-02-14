
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; int end; int buffer_addr; int num_bytes; } ;
struct biosmemcon_ebda {TYPE_1__ v2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct biosmemcon_ebda*,...) ;

__attribute__((used)) static void FUNC_3(struct biosmemcon_ebda *VAR_3)
{
 FUNC_2("memconsole: BIOS console v2 EBDA structure found at %p\n",
  VAR_3);
 FUNC_2("memconsole: BIOS console buffer at 0x%.8x, start = %d, end = %d, num_bytes = %d\n",
  VAR_3->v2.buffer_addr, VAR_3->v2.start,
  VAR_3->v2.end, VAR_3->v2.num_bytes);

 VAR_0 = FUNC_1(VAR_3->v2.buffer_addr + VAR_3->v2.start);
 VAR_1 = VAR_3->v2.end - VAR_3->v2.start;
 FUNC_0(VAR_2);
}
