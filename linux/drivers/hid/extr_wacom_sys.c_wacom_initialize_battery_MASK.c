
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int quirks; } ;
struct TYPE_4__ {TYPE_1__ features; } ;
struct wacom {int battery; TYPE_2__ wacom_wac; } ;


 int VAR_0 ;
 int FUNC_0 (struct wacom*,int *) ;

__attribute__((used)) static int FUNC_1(struct wacom *VAR_1)
{
 if (VAR_1->wacom_wac.features.quirks & VAR_0)
  return FUNC_0(VAR_1, &VAR_1->battery);

 return 0;
}
