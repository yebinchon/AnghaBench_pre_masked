
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edd_info {int interface_support; } ;
struct edd_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct edd_info* FUNC_0 (struct edd_device*) ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct edd_device *VAR_6, char *VAR_7)
{
 struct edd_info *VAR_8;
 char *VAR_9 = VAR_7;
 if (!VAR_6)
  return -VAR_4;
 VAR_8 = FUNC_0(VAR_6);
 if (!VAR_8 || !VAR_7)
  return -VAR_4;

 if (VAR_8->interface_support & VAR_3) {
  VAR_9 += FUNC_1(VAR_9, VAR_5, "Fixed disk access\n");
 }
 if (VAR_8->interface_support & VAR_1) {
  VAR_9 += FUNC_1(VAR_9, VAR_5, "Device locking and ejecting\n");
 }
 if (VAR_8->interface_support & VAR_2) {
  VAR_9 += FUNC_1(VAR_9, VAR_5, "Enhanced Disk Drive support\n");
 }
 if (VAR_8->interface_support & VAR_0) {
  VAR_9 += FUNC_1(VAR_9, VAR_5, "64-bit extensions\n");
 }
 return (VAR_9 - VAR_7);
}
