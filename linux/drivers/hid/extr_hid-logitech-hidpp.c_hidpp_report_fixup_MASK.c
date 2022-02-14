
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_device {int quirks; } ;
struct hid_device {scalar_t__ group; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hidpp_device* FUNC_0 (struct hid_device*) ;
 int * FUNC_1 (struct hidpp_device*,int *,unsigned int*) ;

__attribute__((used)) static u8 *FUNC_2(struct hid_device *VAR_2, u8 *VAR_3,
         unsigned int *VAR_4)
{
 struct hidpp_device *VAR_5 = FUNC_0(VAR_2);

 if (!VAR_5)
  return VAR_3;


 if (VAR_2->group == VAR_1 ||
     (VAR_5->quirks & VAR_0))
  VAR_3 = FUNC_1(VAR_5, VAR_3, VAR_4);

 return VAR_3;
}
