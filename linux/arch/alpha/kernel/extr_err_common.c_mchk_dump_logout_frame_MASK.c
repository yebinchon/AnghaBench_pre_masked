
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct el_common {scalar_t__ sys_offset; scalar_t__ size; scalar_t__ proc_offset; int frame_rev; int code; scalar_t__ err2; scalar_t__ retry; } ;


 int VAR_0 ;
 int FUNC_0 (void*,scalar_t__,int *) ;
 int FUNC_1 (char*,int ,...) ;

void
FUNC_2(struct el_common *VAR_1)
{
 FUNC_1("%s  -- Frame Header --\n"
          "    Frame Size:   %d (0x%x) bytes\n"
          "    Flags:        %s%s\n"
          "    MCHK Code:    0x%x\n"
          "    Frame Rev:    %d\n"
          "    Proc Offset:  0x%08x\n"
          "    Sys Offset:   0x%08x\n"
            "  -- Processor Region --\n",
        VAR_0,
        VAR_1->size, VAR_1->size,
        VAR_1->retry ? "RETRY " : "",
            VAR_1->err2 ? "SECOND_ERR " : "",
        VAR_1->code,
        VAR_1->frame_rev,
        VAR_1->proc_offset,
        VAR_1->sys_offset);

 FUNC_0((void *)
        ((unsigned long)VAR_1 + VAR_1->proc_offset),
        VAR_1->sys_offset - VAR_1->proc_offset,
        ((void*)0));

 FUNC_1("%s  -- System Region --\n", VAR_0);
 FUNC_0((void *)
        ((unsigned long)VAR_1 + VAR_1->sys_offset),
        VAR_1->size - VAR_1->sys_offset,
        ((void*)0));
 FUNC_1("%s  -- End of Frame --\n", VAR_0);
}
