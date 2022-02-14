
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int family_code; } ;
struct TYPE_3__ {int cmd; } ;
union delcom_packet {TYPE_2__ fw; int data; TYPE_1__ rx; } ;
struct hidled_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hidled_device*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hidled_device *VAR_1)
{
 union delcom_packet VAR_2 = { .rx.cmd = 104 };
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2.data);
 if (VAR_3)
  return VAR_3;




 return FUNC_1(VAR_2.fw.family_code) == 2 ? 0 : -VAR_0;
}
