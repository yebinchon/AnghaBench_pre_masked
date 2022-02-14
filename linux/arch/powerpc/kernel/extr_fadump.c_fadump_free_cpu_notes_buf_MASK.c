
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cpu_notes_buf_size; scalar_t__ cpu_notes_buf_vaddr; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void)
{
 if (!VAR_0.cpu_notes_buf_vaddr)
  return;

 FUNC_0(VAR_0.cpu_notes_buf_vaddr,
      VAR_0.cpu_notes_buf_size);
 VAR_0.cpu_notes_buf_vaddr = 0;
 VAR_0.cpu_notes_buf_size = 0;
}
