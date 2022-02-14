
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int params; } ;
struct hidpp_report {TYPE_1__ rap; } ;
struct hidpp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hidpp_device*,int ,int ,size_t,size_t*,int,struct hidpp_report*) ;
 int FUNC_1 (size_t*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct hidpp_device *VAR_3,
 u8 VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct hidpp_report VAR_8;
 int VAR_9;
 u8 VAR_10[3] = { 0 };

 VAR_9 = FUNC_0(VAR_3,
       VAR_2,
       VAR_0,
       VAR_4,
       ((void*)0), 0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_10, VAR_8.rap.params, 3);

 VAR_10[VAR_5] &= ~VAR_6;
 VAR_10[VAR_5] |= VAR_7 & VAR_6;

 return FUNC_0(VAR_3,
        VAR_2,
        VAR_1,
        VAR_4,
        VAR_10, 3, &VAR_8);
}
