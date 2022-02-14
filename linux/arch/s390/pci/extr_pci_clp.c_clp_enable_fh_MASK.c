
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zpci_dev {int fid; int fh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zpci_dev*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int,char*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct zpci_dev*) ;

int FUNC_4(struct zpci_dev *VAR_2, u8 VAR_3)
{
 u32 VAR_4 = VAR_2->fh;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_4, VAR_3, VAR_1);
 FUNC_2(3, "ena fid:%x, fh:%x, rc:%d\n", VAR_2->fid, VAR_4, VAR_5);
 if (VAR_5)
  goto out;

 VAR_2->fh = VAR_4;
 if (FUNC_3(VAR_2)) {
  VAR_5 = FUNC_1(&VAR_4, VAR_3, VAR_0);
  FUNC_2(3, "ena mio fid:%x, fh:%x, rc:%d\n", VAR_2->fid, VAR_4, VAR_5);
  if (VAR_5)
   FUNC_0(VAR_2);
 }
out:
 return VAR_5;
}
