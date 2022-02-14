
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hostapd_data {int iface; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_data*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct hostapd_data *VAR_1, uint32_t VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!(VAR_2 & (1 << VAR_4)))
   continue;

  VAR_3 |= FUNC_0(VAR_1, VAR_4);
 }

 if (VAR_3)
  FUNC_1(VAR_1->iface);
}
