
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {unsigned long volatile* strbuf_flushflag; unsigned long strbuf_flushflag_pa; int strbuf_enabled; scalar_t__ strbuf_control; int * __flushflag_buf; scalar_t__ strbuf_ctxmatch_base; scalar_t__ strbuf_ctxflush; scalar_t__ strbuf_line_diag; scalar_t__ strbuf_tag_diag; scalar_t__ strbuf_err_stat; scalar_t__ strbuf_fsync; scalar_t__ strbuf_pflush; } ;
struct pci_pbm_info {unsigned long controller_regs; TYPE_1__ stc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (unsigned long volatile*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pci_pbm_info *VAR_16,
       int VAR_17)
{
 unsigned long VAR_18 = VAR_16->controller_regs;
 u64 VAR_19;

 if (VAR_17) {
  VAR_16->stc.strbuf_control = VAR_18 + VAR_6;
  VAR_16->stc.strbuf_pflush = VAR_18 + VAR_12;
  VAR_16->stc.strbuf_fsync = VAR_18 + VAR_14;
  VAR_16->stc.strbuf_err_stat = VAR_18 + VAR_0;
  VAR_16->stc.strbuf_tag_diag = VAR_18 + VAR_4;
  VAR_16->stc.strbuf_line_diag= VAR_18 + VAR_2;
 } else {
  VAR_16->stc.strbuf_control = VAR_18 + VAR_7;
  VAR_16->stc.strbuf_pflush = VAR_18 + VAR_13;
  VAR_16->stc.strbuf_fsync = VAR_18 + VAR_15;
  VAR_16->stc.strbuf_err_stat = VAR_18 + VAR_1;
  VAR_16->stc.strbuf_tag_diag = VAR_18 + VAR_5;
  VAR_16->stc.strbuf_line_diag= VAR_18 + VAR_3;
 }

 VAR_16->stc.strbuf_ctxflush = 0;
 VAR_16->stc.strbuf_ctxmatch_base = 0;

 VAR_16->stc.strbuf_flushflag = (volatile unsigned long *)
  ((((unsigned long)&VAR_16->stc.__flushflag_buf[0])
    + 63UL)
   & ~63UL);
 VAR_16->stc.strbuf_flushflag_pa = (unsigned long)
  FUNC_0(VAR_16->stc.strbuf_flushflag);
 VAR_19 = FUNC_1(VAR_16->stc.strbuf_control);
 VAR_19 |= VAR_8;
 VAR_19 &= ~(VAR_9 | VAR_10);







 FUNC_2(VAR_19, VAR_16->stc.strbuf_control);

 VAR_16->stc.strbuf_enabled = 1;
}
