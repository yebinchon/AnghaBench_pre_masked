
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__* params; } ;
struct hidpp_report {TYPE_1__ fap; } ;
struct hidpp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hidpp_device*,int ,int ,int*,int,struct hidpp_report*) ;

__attribute__((used)) static int FUNC_1(struct hidpp_device *VAR_3, u16 VAR_4,
 u8 *VAR_5, u8 *VAR_6)
{
 struct hidpp_report VAR_7;
 int VAR_8;
 u8 VAR_9[2] = { VAR_4 >> 8, VAR_4 & 0x00FF };

 VAR_8 = FUNC_0(VAR_3,
   VAR_2,
   VAR_0,
   VAR_9, 2, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7.fap.params[0] == 0)
  return -VAR_1;

 *VAR_5 = VAR_7.fap.params[0];
 *VAR_6 = VAR_7.fap.params[1];

 return VAR_8;
}
