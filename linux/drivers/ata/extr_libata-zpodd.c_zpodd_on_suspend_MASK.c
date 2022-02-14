
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpodd {int zp_sampled; int zp_ready; unsigned long last_ready; } ;
struct ata_device {struct zpodd* zpodd; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 int VAR_1 ;
 int FUNC_2 (struct ata_device*) ;

void FUNC_3(struct ata_device *VAR_2)
{
 struct zpodd *VAR_3 = VAR_2->zpodd;
 unsigned long VAR_4;

 if (!FUNC_2(VAR_2)) {
  VAR_3->zp_sampled = 0;
  VAR_3->zp_ready = 0;
  return;
 }

 if (!VAR_3->zp_sampled) {
  VAR_3->zp_sampled = 1;
  VAR_3->last_ready = VAR_0;
  return;
 }

 VAR_4 = VAR_3->last_ready +
    FUNC_0(VAR_1 * 1000);
 if (FUNC_1(VAR_0, VAR_4))
  return;

 VAR_3->zp_ready = 1;
}
