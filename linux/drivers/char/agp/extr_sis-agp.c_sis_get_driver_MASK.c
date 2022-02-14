
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct agp_bridge_data {TYPE_1__* dev; } ;
struct TYPE_6__ {int major_version; int minor_version; } ;
struct TYPE_5__ {int tlb_flush; int cleanup; int fetch_size; int configure; int num_aperture_sizes; int size_type; int aperture_sizes; int agp_enable; } ;
struct TYPE_4__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;

__attribute__((used)) static void FUNC_0(struct agp_bridge_data *VAR_13)
{
 int VAR_14;

 for (VAR_14=0; VAR_10[VAR_14]!=0; ++VAR_14)
  if (VAR_13->dev->device==VAR_10[VAR_14])
   break;

 if (VAR_10[VAR_14] || VAR_9)
  VAR_12.agp_enable=VAR_11;



 if ((VAR_7->major_version == 3 && VAR_7->minor_version >= 5
      && VAR_8!=0) || VAR_8==1) {
  VAR_12.aperture_sizes = VAR_5;
  VAR_12.size_type = VAR_1;
  VAR_12.num_aperture_sizes = VAR_0;
  VAR_12.configure = VAR_3;
  VAR_12.fetch_size = VAR_4;
  VAR_12.cleanup = VAR_2;
  VAR_12.tlb_flush = VAR_6;
 }
}
