
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {int pixel_format; } ;
struct mdp_format {scalar_t__ chroma_sample; TYPE_1__ base; } ;
struct mdp5_smp {int blk_size; } ;
struct mdp5_kms {int cfg; } ;
struct drm_format_info {int num_planes; int hsub; int* cpp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 struct drm_format_info* FUNC_1 (int) ;
 struct mdp5_kms* FUNC_2 (struct mdp5_smp*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

uint32_t FUNC_5(struct mdp5_smp *VAR_2,
  const struct mdp_format *VAR_3,
  u32 VAR_4, bool VAR_5)
{
 const struct drm_format_info *VAR_6 = FUNC_1(VAR_3->base.pixel_format);
 struct mdp5_kms *VAR_7 = FUNC_2(VAR_2);
 int VAR_8 = FUNC_3(VAR_7->cfg);
 int VAR_9, VAR_10, VAR_11, VAR_12;
 u32 VAR_13 = VAR_3->base.pixel_format;
 uint32_t VAR_14 = 0;

 VAR_11 = VAR_6->num_planes;
 VAR_10 = VAR_6->hsub;


 VAR_12 = 2;





 if ((VAR_8 > 0) && (VAR_3->chroma_sample > VAR_0)) {
  VAR_13 = VAR_1;
  VAR_11 = 2;




  if (VAR_5 && (VAR_10 > 1))
   VAR_10 = 1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  int VAR_15, VAR_16, VAR_17;

  VAR_17 = VAR_6->cpp[VAR_9];
  VAR_16 = VAR_4 * VAR_17 / (VAR_9 ? VAR_10 : 1);

  VAR_15 = FUNC_0(VAR_16 * VAR_12, VAR_2->blk_size);


  if (VAR_8 == 0)
   VAR_15 = FUNC_4(VAR_15);

  VAR_14 |= (VAR_15 << (8 * VAR_9));
 }

 return VAR_14;
}
