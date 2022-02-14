
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vhd_geom {int cylinders; int heads; int sectors; } ;
typedef int lba_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(uint64_t VAR_4, struct vhd_geom *VAR_5)
{
 lba_t VAR_6;
 long VAR_7;

 VAR_6 = VAR_4 / VAR_0;


 if (VAR_2 > 1 && VAR_2 < 256 &&
     VAR_3 > 1 && VAR_3 < 256 &&
     VAR_1 < 65536) {
  VAR_5->cylinders = (VAR_1 != 0) ? VAR_1 :
      VAR_6 / (VAR_2 * VAR_3);
  VAR_5->heads = VAR_2;
  VAR_5->sectors = VAR_3;
  return;
 }

 if (VAR_6 > 65536 * 16 * 255)
  VAR_6 = 65536 * 16 * 255;
 if (VAR_6 >= 65535 * 16 * 63) {
  VAR_5->cylinders = VAR_6 / (16 * 255);
  VAR_5->heads = 16;
  VAR_5->sectors = 255;
  return;
 }
 VAR_5->sectors = 17;
 VAR_7 = VAR_6 / 17;
 VAR_5->heads = (VAR_7 + 1023) / 1024;
 if (VAR_5->heads < 4)
  VAR_5->heads = 4;
 if (VAR_7 >= (VAR_5->heads * 1024) || VAR_5->heads > 16) {
  VAR_5->heads = 16;
  VAR_5->sectors = 31;
  VAR_7 = VAR_6 / 31;
 }
 if (VAR_7 >= (VAR_5->heads * 1024)) {
  VAR_5->heads = 16;
  VAR_5->sectors = 63;
  VAR_7 = VAR_6 / 63;
 }
 VAR_5->cylinders = VAR_7 / VAR_5->heads;
}
