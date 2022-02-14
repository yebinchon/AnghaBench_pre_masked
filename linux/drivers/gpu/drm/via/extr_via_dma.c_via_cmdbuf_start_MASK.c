
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int dma_offset; int dma_high; int dma_diff; int* hw_addr_ptr; char volatile* dma_ptr; scalar_t__ agpAddr; scalar_t__ last_pause_ptr; scalar_t__ dma_low; } ;
typedef TYPE_1__ drm_via_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int*,int*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(drm_via_private_t *VAR_8)
{
 uint32_t VAR_9, VAR_10;
 uint32_t VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 VAR_8->dma_low = 0;

 VAR_16 = VAR_8->dma_offset + (uint32_t) VAR_8->agpAddr;
 VAR_11 = VAR_16;
 VAR_13 = VAR_16 + VAR_8->dma_high;

 VAR_12 = ((VAR_4 << 24) | (VAR_11 & 0xFFFFFF));
 VAR_14 = ((VAR_3 << 24) | (VAR_13 & 0xFFFFFF));
 VAR_15 = ((VAR_5 << 24) | (VAR_11 >> 24) |
     ((VAR_13 & 0xff000000) >> 16));

 VAR_8->last_pause_ptr =
     FUNC_0(VAR_8, VAR_0, 0,
     &VAR_10, &VAR_9, 1) - 1;

 FUNC_1();
 (void) *(volatile uint32_t *)VAR_8->last_pause_ptr;

 FUNC_3(VAR_8, VAR_6, (VAR_2 << 16));
 FUNC_3(VAR_8, VAR_7, VAR_15);
 FUNC_3(VAR_8, VAR_7, VAR_12);
 FUNC_3(VAR_8, VAR_7, VAR_14);

 FUNC_3(VAR_8, VAR_7, VAR_10);
 FUNC_3(VAR_8, VAR_7, VAR_9);
 FUNC_4();
 FUNC_3(VAR_8, VAR_7, VAR_15 | VAR_1);
 FUNC_2(VAR_8, VAR_7);

 VAR_8->dma_diff = 0;

 VAR_19 = 10000000;
 while (!(FUNC_2(VAR_8, 0x41c) & 0x80000000) && VAR_19--);

 VAR_18 = *(VAR_8->hw_addr_ptr);
 VAR_17 = ((volatile char *)VAR_8->last_pause_ptr - VAR_8->dma_ptr) +
     VAR_8->dma_offset + (uint32_t) VAR_8->agpAddr + 4;
 VAR_8->dma_diff = VAR_17 - VAR_18;
}
