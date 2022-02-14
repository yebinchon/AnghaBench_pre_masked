
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {unsigned long volatile* strbuf_flushflag; unsigned long strbuf_flushflag_pa; int strbuf_enabled; scalar_t__ strbuf_control; int * __flushflag_buf; scalar_t__ strbuf_ctxmatch_base; scalar_t__ strbuf_ctxflush; scalar_t__ strbuf_fsync; scalar_t__ strbuf_pflush; } ;
struct pci_pbm_info {unsigned long pbm_regs; scalar_t__ chip_type; TYPE_1__ stc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (unsigned long volatile*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pci_pbm_info *VAR_10)
{
 unsigned long VAR_11 = VAR_10->pbm_regs;
 u64 VAR_12;

 if (VAR_10->chip_type == VAR_0) {

  return;
 }


 VAR_10->stc.strbuf_control = VAR_11 + VAR_1;
 VAR_10->stc.strbuf_pflush = VAR_11 + VAR_8;
 VAR_10->stc.strbuf_fsync = VAR_11 + VAR_9;
 VAR_10->stc.strbuf_ctxflush = VAR_11 + VAR_6;
 VAR_10->stc.strbuf_ctxmatch_base = VAR_11 + VAR_7;

 VAR_10->stc.strbuf_flushflag = (volatile unsigned long *)
  ((((unsigned long)&VAR_10->stc.__flushflag_buf[0])
    + 63UL)
   & ~63UL);
 VAR_10->stc.strbuf_flushflag_pa = (unsigned long)
  FUNC_0(VAR_10->stc.strbuf_flushflag);





 VAR_12 = FUNC_1(VAR_10->stc.strbuf_control);
 VAR_12 &= ~(VAR_5 |
       VAR_4 |
       VAR_2);
 VAR_12 |= VAR_3;
 FUNC_2(VAR_12, VAR_10->stc.strbuf_control);

 VAR_10->stc.strbuf_enabled = 1;
}
