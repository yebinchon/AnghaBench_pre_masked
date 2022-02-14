
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ipu_soc {int dummy; } ;
struct ipu_plane {int dma; int dp_flow; int base; struct ipu_soc* ipu; } ;
struct drm_device {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,unsigned int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipu_plane* FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,unsigned int,int ,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct drm_device*,int *,unsigned int,int *,int ,int ,int const*,int,int *) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (struct ipu_soc*) ;
 int FUNC_9 (struct ipu_plane*) ;
 struct ipu_plane* FUNC_10 (int,int ) ;
 int * VAR_9 ;

struct ipu_plane *FUNC_11(struct drm_device *VAR_10, struct ipu_soc *VAR_11,
     int VAR_12, int VAR_13, unsigned int VAR_14,
     enum drm_plane_type VAR_15)
{
 struct ipu_plane *VAR_16;
 const uint64_t *VAR_17 = VAR_5;
 unsigned int VAR_18 = (VAR_15 == VAR_0) ? 0 : 1;
 int VAR_19;

 FUNC_1("channel %d, dp flow %d, possible_crtcs=0x%x\n",
        VAR_12, VAR_13, VAR_14);

 VAR_16 = FUNC_10(sizeof(*VAR_16), VAR_2);
 if (!VAR_16) {
  FUNC_2("failed to allocate plane\n");
  return FUNC_3(-VAR_1);
 }

 VAR_16->ipu = VAR_11;
 VAR_16->dma = VAR_12;
 VAR_16->dp_flow = VAR_13;

 if (FUNC_8(VAR_11))
  VAR_17 = VAR_9;

 VAR_19 = FUNC_7(VAR_10, &VAR_16->base, VAR_14,
           &VAR_7, VAR_6,
           FUNC_0(VAR_6),
           VAR_17, VAR_15, ((void*)0));
 if (VAR_19) {
  FUNC_2("failed to initialize plane\n");
  FUNC_9(VAR_16);
  return FUNC_3(VAR_19);
 }

 FUNC_6(&VAR_16->base, &VAR_8);

 if (VAR_13 == VAR_3 || VAR_13 == VAR_4)
  FUNC_5(&VAR_16->base, VAR_18, 0, 1);
 else
  FUNC_4(&VAR_16->base, 0);

 return VAR_16;
}
