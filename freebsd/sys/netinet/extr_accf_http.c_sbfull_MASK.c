
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {scalar_t__ sb_cc; scalar_t__ sb_hiwat; scalar_t__ sb_mbcnt; scalar_t__ sb_mbmax; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct sockbuf*) ;

__attribute__((used)) static int
FUNC_2(struct sockbuf *VAR_0)
{

 FUNC_0("sbfull, cc(%ld) >= hiwat(%ld): %d, "
     "mbcnt(%ld) >= mbmax(%ld): %d",
     VAR_0->sb_cc, VAR_0->sb_hiwat, VAR_0->sb_cc >= VAR_0->sb_hiwat,
     VAR_0->sb_mbcnt, VAR_0->sb_mbmax, VAR_0->sb_mbcnt >= VAR_0->sb_mbmax);
 return (FUNC_1(VAR_0) >= VAR_0->sb_hiwat || VAR_0->sb_mbcnt >= VAR_0->sb_mbmax);
}
