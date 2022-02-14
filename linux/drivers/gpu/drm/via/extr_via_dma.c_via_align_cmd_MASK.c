
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int dma_offset; int dma_low; scalar_t__ agpAddr; } ;
typedef TYPE_1__ drm_via_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int* FUNC_1 (TYPE_1__*,int*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static uint32_t *FUNC_4(drm_via_private_t *VAR_10, uint32_t VAR_11,
          uint32_t VAR_12, uint32_t *VAR_13,
          uint32_t *VAR_14, int VAR_15)
{
 uint32_t VAR_16;
 uint32_t VAR_17, VAR_18, VAR_19;
 uint32_t *VAR_20;
 uint32_t VAR_21;

 if (!VAR_15)
  FUNC_2(VAR_10, 2 * VAR_1);

 VAR_20 = FUNC_3(VAR_10);
 FUNC_0(VAR_4 | ((VAR_8 >> 2) << 12) |
   (VAR_9 >> 2), VAR_5 << 16);
 VAR_16 = VAR_10->dma_offset + (uint32_t) VAR_10->agpAddr;
 VAR_21 = (VAR_1 >> 3) -
     ((VAR_10->dma_low & VAR_0) >> 3);

 VAR_17 = (VAR_12) ? VAR_12 :
     VAR_16 + VAR_10->dma_low - 8 + (VAR_21 << 3);
 VAR_18 = ((VAR_7 << 24) | (VAR_11 & VAR_2) |
     (VAR_17 & VAR_3));
 VAR_19 = ((VAR_6 << 24) | (VAR_17 >> 24));

 VAR_20 = FUNC_1(VAR_10, VAR_20, VAR_21 - 1);
 FUNC_0(*VAR_13 = VAR_19, *VAR_14 = VAR_18);
 return VAR_20;
}
