
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ edid_size; } ;
struct vfio_edid_region {char* edid_blob; TYPE_1__ vfio_edid_regs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_1(struct vfio_edid_region *VAR_1, char *VAR_2,
   size_t VAR_3, u16 VAR_4, bool VAR_5)
{
 if (VAR_4 + VAR_3 > VAR_1->vfio_edid_regs.edid_size)
  return -VAR_0;

 if (VAR_5)
  FUNC_0(VAR_1->edid_blob + VAR_4, VAR_2, VAR_3);
 else
  FUNC_0(VAR_2, VAR_1->edid_blob + VAR_4, VAR_3);

 return VAR_3;
}
