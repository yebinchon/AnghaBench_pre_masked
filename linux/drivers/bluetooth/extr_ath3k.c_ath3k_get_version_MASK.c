
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct ath3k_version {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath3k_version*) ;
 struct ath3k_version* FUNC_1 (int const,int ) ;
 int FUNC_2 (struct ath3k_version*,struct ath3k_version*,int const) ;
 int FUNC_3 (struct usb_device*,int,int ,int,int ,int ,struct ath3k_version*,int const,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_6,
   struct ath3k_version *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 struct ath3k_version *VAR_10;
 const int VAR_11 = sizeof(*VAR_10);

 VAR_10 = FUNC_1(VAR_11, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_6, 0);
 VAR_8 = FUNC_3(VAR_6, VAR_9, VAR_0,
         VAR_5 | VAR_4, 0, 0,
         VAR_10, VAR_11, VAR_3);

 FUNC_2(VAR_7, VAR_10, VAR_11);
 FUNC_0(VAR_10);

 return VAR_8;
}
