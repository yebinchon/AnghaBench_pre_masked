
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ feature_index; scalar_t__ funcindex_clientid; int params; } ;
struct hidpp_report {TYPE_1__ fap; } ;
struct TYPE_4__ {scalar_t__ feature_index; int online; int capacity; int level; int status; scalar_t__ ps; } ;
struct hidpp_device {TYPE_2__ battery; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int*,int*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hidpp_device *VAR_3,
     u8 *VAR_4, int VAR_5)
{
 struct hidpp_report *VAR_6 = (struct hidpp_report *)VAR_4;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 bool VAR_11;

 if (VAR_6->fap.feature_index != VAR_3->battery.feature_index ||
     VAR_6->fap.funcindex_clientid != VAR_0)
  return 0;

 VAR_7 = FUNC_0(VAR_6->fap.params,
         &VAR_8,
         &VAR_9,
         &VAR_10);


 VAR_3->battery.online = VAR_7 == VAR_1 ||
    VAR_7 == VAR_2;

 VAR_11 = VAR_8 != VAR_3->battery.capacity ||
    VAR_10 != VAR_3->battery.level ||
    VAR_7 != VAR_3->battery.status;

 if (VAR_11) {
  VAR_3->battery.level = VAR_10;
  VAR_3->battery.capacity = VAR_8;
  VAR_3->battery.status = VAR_7;
  if (VAR_3->battery.ps)
   FUNC_1(VAR_3->battery.ps);
 }

 return 0;
}
