
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (void*) ;
 unsigned long VAR_5 ;
 int FUNC_2 (char*,unsigned long,unsigned long,...) ;

__attribute__((used)) static void FUNC_3(void)
{
 if ((VAR_3 != VAR_0)
     && (VAR_3 != VAR_1))
  FUNC_0("r6 contained 0x%08x instead of ePAPR magic number\n",
        VAR_3);

 if (VAR_5 < (unsigned long)VAR_2)
  FUNC_2("WARNING: Image loaded outside IMA!"
         " (_end=%p, ima_size=0x%lx)\n", VAR_2, VAR_5);
 if (VAR_5 < VAR_4)
  FUNC_2("WARNING: Device tree address is outside IMA!"
         "(fdt_addr=0x%lx, ima_size=0x%lx)\n", VAR_4,
         VAR_5);
 if (VAR_5 < VAR_4 + FUNC_1((void *)VAR_4))
  FUNC_2("WARNING: Device tree extends outside IMA!"
         " (fdt_addr=0x%lx, size=0x%x, ima_size=0x%lx\n",
         VAR_4, FUNC_1((void *)VAR_4), VAR_5);
}
