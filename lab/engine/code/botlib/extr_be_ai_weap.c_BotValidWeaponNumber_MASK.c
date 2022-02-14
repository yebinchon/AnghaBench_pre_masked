
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Print ) (int ,char*) ;} ;
struct TYPE_3__ {int numweapons; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_4 ;

int FUNC_1(int VAR_5)
{
 if (VAR_5 <= 0 || VAR_5 > VAR_4->numweapons)
 {
  VAR_1.Print(VAR_0, "weapon number out of range\n");
  return VAR_2;
 }
 return VAR_3;
}
