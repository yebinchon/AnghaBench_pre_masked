
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_geometry {scalar_t__ heads; scalar_t__ sectors; scalar_t__ start; scalar_t__ cylinders; } ;
struct mapped_device {struct hd_geometry geometry; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

int FUNC_1(struct mapped_device *VAR_1, struct hd_geometry *VAR_2)
{
 sector_t VAR_3 = (sector_t)VAR_2->cylinders * VAR_2->heads * VAR_2->sectors;

 if (VAR_2->start > VAR_3) {
  FUNC_0("Start sector is beyond the geometry limits.");
  return -VAR_0;
 }

 VAR_1->geometry = *VAR_2;

 return 0;
}
