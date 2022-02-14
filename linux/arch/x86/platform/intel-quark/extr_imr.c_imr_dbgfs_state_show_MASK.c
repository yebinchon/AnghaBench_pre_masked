
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct imr_device* private; } ;
struct imr_regs {int addr_lo; int addr_hi; int wmask; int rmask; } ;
struct imr_device {int max_imr; int lock; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct imr_regs*) ;
 int FUNC_1 (struct imr_device*,int,struct imr_regs*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct seq_file*,char*,int,int*,int*,size_t,int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_3, void *VAR_4)
{
 phys_addr_t VAR_5;
 phys_addr_t VAR_6;
 int VAR_7;
 struct imr_device *VAR_8 = VAR_3->private;
 struct imr_regs VAR_9;
 size_t VAR_10;
 int VAR_11 = -VAR_0;

 FUNC_3(&VAR_8->lock);

 for (VAR_7 = 0; VAR_7 < VAR_8->max_imr; VAR_7++) {

  VAR_11 = FUNC_1(VAR_8, VAR_7, &VAR_9);
  if (VAR_11)
   break;






  if (FUNC_0(&VAR_9)) {
   VAR_5 = FUNC_2(VAR_9.addr_lo);
   VAR_6 = FUNC_2(VAR_9.addr_hi) + VAR_2;
   VAR_10 = VAR_6 - VAR_5 + 1;
  } else {
   VAR_5 = 0;
   VAR_6 = 0;
   VAR_10 = 0;
  }
  FUNC_5(VAR_3, "imr%02i: base=%pa, end=%pa, size=0x%08zx "
      "rmask=0x%08x, wmask=0x%08x, %s, %s\n", VAR_7,
      &VAR_5, &VAR_6, VAR_10, VAR_9.rmask, VAR_9.wmask,
      FUNC_0(&VAR_9) ? "enabled " : "disabled",
      VAR_9.addr_lo & VAR_1 ? "locked" : "unlocked");
 }

 FUNC_4(&VAR_8->lock);
 return VAR_11;
}
