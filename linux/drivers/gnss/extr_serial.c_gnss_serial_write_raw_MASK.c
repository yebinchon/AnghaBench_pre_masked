
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dummy; } ;
struct gnss_serial {struct serdev_device* serdev; } ;
struct gnss_device {int dummy; } ;


 int VAR_0 ;
 struct gnss_serial* FUNC_0 (struct gnss_device*) ;
 int FUNC_1 (struct serdev_device*,int ) ;
 int FUNC_2 (struct serdev_device*,unsigned char const*,size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct gnss_device *VAR_1,
  const unsigned char *VAR_2, size_t VAR_3)
{
 struct gnss_serial *VAR_4 = FUNC_0(VAR_1);
 struct serdev_device *VAR_5 = VAR_4->serdev;
 int VAR_6;


 VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3, VAR_0);
 if (VAR_6 < 0 || VAR_6 < VAR_3)
  return VAR_6;


 FUNC_1(VAR_5, 0);

 return VAR_3;
}
