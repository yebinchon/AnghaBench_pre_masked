
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gendisk {struct ace_device* private_data; } ;
struct ace_device {scalar_t__ users; int lock; int dev; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ace_device*,int ) ;
 int FUNC_1 (struct ace_device*,int ,int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct gendisk *VAR_3, fmode_t VAR_4)
{
 struct ace_device *VAR_5 = VAR_3->private_data;
 unsigned long VAR_6;
 u16 VAR_7;

 FUNC_2(VAR_5->dev, "ace_release() users=%i\n", VAR_5->users - 1);

 FUNC_3(&VAR_2);
 FUNC_5(&VAR_5->lock, VAR_6);
 VAR_5->users--;
 if (VAR_5->users == 0) {
  VAR_7 = FUNC_0(VAR_5, VAR_0);
  FUNC_1(VAR_5, VAR_0, VAR_7 & ~VAR_1);
 }
 FUNC_6(&VAR_5->lock, VAR_6);
 FUNC_4(&VAR_2);
}
