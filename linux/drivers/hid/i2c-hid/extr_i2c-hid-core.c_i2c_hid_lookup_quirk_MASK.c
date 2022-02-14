
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {scalar_t__ const idVendor; scalar_t__ idProduct; int quirks; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(const u16 VAR_2, const u16 VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_1[VAR_5].idVendor; VAR_5++)
  if (VAR_1[VAR_5].idVendor == VAR_2 &&
      (VAR_1[VAR_5].idProduct == (__u16)VAR_0 ||
       VAR_1[VAR_5].idProduct == VAR_3))
   VAR_4 = VAR_1[VAR_5].quirks;

 return VAR_4;
}
