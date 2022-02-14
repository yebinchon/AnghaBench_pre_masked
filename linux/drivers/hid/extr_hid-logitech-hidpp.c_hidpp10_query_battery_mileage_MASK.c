
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * params; } ;
struct hidpp_report {TYPE_1__ rap; } ;
struct TYPE_4__ {int status; int online; int capacity; } ;
struct hidpp_device {TYPE_2__ battery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hidpp_device*,int ,int ,int ,int *,int ,struct hidpp_report*) ;

__attribute__((used)) static int FUNC_2(struct hidpp_device *VAR_5)
{
 struct hidpp_report VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_5,
     VAR_4,
     VAR_0,
     VAR_1,
     ((void*)0), 0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_5->battery.capacity = VAR_6.rap.params[0];
 VAR_8 = FUNC_0(VAR_6.rap.params[2]);
 VAR_5->battery.status = VAR_8;

 VAR_5->battery.online = VAR_8 == VAR_2 ||
    VAR_8 == VAR_3;

 return 0;
}
