
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* ptr; } ;
struct radeon_cs_parser {scalar_t__ idx; int filp; TYPE_2__* rdev; TYPE_1__ ib; } ;
struct radeon_cs_packet {scalar_t__ reg; scalar_t__ count; int idx; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_crtc {int enabled; } ;
struct TYPE_4__ {int ddev; } ;



 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;

 int volatile VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct drm_crtc* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct radeon_cs_parser*,struct radeon_cs_packet*,scalar_t__) ;
 int FUNC_5 (struct radeon_cs_parser*,int) ;
 struct radeon_crtc* FUNC_6 (struct drm_crtc*) ;

int FUNC_7(struct radeon_cs_parser *VAR_8)
{
 struct drm_crtc *VAR_9;
 struct radeon_crtc *VAR_10;
 struct radeon_cs_packet VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17;
 volatile uint32_t *VAR_18;

 VAR_18 = VAR_8->ib.ptr;


 VAR_14 = FUNC_4(VAR_8, &VAR_12, VAR_8->idx);
 if (VAR_14)
  return VAR_14;


 if (VAR_12.reg != VAR_7 ||
     VAR_12.count != 0) {
  FUNC_0("vline wait had illegal wait until segment\n");
  return -VAR_1;
 }

 if (FUNC_5(VAR_8, VAR_12.idx + 1) != VAR_6) {
  FUNC_0("vline wait had illegal wait until\n");
  return -VAR_1;
 }


 VAR_14 = FUNC_4(VAR_8, &VAR_11, VAR_8->idx + VAR_12.count + 2);
 if (VAR_14)
  return VAR_14;

 VAR_16 = VAR_8->idx - 2;
 VAR_8->idx += VAR_12.count + 2;
 VAR_8->idx += VAR_11.count + 2;

 VAR_15 = FUNC_5(VAR_8, VAR_16);
 VAR_13 = FUNC_5(VAR_8, VAR_16 + 5);
 VAR_17 = FUNC_2(VAR_15);
 VAR_9 = FUNC_3(VAR_8->rdev->ddev, VAR_8->filp, VAR_13);
 if (!VAR_9) {
  FUNC_0("cannot find crtc %d\n", VAR_13);
  return -VAR_2;
 }
 VAR_10 = FUNC_6(VAR_9);
 VAR_13 = VAR_10->crtc_id;

 if (!VAR_9->enabled) {

  VAR_18[VAR_16 + 2] = FUNC_1(0);
  VAR_18[VAR_16 + 3] = FUNC_1(0);
 } else if (VAR_13 == 1) {
  switch (VAR_17) {
  case 129:
   VAR_15 &= ~VAR_3;
   VAR_15 |= VAR_0 >> 2;
   break;
  case 128:
   VAR_15 &= ~VAR_3;
   VAR_15 |= VAR_4 >> 2;
   break;
  default:
   FUNC_0("unknown crtc reloc\n");
   return -VAR_1;
  }
  VAR_18[VAR_16] = VAR_15;
  VAR_18[VAR_16 + 3] |= VAR_5;
 }

 return 0;
}
