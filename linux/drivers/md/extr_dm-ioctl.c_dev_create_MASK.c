
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct file {int dummy; } ;
struct dm_ioctl {int flags; scalar_t__* uuid; int name; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mapped_device*,struct dm_ioctl*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct mapped_device**) ;
 int FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (int ,scalar_t__*,struct mapped_device*) ;
 int FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, struct dm_ioctl *VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7 = VAR_0;
 struct mapped_device *VAR_8;

 VAR_6 = FUNC_2(VAR_4->name);
 if (VAR_6)
  return VAR_6;

 if (VAR_4->flags & VAR_2)
  VAR_7 = FUNC_0(FUNC_7(VAR_4->dev));

 VAR_6 = FUNC_3(VAR_7, &VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_4->name, *VAR_4->uuid ? VAR_4->uuid : ((void*)0), VAR_8);
 if (VAR_6) {
  FUNC_6(VAR_8);
  FUNC_4(VAR_8);
  return VAR_6;
 }

 VAR_4->flags &= ~VAR_1;

 FUNC_1(VAR_8, VAR_4);

 FUNC_6(VAR_8);

 return 0;
}
