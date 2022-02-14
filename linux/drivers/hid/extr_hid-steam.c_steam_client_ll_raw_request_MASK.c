
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct steam_device {int hdev; } ;
struct hid_device {struct steam_device* driver_data; } ;


 int FUNC_0 (int ,unsigned char,int *,size_t,unsigned char,int) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_0,
    unsigned char VAR_1, u8 *VAR_2,
    size_t VAR_3, unsigned char VAR_4,
    int VAR_5)
{
 struct steam_device *VAR_6 = VAR_0->driver_data;

 return FUNC_0(VAR_6->hdev, VAR_1, VAR_2, VAR_3,
   VAR_4, VAR_5);
}
