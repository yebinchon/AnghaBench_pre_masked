
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vhd_geom {int heads; int sectors; scalar_t__ cylinders; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct vhd_geom*) ;

__attribute__((used)) static uint64_t
FUNC_1(uint64_t VAR_1)
{
 struct vhd_geom VAR_2;
 uint64_t VAR_3;
 VAR_3 = VAR_1;
 while (1) {
  FUNC_0(VAR_3, &VAR_2);
  VAR_3 = (int64_t)VAR_2.cylinders * VAR_2.heads *
      VAR_2.sectors * VAR_0;
  if (VAR_3 >= VAR_1)
   break;
  VAR_3 += VAR_2.heads * VAR_2.sectors * VAR_0;
 }
 return (VAR_3);
}
