
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dramtype; scalar_t__ eccen; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{
 if (VAR_1[VAR_2].dramtype != 0) {
  FUNC_0(VAR_0, "Unsupported DIMM in channel %d\n", VAR_2);
  return 1;
 } else if (VAR_1[VAR_2].eccen == 0) {
  FUNC_0(VAR_0, "ECC disabled on channel %d\n", VAR_2);
  return 1;
 }
 return 0;
}
