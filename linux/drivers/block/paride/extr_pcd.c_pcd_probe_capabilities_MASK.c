
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; } ;
struct pcd_unit {TYPE_1__ info; int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pcd_unit* VAR_7 ;
 int FUNC_0 (struct pcd_unit*,char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_8, VAR_9;
 char VAR_10[32];
 char VAR_11[12] = { 0x5a, 1 << 3, 0x2a, 0, 0, 0, 0, 18, 0, 0, 0, 0 };
 struct pcd_unit *VAR_12;

 for (VAR_8 = 0, VAR_12 = VAR_7; VAR_8 < VAR_6; VAR_8++, VAR_12++) {
  if (!VAR_12->present)
   continue;
  VAR_9 = FUNC_0(VAR_12, VAR_11, 18, VAR_10, "mode sense capabilities");
  if (VAR_9)
   continue;

  if ((VAR_10[11] & 1) == 0)
   VAR_12->info.mask |= VAR_0;
  if ((VAR_10[11] & 2) == 0)
   VAR_12->info.mask |= VAR_1;
  if ((VAR_10[12] & 1) == 0)
   VAR_12->info.mask |= VAR_5;
  if ((VAR_10[14] & 1) == 0)
   VAR_12->info.mask |= VAR_3;
  if ((VAR_10[14] & 8) == 0)
   VAR_12->info.mask |= VAR_4;
  if ((VAR_10[14] >> 6) == 0)
   VAR_12->info.mask |= VAR_2;
 }
}
