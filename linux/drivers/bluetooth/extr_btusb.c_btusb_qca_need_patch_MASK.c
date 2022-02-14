
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver ;
struct usb_device {int dummy; } ;
struct qca_version {int rom_version; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_device*,int ,struct qca_version*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct usb_device *VAR_1)
{
 struct qca_version VAR_2;

 if (FUNC_0(VAR_1, VAR_0, &VAR_2,
          sizeof(VAR_2)) < 0)
  return 0;

 return !(FUNC_1(VAR_2.rom_version) & ~0xffffU);
}
