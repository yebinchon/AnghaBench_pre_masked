
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ psmode; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct btmrvl_private*,int ,int *,int) ;

int FUNC_2(struct btmrvl_private *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 if (VAR_3->btmrvl_dev.psmode)
  VAR_5 = VAR_2;
 else
  VAR_5 = VAR_1;

 VAR_4 = FUNC_1(VAR_3, VAR_0, &VAR_5, 1);
 if (VAR_4)
  FUNC_0("PSMODE command failed");

 return 0;
}
