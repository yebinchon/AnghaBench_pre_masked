
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sun4v_error_entry {int err_attrs; int err_raddr; int err_size; int err_cpu; int err_asi; int err_asr; int err_type; int err_stick; int err_handle; } ;
struct pt_regs {scalar_t__ tpc; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int,...) ;
 int FUNC_4 (struct pt_regs*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*,struct pt_regs*) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct pt_regs *VAR_8, struct sun4v_error_entry *VAR_9,
       int VAR_10, const char *VAR_11, atomic_t *VAR_12)
{
 u64 *VAR_13 = (u64 *) VAR_9;
 u32 VAR_14;
 int VAR_15;

 FUNC_3("%s: Reporting on cpu %d\n", VAR_11, VAR_10);
 FUNC_3("%s: TPC [0x%016lx] <%pS>\n",
        VAR_11, VAR_8->tpc, (void *) VAR_8->tpc);

 FUNC_3("%s: RAW [%016llx:%016llx:%016llx:%016llx\n",
        VAR_11, VAR_13[0], VAR_13[1], VAR_13[2], VAR_13[3]);
 FUNC_3("%s:      %016llx:%016llx:%016llx:%016llx]\n",
        VAR_11, VAR_13[4], VAR_13[5], VAR_13[6], VAR_13[7]);

 FUNC_3("%s: handle [0x%016llx] stick [0x%016llx]\n",
        VAR_11, VAR_9->err_handle, VAR_9->err_stick);

 FUNC_3("%s: type [%s]\n", VAR_11, FUNC_6(VAR_9->err_type));

 VAR_14 = VAR_9->err_attrs;
 FUNC_3("%s: attrs [0x%08x] < ", VAR_11, VAR_14);
 FUNC_5(VAR_14);
 FUNC_2(">\n");




 if (VAR_14 & (VAR_4 |
       VAR_5 |
       VAR_1)) {
  FUNC_3("%s: raddr [0x%016llx]\n", VAR_11, VAR_9->err_raddr);

  if (VAR_9->err_raddr == ~(u64)0)
   FUNC_7(VAR_11, VAR_8);
 }

 if (VAR_14 & (VAR_4 | VAR_1))
  FUNC_3("%s: size [0x%x]\n", VAR_11, VAR_9->err_size);

 if (VAR_14 & (VAR_7 |
       VAR_3 |
       VAR_2 |
       VAR_6))
  FUNC_3("%s: cpu[%u]\n", VAR_11, VAR_9->err_cpu);

 if (VAR_14 & VAR_1)
  FUNC_3("%s: asi [0x%02x]\n", VAR_11, VAR_9->err_asi);

 if ((VAR_14 & (VAR_3 |
        VAR_2 |
        VAR_6)) &&
     (VAR_9->err_asr & VAR_0) != 0)
  FUNC_3("%s: reg [0x%04x]\n",
         VAR_11, VAR_9->err_asr & ~VAR_0);

 FUNC_4(VAR_8);

 if ((VAR_15 = FUNC_0(VAR_12)) != 0) {
  FUNC_1(VAR_12, 0);
  FUNC_8();
  FUNC_3("%s: Queue overflowed %d times.\n",
         VAR_11, VAR_15);
 }
}
