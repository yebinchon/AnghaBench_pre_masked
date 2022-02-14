
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int phys; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,char) ;

bool FUNC_2(struct hid_device *VAR_0,
         struct hid_device *VAR_1, char VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0->phys, VAR_2) - VAR_0->phys;
 int VAR_4 = FUNC_1(VAR_1->phys, VAR_2) - VAR_1->phys;

 if (VAR_3 != VAR_4 || VAR_3 <= 0 || VAR_4 <= 0)
  return 0;

 return !FUNC_0(VAR_0->phys, VAR_1->phys, VAR_3);
}
