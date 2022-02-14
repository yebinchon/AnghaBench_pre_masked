
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,struct hid_device*,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(struct hid_device *VAR_3,
         bool VAR_4)
{
 if (VAR_4)
  return 1;

 if (VAR_3->quirks & VAR_0)
  return 0;





 if (FUNC_0(&VAR_2, ((void*)0), VAR_3, VAR_1))
  return 0;

 return 1;
}
