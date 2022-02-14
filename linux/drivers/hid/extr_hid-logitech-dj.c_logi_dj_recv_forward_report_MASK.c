
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dj_device {int hdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int,int) ;

__attribute__((used)) static void FUNC_2(struct dj_device *VAR_1, u8 *VAR_2,
     int VAR_3)
{

 if (FUNC_1(VAR_1->hdev, VAR_0, VAR_2, VAR_3, 1))
  FUNC_0("hid_input_report error\n");
}
