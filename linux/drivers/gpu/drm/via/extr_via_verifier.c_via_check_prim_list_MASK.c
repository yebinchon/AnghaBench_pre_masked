
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int const* buf_start; scalar_t__ agp; scalar_t__ multitex; TYPE_1__* dev; } ;
typedef TYPE_2__ drm_via_state_t ;
struct TYPE_7__ {scalar_t__ num_fire_offsets; int const** fire_offsets; } ;
typedef TYPE_3__ drm_via_private_t ;
struct TYPE_5__ {scalar_t__ dev_private; } ;


 int FUNC_0 (char*,...) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int const**,int const*,int) ;

__attribute__((used)) static __inline__ int
FUNC_2(uint32_t const **VAR_10, const uint32_t * VAR_11,
      drm_via_state_t *VAR_12)
{
 drm_via_private_t *VAR_13 =
     (drm_via_private_t *) VAR_12->dev->dev_private;
 uint32_t VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0;
 int VAR_18;
 const uint32_t *VAR_19 = *VAR_10;

 while (VAR_19 < VAR_11) {
  VAR_18 = 0;
  if ((VAR_11 - VAR_19) < 2) {
   FUNC_0
       ("Unexpected termination of primitive list.\n");
   VAR_17 = 1;
   break;
  }
  if ((*VAR_19 & VAR_5) != VAR_4)
   break;
  VAR_15 = *VAR_19++;
  if ((*VAR_19 & VAR_5) != VAR_3) {
   FUNC_0("Expected Vertex List A command, got 0x%x\n",
      *VAR_19);
   VAR_17 = 1;
   break;
  }
  VAR_14 =
      *VAR_19++ | VAR_7 | VAR_8 |
      VAR_6;





  if (VAR_12->agp && ((VAR_15 & (0xF << 11)) == 0)) {
   FUNC_0("Illegal B command vertex data for AGP.\n");
   VAR_17 = 1;
   break;
  }

  VAR_16 = 0;
  if (VAR_15 & (1 << 7))
   VAR_16 += (VAR_12->multitex) ? 2 : 1;
  if (VAR_15 & (1 << 8))
   VAR_16 += (VAR_12->multitex) ? 2 : 1;
  if (VAR_15 & (1 << 9))
   VAR_16++;
  if (VAR_15 & (1 << 10))
   VAR_16++;
  if (VAR_15 & (1 << 11))
   VAR_16++;
  if (VAR_15 & (1 << 12))
   VAR_16++;
  if (VAR_15 & (1 << 13))
   VAR_16++;
  if (VAR_15 & (1 << 14))
   VAR_16++;

  while (VAR_19 < VAR_11) {
   if (*VAR_19 == VAR_14) {
    if (VAR_13->num_fire_offsets >=
        VAR_9) {
     FUNC_0("Fire offset buffer full.\n");
     VAR_17 = 1;
     break;
    }
    VAR_13->fire_offsets[VAR_13->
             num_fire_offsets++] =
        VAR_19;
    VAR_18 = 1;
    VAR_19++;
    if (VAR_19 < VAR_11 && *VAR_19 == VAR_14)
     VAR_19++;
    break;
   }
   if ((*VAR_19 == VAR_2) ||
       ((*VAR_19 & VAR_1) == VAR_0)) {
    FUNC_0("Missing Vertex Fire command, "
       "Stray Vertex Fire command  or verifier "
       "lost sync.\n");
    VAR_17 = 1;
    break;
   }
   if ((VAR_17 = FUNC_1(&VAR_19, VAR_11, VAR_16)))
    break;
  }
  if (VAR_19 >= VAR_11 && !VAR_18) {
   FUNC_0("Missing Vertex Fire command or verifier "
      "lost sync.\n");
   VAR_17 = 1;
   break;
  }
  if (VAR_12->agp && ((VAR_19 - VAR_12->buf_start) & 0x01)) {
   FUNC_0("AGP Primitive list end misaligned.\n");
   VAR_17 = 1;
   break;
  }
 }
 *VAR_10 = VAR_19;
 return VAR_17;
}
