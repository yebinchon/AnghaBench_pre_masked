
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_device {int decodes; int locks; int owns; scalar_t__ mem_lock_cnt; scalar_t__ io_lock_cnt; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vga_device*,int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*,char*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct vga_device *VAR_4,
          int VAR_5)
{
 struct device *VAR_6 = &VAR_4->pdev->dev;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_4->decodes;
 VAR_8 = ~VAR_5 & VAR_7;
 VAR_9 = VAR_4->locks & VAR_8;
 VAR_4->decodes = VAR_5;

 FUNC_3(VAR_6, "changed VGA decodes: olddecodes=%s,decodes=%s:owns=%s\n",
  FUNC_1(VAR_7),
  FUNC_1(VAR_4->decodes),
  FUNC_1(VAR_4->owns));


 if (VAR_9) {
  if (VAR_9 & VAR_0)
   VAR_4->io_lock_cnt = 0;
  if (VAR_9 & VAR_2)
   VAR_4->mem_lock_cnt = 0;
  FUNC_0(VAR_4, VAR_9);
 }


 if (VAR_7 & VAR_1 &&
     !(VAR_5 & VAR_1))
  VAR_3--;
 if (!(VAR_7 & VAR_1) &&
     VAR_5 & VAR_1)
  VAR_3++;
 FUNC_2(VAR_6, "decoding count now is: %d\n", VAR_3);
}
