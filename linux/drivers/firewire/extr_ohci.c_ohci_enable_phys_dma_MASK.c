
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ohci {int generation; int lock; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fw_ohci*) ;
 struct fw_ohci* FUNC_1 (struct fw_card*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct fw_ohci*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct fw_card *VAR_5,
    int VAR_6, int VAR_7)
{
 struct fw_ohci *VAR_8 = FUNC_1(VAR_5);
 unsigned long VAR_9;
 int VAR_10, VAR_11 = 0;

 if (VAR_4)
  return 0;






 FUNC_3(&VAR_8->lock, VAR_9);

 if (VAR_8->generation != VAR_7) {
  VAR_11 = -VAR_0;
  goto out;
 }






 VAR_10 = (VAR_6 & 0xffc0) == VAR_1 ? VAR_6 & 0x3f : 63;
 if (VAR_10 < 32)
  FUNC_2(VAR_8, VAR_3, 1 << VAR_10);
 else
  FUNC_2(VAR_8, VAR_2, 1 << (VAR_10 - 32));

 FUNC_0(VAR_8);
 out:
 FUNC_4(&VAR_8->lock, VAR_9);

 return VAR_11;
}
