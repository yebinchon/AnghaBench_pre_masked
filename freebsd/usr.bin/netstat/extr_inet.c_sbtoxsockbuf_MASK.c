
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsockbuf {int sb_timeo; int sb_flags; int sb_lowat; int sb_mbmax; int sb_ccnt; int sb_mcnt; int sb_mbcnt; int sb_hiwat; int sb_cc; } ;
struct sockbuf {int sb_timeo; int sb_flags; int sb_lowat; int sb_mbmax; int sb_ccnt; int sb_mcnt; int sb_mbcnt; int sb_hiwat; int sb_ccc; } ;



__attribute__((used)) static void
FUNC_0(struct sockbuf *VAR_0, struct xsockbuf *VAR_1)
{
 VAR_1->sb_cc = VAR_0->sb_ccc;
 VAR_1->sb_hiwat = VAR_0->sb_hiwat;
 VAR_1->sb_mbcnt = VAR_0->sb_mbcnt;
 VAR_1->sb_mcnt = VAR_0->sb_mcnt;
 VAR_1->sb_ccnt = VAR_0->sb_ccnt;
 VAR_1->sb_mbmax = VAR_0->sb_mbmax;
 VAR_1->sb_lowat = VAR_0->sb_lowat;
 VAR_1->sb_flags = VAR_0->sb_flags;
 VAR_1->sb_timeo = VAR_0->sb_timeo;
}
