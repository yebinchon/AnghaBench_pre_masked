
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
typedef int note_buf_t ;
struct TYPE_2__ {int cpu_notes_buf_size; unsigned long cpu_notes_buf_vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (char*,int,unsigned long) ;
 int FUNC_3 (char*,int) ;

s32 FUNC_4(u32 VAR_2)
{

 VAR_1.cpu_notes_buf_size = VAR_2 * sizeof(note_buf_t);
 VAR_1.cpu_notes_buf_size = FUNC_0(VAR_1.cpu_notes_buf_size);
 VAR_1.cpu_notes_buf_vaddr =
  (unsigned long)FUNC_1(VAR_1.cpu_notes_buf_size);
 if (!VAR_1.cpu_notes_buf_vaddr) {
  FUNC_3("Failed to allocate %ld bytes for CPU notes buffer\n",
         VAR_1.cpu_notes_buf_size);
  return -VAR_0;
 }

 FUNC_2("Allocated buffer for cpu notes of size %ld at 0x%lx\n",
   VAR_1.cpu_notes_buf_size,
   VAR_1.cpu_notes_buf_vaddr);
 return 0;
}
