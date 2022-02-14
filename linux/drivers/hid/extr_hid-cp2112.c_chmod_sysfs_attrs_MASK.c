
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
typedef int u8 ;
struct TYPE_3__ {int kobj; } ;
struct hid_device {TYPE_1__ dev; } ;
struct attribute {int name; } ;
typedef int buf ;
struct TYPE_4__ {struct attribute** attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (struct hid_device*,int ,int*,int,int ) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 int FUNC_2 (int *,struct attribute*,int) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_5)
{
 struct attribute **VAR_6;
 u8 VAR_7[2];
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_0, VAR_7, sizeof(VAR_7),
        VAR_1);
 if (VAR_8 != sizeof(VAR_7)) {
  FUNC_1(VAR_5, "error reading lock byte: %d\n", VAR_8);
  return;
 }

 for (VAR_6 = VAR_4.attrs; *VAR_6; ++VAR_6) {
  umode_t VAR_9 = (VAR_7[1] & 1) ? VAR_3 | VAR_2 : VAR_2;
  VAR_8 = FUNC_2(&VAR_5->dev.kobj, *VAR_6, VAR_9);
  if (VAR_8 < 0)
   FUNC_1(VAR_5, "error chmoding sysfs file %s\n",
    (*VAR_6)->name);
  VAR_7[1] >>= 1;
 }
}
