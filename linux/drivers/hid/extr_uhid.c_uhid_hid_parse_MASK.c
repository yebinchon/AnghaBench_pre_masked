
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_device {int rd_size; int rd_data; } ;
struct hid_device {struct uhid_device* driver_data; } ;


 int FUNC_0 (struct hid_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_0)
{
 struct uhid_device *VAR_1 = VAR_0->driver_data;

 return FUNC_0(VAR_0, VAR_1->rd_data, VAR_1->rd_size);
}
