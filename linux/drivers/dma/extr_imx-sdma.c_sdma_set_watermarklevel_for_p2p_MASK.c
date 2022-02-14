
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {scalar_t__ spba_start_addr; scalar_t__ spba_end_addr; } ;
struct sdma_channel {int watermark_level; int event_id0; int event_id1; scalar_t__ per_address2; scalar_t__ per_address; int * event_mask; struct sdma_engine* sdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sdma_channel *VAR_7)
{
 struct sdma_engine *VAR_8 = VAR_7->sdma;

 int VAR_9 = VAR_7->watermark_level & VAR_5;
 int VAR_10 = (VAR_7->watermark_level & VAR_3) >> 16;

 FUNC_0(VAR_7->event_id0 % 32, &VAR_7->event_mask[1]);
 FUNC_0(VAR_7->event_id1 % 32, &VAR_7->event_mask[0]);

 if (VAR_7->event_id0 > 31)
  VAR_7->watermark_level |= VAR_4;

 if (VAR_7->event_id1 > 31)
  VAR_7->watermark_level |= VAR_2;






 if (VAR_9 > VAR_10) {
  VAR_7->watermark_level &= ~(VAR_5 |
      VAR_3);
  VAR_7->watermark_level |= VAR_10;
  VAR_7->watermark_level |= VAR_9 << 16;
  FUNC_1(VAR_7->event_mask[0], VAR_7->event_mask[1]);
 }

 if (VAR_7->per_address2 >= VAR_8->spba_start_addr &&
   VAR_7->per_address2 <= VAR_8->spba_end_addr)
  VAR_7->watermark_level |= VAR_6;

 if (VAR_7->per_address >= VAR_8->spba_start_addr &&
   VAR_7->per_address <= VAR_8->spba_end_addr)
  VAR_7->watermark_level |= VAR_1;

 VAR_7->watermark_level |= VAR_0;
}
