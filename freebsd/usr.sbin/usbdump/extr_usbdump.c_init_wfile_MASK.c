
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uf ;
struct usbcap_filehdr {int minor; scalar_t__ major; int magic; } ;
struct usbcap {scalar_t__ wfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usbcap_filehdr*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__,void const*,int) ;

__attribute__((used)) static void
FUNC_5(struct usbcap *VAR_8)
{
 struct usbcap_filehdr VAR_9;
 int VAR_10;

 VAR_8->wfd = FUNC_3(VAR_7, VAR_1 | VAR_2 | VAR_3, VAR_4 | VAR_5);
 if (VAR_8->wfd < 0) {
  FUNC_0(VAR_0, "Could not open "
      "'%s' for write", VAR_7);
 }
 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.magic = FUNC_1(VAR_6);
 VAR_9.major = 0;
 VAR_9.minor = 3;
 VAR_10 = FUNC_4(VAR_8->wfd, (const void *)&VAR_9, sizeof(VAR_9));
 if (VAR_10 != sizeof(VAR_9)) {
  FUNC_0(VAR_0, "Could not write "
      "USB capture header");
 }
}
