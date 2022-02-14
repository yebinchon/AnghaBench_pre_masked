
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* ptr; } ;
struct radeon_cs_parser {int idx; int filp; TYPE_2__* rdev; TYPE_1__ ib; } ;
struct radeon_cs_packet {scalar_t__ type; scalar_t__ opcode; int idx; int count; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_crtc {int enabled; } ;
struct TYPE_4__ {int ddev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct drm_crtc* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct radeon_cs_parser*,struct radeon_cs_packet*,int) ;
 int FUNC_5 (struct radeon_cs_parser*,int) ;
 struct radeon_crtc* FUNC_6 (struct drm_crtc*) ;

int FUNC_7(struct radeon_cs_parser *VAR_6,
          uint32_t *VAR_7,
          uint32_t *VAR_8)
{
 struct drm_crtc *VAR_9;
 struct radeon_crtc *VAR_10;
 struct radeon_cs_packet VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17, VAR_18;
 volatile uint32_t *VAR_19;

 VAR_19 = VAR_6->ib.ptr;


 VAR_14 = FUNC_4(VAR_6, &VAR_12, VAR_6->idx);
 if (VAR_14)
  return VAR_14;


 if (VAR_12.type != VAR_4 ||
     VAR_12.opcode != VAR_2) {
  FUNC_0("vline wait missing WAIT_REG_MEM segment\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_5(VAR_6, VAR_12.idx + 1);

 if (VAR_18 & 0x10) {
  FUNC_0("vline WAIT_REG_MEM waiting on MEM instead of REG\n");
  return -VAR_0;
 }

 if (VAR_18 & 0x100) {
  FUNC_0("vline WAIT_REG_MEM waiting on PFP instead of ME\n");
  return -VAR_0;
 }

 if ((VAR_18 & 0x7) != 0x3) {
  FUNC_0("vline WAIT_REG_MEM function not equal\n");
  return -VAR_0;
 }
 if ((FUNC_5(VAR_6, VAR_12.idx + 2) << 2) != VAR_8[0]) {
  FUNC_0("vline WAIT_REG_MEM bad reg\n");
  return -VAR_0;
 }

 if (FUNC_5(VAR_6, VAR_12.idx + 5) != VAR_5) {
  FUNC_0("vline WAIT_REG_MEM bad bit mask\n");
  return -VAR_0;
 }


 VAR_14 = FUNC_4(VAR_6, &VAR_11, VAR_6->idx + VAR_12.count + 2);
 if (VAR_14)
  return VAR_14;

 VAR_16 = VAR_6->idx - 2;
 VAR_6->idx += VAR_12.count + 2;
 VAR_6->idx += VAR_11.count + 2;

 VAR_15 = FUNC_5(VAR_6, VAR_16);
 VAR_13 = FUNC_5(VAR_6, VAR_16 + 2 + 7 + 1);
 VAR_17 = FUNC_2(VAR_15);

 VAR_9 = FUNC_3(VAR_6->rdev->ddev, VAR_6->filp, VAR_13);
 if (!VAR_9) {
  FUNC_0("cannot find crtc %d\n", VAR_13);
  return -VAR_1;
 }
 VAR_10 = FUNC_6(VAR_9);
 VAR_13 = VAR_10->crtc_id;

 if (!VAR_9->enabled) {

  VAR_19[VAR_16 + 2] = FUNC_1(0);
  VAR_19[VAR_16 + 3] = FUNC_1(0);
  VAR_19[VAR_16 + 4] = FUNC_1(0);
  VAR_19[VAR_16 + 5] = FUNC_1(0);
  VAR_19[VAR_16 + 6] = FUNC_1(0);
  VAR_19[VAR_16 + 7] = FUNC_1(0);
  VAR_19[VAR_16 + 8] = FUNC_1(0);
 } else if (VAR_17 == VAR_7[0]) {
  VAR_15 &= ~VAR_3;
  VAR_15 |= VAR_7[VAR_13] >> 2;
  VAR_19[VAR_16] = VAR_15;
  VAR_19[VAR_16 + 4] = VAR_8[VAR_13] >> 2;
 } else {
  FUNC_0("unknown crtc reloc\n");
  return -VAR_0;
 }
 return 0;
}
