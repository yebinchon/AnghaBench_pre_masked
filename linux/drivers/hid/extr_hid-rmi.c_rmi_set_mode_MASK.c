
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int txbuf ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int *,char*,int const,int) ;
 int FUNC_1 (struct hid_device*,int const,int const*,int,int ,int ) ;
 int FUNC_2 (int const*) ;
 int const* FUNC_3 (int const*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_5, u8 VAR_6)
{
 int VAR_7;
 const u8 VAR_8[2] = {VAR_4, VAR_6};
 u8 *VAR_9;

 VAR_9 = FUNC_3(VAR_8, sizeof(VAR_8), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, VAR_4, VAR_9,
   sizeof(VAR_8), VAR_2, VAR_3);
 FUNC_2(VAR_9);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_5->dev, "unable to set rmi mode to %d (%d)\n", VAR_6,
   VAR_7);
  return VAR_7;
 }

 return 0;
}
