
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_type {int secsize; int trans; int sectrac; int datalen; int gap; int tracks; int heads; int f_gap; int f_inter; int offset_side2; int flags; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char,int ) ;
 int VAR_4 ;

void
FUNC_2(struct fd_type VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = 128 << VAR_5.secsize;
 switch (VAR_5.trans) {
 case 130: VAR_7 = 250; break;
 case 129: VAR_7 = 300; break;
 case 128: VAR_7 = 500; break;
 case 131: VAR_7 = 1000; break;
 default: VAR_7 = 1; break;
 }

 FUNC_0("%d,%d,%#x,%#x,%d,%d,%d,%#x,%d,%d",
        VAR_5.sectrac, VAR_6, VAR_5.datalen, VAR_5.gap, VAR_5.tracks,
        VAR_7, VAR_5.heads, VAR_5.f_gap, VAR_5.f_inter, VAR_5.offset_side2);
 if (VAR_5.flags & VAR_2)
  FUNC_0(",+mfm");
 if (VAR_5.flags & VAR_0)
  FUNC_0(",+2step");
 if (VAR_5.flags & VAR_3)
  FUNC_0(",+perpnd");
 if (VAR_5.flags & VAR_1)
  FUNC_0(",+auto");
 FUNC_1('\n', VAR_4);
}
