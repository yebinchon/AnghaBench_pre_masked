
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int feature_index; int status; int capacity; int level; int online; } ;
struct hidpp_device {TYPE_1__ battery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hidpp_device*,int,int*,int*,int*,int*) ;
 int FUNC_1 (struct hidpp_device*,int) ;
 int FUNC_2 (struct hidpp_device*,int ,int*,int *) ;

__attribute__((used)) static int FUNC_3(struct hidpp_device *VAR_3)
{
 u8 VAR_4;
 int VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_3->battery.feature_index == 0xff) {
  VAR_5 = FUNC_2(VAR_3,
          VAR_0,
          &VAR_3->battery.feature_index,
          &VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_3,
      VAR_3->battery.feature_index,
      &VAR_6, &VAR_7,
      &VAR_8, &VAR_9);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3,
      VAR_3->battery.feature_index);
 if (VAR_5)
  return VAR_5;

 VAR_3->battery.status = VAR_6;
 VAR_3->battery.capacity = VAR_7;
 VAR_3->battery.level = VAR_9;

 VAR_3->battery.online = VAR_6 == VAR_1 ||
    VAR_6 == VAR_2;

 return 0;
}
