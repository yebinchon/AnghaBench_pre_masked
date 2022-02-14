
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gb_host_device {int dummy; } ;
struct es2_ap_dev {int dummy; } ;


 struct es2_ap_dev* FUNC_0 (struct gb_host_device*) ;
 int FUNC_1 (struct es2_ap_dev*,void*,int ,int ) ;
 int FUNC_2 (struct es2_ap_dev*,void*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gb_host_device *VAR_0, void *VAR_1, u16 VAR_2, u8 VAR_3,
    bool VAR_4)
{
 struct es2_ap_dev *VAR_5 = FUNC_0(VAR_0);

 if (VAR_4)
  return FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3);

 return FUNC_2(VAR_5, VAR_1, VAR_2, VAR_3);
}
