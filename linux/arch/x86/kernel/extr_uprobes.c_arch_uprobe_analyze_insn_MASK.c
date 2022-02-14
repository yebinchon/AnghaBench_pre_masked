
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mm_struct {int dummy; } ;
struct insn {int length; } ;
struct TYPE_2__ {int fixups; int ilen; } ;
struct arch_uprobe {int * ops; TYPE_1__ defparam; } ;


 int VAR_0 ;
 int FUNC_0 (struct insn*) ;
 int FUNC_1 (struct insn*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct arch_uprobe*,struct insn*) ;
 int VAR_4 ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct arch_uprobe*,struct insn*) ;
 int FUNC_5 (struct arch_uprobe*,struct insn*) ;
 int FUNC_6 (struct arch_uprobe*,struct insn*,int ) ;

int FUNC_7(struct arch_uprobe *VAR_5, struct mm_struct *VAR_6, unsigned long VAR_7)
{
 struct insn VAR_8;
 u8 VAR_9 = VAR_2;
 int VAR_10;

 VAR_10 = FUNC_6(VAR_5, &VAR_8, FUNC_3(VAR_6));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_5, &VAR_8);
 if (VAR_10 != -VAR_0)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_5, &VAR_8);
 if (VAR_10 != -VAR_0)
  return VAR_10;





 switch (FUNC_1(&VAR_8)) {
 case 0x9d:
  VAR_5->defparam.fixups |= VAR_3;
  break;
 case 0xc3:
 case 0xcb:
 case 0xc2:
 case 0xca:
 case 0xea:
  VAR_9 = 0;
  break;
 case 0x9a:
  VAR_9 = VAR_1;
  break;
 case 0xff:
  switch (FUNC_0(&VAR_8)) {
  case 2: case 3:
   VAR_9 = VAR_1;
   break;
  case 4: case 5:
   VAR_9 = 0;
   break;
  }

 default:
  FUNC_5(VAR_5, &VAR_8);
 }

 VAR_5->defparam.ilen = VAR_8.length;
 VAR_5->defparam.fixups |= VAR_9;

 VAR_5->ops = &VAR_4;
 return 0;
}
