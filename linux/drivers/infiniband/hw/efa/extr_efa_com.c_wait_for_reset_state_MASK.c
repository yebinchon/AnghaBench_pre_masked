
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct efa_com_dev {int efa_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct efa_com_dev*,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct efa_com_dev *VAR_4, u32 VAR_5,
    u16 VAR_6)
{
 u32 VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = FUNC_0(VAR_4, VAR_1);

  if ((VAR_7 & VAR_2) ==
      VAR_6)
   return 0;

  FUNC_1(VAR_4->efa_dev, "Reset indication val %d\n", VAR_7);
  FUNC_2(VAR_0);
 }

 return -VAR_3;
}
