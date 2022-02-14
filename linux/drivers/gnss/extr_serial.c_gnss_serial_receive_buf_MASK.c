
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dummy; } ;
struct gnss_serial {struct gnss_device* gdev; } ;
struct gnss_device {int dummy; } ;


 int FUNC_0 (struct gnss_device*,unsigned char const*,size_t) ;
 struct gnss_serial* FUNC_1 (struct serdev_device*) ;

__attribute__((used)) static int FUNC_2(struct serdev_device *VAR_0,
     const unsigned char *VAR_1, size_t VAR_2)
{
 struct gnss_serial *VAR_3 = FUNC_1(VAR_0);
 struct gnss_device *VAR_4 = VAR_3->gdev;

 return FUNC_0(VAR_4, VAR_1, VAR_2);
}
