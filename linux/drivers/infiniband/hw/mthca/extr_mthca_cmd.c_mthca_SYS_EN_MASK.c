
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mthca_dev*,int ,int*,int ,int ,int ,int ) ;
 int FUNC_1 (struct mthca_dev*,char*,int,int,int,char*) ;

int FUNC_2(struct mthca_dev *VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, 0, &VAR_4, 0, 0, VAR_0, VAR_1);

 if (VAR_5 == -VAR_2)
  FUNC_1(VAR_3, "SYS_EN DDR error: syn=%x, sock=%d, "
      "sladdr=%d, SPD source=%s\n",
      (int) (VAR_4 >> 6) & 0xf, (int) (VAR_4 >> 4) & 3,
      (int) (VAR_4 >> 1) & 7, (int) VAR_4 & 1 ? "NVMEM" : "DIMM");

 return VAR_5;
}
