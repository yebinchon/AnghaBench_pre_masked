
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ end; } ;
struct TYPE_4__ {scalar_t__ end; scalar_t__ pos; } ;
struct x86_emulate_ctxt {TYPE_1__ mem_read; TYPE_2__ io_read; int rip_relative; int modrm; } ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct x86_emulate_ctxt *VAR_0)
{
 FUNC_0(&VAR_0->rip_relative, 0,
        (void *)&VAR_0->modrm - (void *)&VAR_0->rip_relative);

 VAR_0->io_read.pos = 0;
 VAR_0->io_read.end = 0;
 VAR_0->mem_read.end = 0;
}
