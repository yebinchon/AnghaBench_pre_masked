
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btusb_data {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct btusb_data*,void*,int) ;
 int FUNC_1 (struct btusb_data*,void*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct btusb_data *VAR_1, void *VAR_2,
     int VAR_3)
{




 if (FUNC_2(VAR_0, &VAR_1->flags))
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
