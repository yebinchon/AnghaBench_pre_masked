
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_20__ {int usMinHTLinkWidth; int ulHTLinkFreq; int ulBootUpUMAClock; int ulBootUpSidePortClock; } ;
struct TYPE_18__ {int ucHTLinkWidth; int usFSBClock; int usK8MemoryClock; int ulBootUpMemoryClock; } ;
union igp_info {TYPE_6__ info_v2; TYPE_4__ info; } ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_23__ {void* full; } ;
struct TYPE_16__ {scalar_t__ full; } ;
struct TYPE_22__ {scalar_t__ full; } ;
struct TYPE_15__ {void* full; } ;
struct TYPE_21__ {TYPE_9__ sideport_bandwidth; TYPE_9__ igp_sideport_mclk; TYPE_2__ max_bandwidth; TYPE_9__ ht_bandwidth; TYPE_8__ igp_ht_link_width; TYPE_9__ igp_ht_link_clk; TYPE_9__ igp_system_mclk; TYPE_1__ k8_bandwidth; } ;
struct TYPE_19__ {int default_mclk; } ;
struct TYPE_17__ {TYPE_13__* atom_context; } ;
struct radeon_device {TYPE_7__ pm; TYPE_5__ clock; TYPE_3__ mode_info; } ;
typedef TYPE_8__ fixed20_12 ;
struct TYPE_14__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_13__*,int,int *,int*,int*,scalar_t__*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (TYPE_9__,TYPE_8__) ;
 void* FUNC_5 (TYPE_9__,TYPE_8__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct radeon_device *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1);
 union igp_info *VAR_4;
 uint16_t VAR_5;
 uint8_t VAR_6, VAR_7;
 fixed20_12 VAR_8;

 if (FUNC_2(VAR_2->mode_info.atom_context, VAR_3, ((void*)0),
       &VAR_6, &VAR_7, &VAR_5)) {
  VAR_4 = (union igp_info *)(VAR_2->mode_info.atom_context->bios + VAR_5);


  switch (VAR_7) {
  case 1:
   VAR_8.full = FUNC_3(100);
   VAR_2->pm.igp_sideport_mclk.full = FUNC_3(FUNC_7(VAR_4->info.ulBootUpMemoryClock));
   VAR_2->pm.igp_sideport_mclk.full = FUNC_4(VAR_2->pm.igp_sideport_mclk, VAR_8);
   if (FUNC_6(VAR_4->info.usK8MemoryClock))
    VAR_2->pm.igp_system_mclk.full = FUNC_3(FUNC_6(VAR_4->info.usK8MemoryClock));
   else if (VAR_2->clock.default_mclk) {
    VAR_2->pm.igp_system_mclk.full = FUNC_3(VAR_2->clock.default_mclk);
    VAR_2->pm.igp_system_mclk.full = FUNC_4(VAR_2->pm.igp_system_mclk, VAR_8);
   } else
    VAR_2->pm.igp_system_mclk.full = FUNC_3(400);
   VAR_2->pm.igp_ht_link_clk.full = FUNC_3(FUNC_6(VAR_4->info.usFSBClock));
   VAR_2->pm.igp_ht_link_width.full = FUNC_3(VAR_4->info.ucHTLinkWidth);
   break;
  case 2:
   VAR_8.full = FUNC_3(100);
   VAR_2->pm.igp_sideport_mclk.full = FUNC_3(FUNC_7(VAR_4->info_v2.ulBootUpSidePortClock));
   VAR_2->pm.igp_sideport_mclk.full = FUNC_4(VAR_2->pm.igp_sideport_mclk, VAR_8);
   if (FUNC_7(VAR_4->info_v2.ulBootUpUMAClock))
    VAR_2->pm.igp_system_mclk.full = FUNC_3(FUNC_7(VAR_4->info_v2.ulBootUpUMAClock));
   else if (VAR_2->clock.default_mclk)
    VAR_2->pm.igp_system_mclk.full = FUNC_3(VAR_2->clock.default_mclk);
   else
    VAR_2->pm.igp_system_mclk.full = FUNC_3(66700);
   VAR_2->pm.igp_system_mclk.full = FUNC_4(VAR_2->pm.igp_system_mclk, VAR_8);
   VAR_2->pm.igp_ht_link_clk.full = FUNC_3(FUNC_7(VAR_4->info_v2.ulHTLinkFreq));
   VAR_2->pm.igp_ht_link_clk.full = FUNC_4(VAR_2->pm.igp_ht_link_clk, VAR_8);
   VAR_2->pm.igp_ht_link_width.full = FUNC_3(FUNC_6(VAR_4->info_v2.usMinHTLinkWidth));
   break;
  default:

   VAR_2->pm.igp_sideport_mclk.full = FUNC_3(200);
   VAR_2->pm.igp_system_mclk.full = FUNC_3(200);
   VAR_2->pm.igp_ht_link_clk.full = FUNC_3(1000);
   VAR_2->pm.igp_ht_link_width.full = FUNC_3(8);
   FUNC_0("No integrated system info for your GPU, using safe default\n");
   break;
  }
 } else {

  VAR_2->pm.igp_sideport_mclk.full = FUNC_3(200);
  VAR_2->pm.igp_system_mclk.full = FUNC_3(200);
  VAR_2->pm.igp_ht_link_clk.full = FUNC_3(1000);
  VAR_2->pm.igp_ht_link_width.full = FUNC_3(8);
  FUNC_0("No integrated system info for your GPU, using safe default\n");
 }


 VAR_8.full = FUNC_3(4);
 VAR_2->pm.k8_bandwidth.full = FUNC_5(VAR_2->pm.igp_system_mclk, VAR_8);



 VAR_8.full = FUNC_3(5);
 VAR_2->pm.ht_bandwidth.full = FUNC_5(VAR_2->pm.igp_ht_link_clk,
      VAR_2->pm.igp_ht_link_width);
 VAR_2->pm.ht_bandwidth.full = FUNC_4(VAR_2->pm.ht_bandwidth, VAR_8);
 if (VAR_8.full < VAR_2->pm.max_bandwidth.full) {

  VAR_2->pm.max_bandwidth.full = VAR_8.full;
 }



 VAR_8.full = FUNC_3(14);
 VAR_2->pm.sideport_bandwidth.full = FUNC_5(VAR_2->pm.igp_sideport_mclk, VAR_8);
 VAR_8.full = FUNC_3(10);
 VAR_2->pm.sideport_bandwidth.full = FUNC_4(VAR_2->pm.sideport_bandwidth, VAR_8);
}
