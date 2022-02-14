
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zpci_dev {int fh; int fid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct zpci_dev*) ;
 int FUNC_2 (int,char*,int ,int ,int) ;

int FUNC_3(struct zpci_dev *VAR_1)
{
 u32 VAR_2 = VAR_1->fh;
 int VAR_3;

 if (!FUNC_1(VAR_1))
  return 0;

 VAR_3 = FUNC_0(&VAR_2, 0, VAR_0);
 FUNC_2(3, "dis fid:%x, fh:%x, rc:%d\n", VAR_1->fid, VAR_2, VAR_3);
 if (!VAR_3)
  VAR_1->fh = VAR_2;

 return VAR_3;
}
