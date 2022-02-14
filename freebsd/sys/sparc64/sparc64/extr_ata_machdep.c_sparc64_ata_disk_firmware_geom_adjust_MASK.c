
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {int d_mediasize; int d_sectorsize; int d_fwsectors; int d_fwheads; } ;
typedef int off_t ;



void
FUNC_0(struct disk *VAR_0)
{
 if (VAR_0->d_mediasize > (off_t)65535 * 16 * 63 * VAR_0->d_sectorsize)
  VAR_0->d_fwsectors = 255;
 if (VAR_0->d_mediasize > (off_t)65535 * 16 * 255 * VAR_0->d_sectorsize)
  VAR_0->d_fwheads = 255;
}
