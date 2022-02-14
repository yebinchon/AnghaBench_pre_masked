
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_data {int quirks; int ff_worker; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ms_data* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_1)
{
 struct ms_data *VAR_2 = FUNC_1(VAR_1);

 if (!(VAR_2->quirks & VAR_0))
  return;

 FUNC_0(&VAR_2->ff_worker);
}
