
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dmar_unit {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ devclass_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct dmar_unit* FUNC_2 (int ,int ) ;
 struct dmar_unit* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static struct dmar_unit *
FUNC_5(device_t VAR_3, uint16_t *VAR_4, int *VAR_5)
{
 devclass_t VAR_6;
 struct dmar_unit *VAR_7;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_0;
 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 == FUNC_0("dmar")) {
  VAR_7 = ((void*)0);
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_1;
 } else if (VAR_6 == FUNC_0("hpet")) {
  VAR_7 = FUNC_3(VAR_3, VAR_4);
 } else {
  VAR_7 = FUNC_2(VAR_3, VAR_2);
  if (VAR_7 != ((void*)0) && VAR_4 != ((void*)0))
   FUNC_4(VAR_3, VAR_4);
 }
 return (VAR_7);
}
