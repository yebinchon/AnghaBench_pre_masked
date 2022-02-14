
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_ioctl {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mapped_device*,struct dm_ioctl*) ;
 int FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*,unsigned int) ;
 int FUNC_3 (struct mapped_device*) ;
 struct mapped_device* FUNC_4 (struct dm_ioctl*) ;

__attribute__((used)) static int FUNC_5(struct dm_ioctl *VAR_5)
{
 int VAR_6 = 0;
 unsigned VAR_7 = VAR_2;
 struct mapped_device *VAR_8;

 VAR_8 = FUNC_4(VAR_5);
 if (!VAR_8)
  return -VAR_4;

 if (VAR_5->flags & VAR_1)
  VAR_7 &= ~VAR_2;
 if (VAR_5->flags & VAR_0)
  VAR_7 |= VAR_3;

 if (!FUNC_3(VAR_8)) {
  VAR_6 = FUNC_2(VAR_8, VAR_7);
  if (VAR_6)
   goto out;
 }

 FUNC_0(VAR_8, VAR_5);

out:
 FUNC_1(VAR_8);

 return VAR_6;
}
