
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpp_device {int very_long_report_length; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hidpp_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 int FUNC_2 (struct hid_device*,int) ;

__attribute__((used)) static bool FUNC_3(struct hid_device *VAR_6)
{
 struct hidpp_device *VAR_7 = FUNC_0(VAR_6);
 int VAR_8, VAR_9, VAR_10 = 0;

 VAR_8 = VAR_4;
 VAR_9 = FUNC_2(VAR_6, VAR_8);
 if (VAR_9) {
  if (VAR_9 < VAR_1)
   goto bad_device;

  VAR_10++;
 }

 VAR_8 = VAR_3;
 VAR_9 = FUNC_2(VAR_6, VAR_8);
 if (VAR_9) {
  if (VAR_9 < VAR_0)
   goto bad_device;

  VAR_10++;
 }

 VAR_8 = VAR_5;
 VAR_9 = FUNC_2(VAR_6, VAR_8);
 if (VAR_9) {
  if (VAR_9 < VAR_0 ||
      VAR_9 > VAR_2)
   goto bad_device;

  VAR_10++;
  VAR_7->very_long_report_length = VAR_9;
 }

 return VAR_10;

bad_device:
 FUNC_1(VAR_6, "not enough values in hidpp report %d\n", VAR_8);
 return 0;
}
