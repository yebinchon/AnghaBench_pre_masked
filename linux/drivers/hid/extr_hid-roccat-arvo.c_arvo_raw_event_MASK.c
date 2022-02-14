
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;
struct arvo_device {scalar_t__ roccat_claimed; } ;


 int FUNC_0 (struct arvo_device*,int *) ;
 struct arvo_device* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_0,
  struct hid_report *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct arvo_device *VAR_4 = FUNC_1(VAR_0);

 if (VAR_3 != 3)
  return 0;

 if (VAR_4 && VAR_4->roccat_claimed)
  FUNC_0(VAR_4, VAR_2);

 return 0;
}
