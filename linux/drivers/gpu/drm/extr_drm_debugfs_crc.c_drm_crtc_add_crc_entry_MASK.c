
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_crtc_crc_entry {int has_frame_counter; int crcs; int frame; } ;
struct drm_crtc_crc {int head; int tail; int overflow; int values_cnt; int wq; int lock; struct drm_crtc_crc_entry* entries; } ;
struct drm_crtc {struct drm_crtc_crc crc; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_crtc *VAR_3, bool VAR_4,
      uint32_t VAR_5, uint32_t *VAR_6)
{
 struct drm_crtc_crc *VAR_7 = &VAR_3->crc;
 struct drm_crtc_crc_entry *VAR_8;
 int VAR_9, VAR_10;
 unsigned long VAR_11;

 FUNC_3(&VAR_7->lock, VAR_11);


 if (!VAR_7->entries) {
  FUNC_4(&VAR_7->lock, VAR_11);
  return -VAR_1;
 }

 VAR_9 = VAR_7->head;
 VAR_10 = VAR_7->tail;

 if (FUNC_0(VAR_9, VAR_10, VAR_0) < 1) {
  bool VAR_12 = VAR_7->overflow;

  VAR_7->overflow = 1;
  FUNC_4(&VAR_7->lock, VAR_11);

  if (!VAR_12)
   FUNC_1("Overflow of CRC buffer, userspace reads too slow.\n");

  return -VAR_2;
 }

 VAR_8 = &VAR_7->entries[VAR_9];
 VAR_8->frame = VAR_5;
 VAR_8->has_frame_counter = VAR_4;
 FUNC_2(&VAR_8->crcs, VAR_6, sizeof(*VAR_6) * VAR_7->values_cnt);

 VAR_9 = (VAR_9 + 1) & (VAR_0 - 1);
 VAR_7->head = VAR_9;

 FUNC_4(&VAR_7->lock, VAR_11);

 FUNC_5(&VAR_7->wq);

 return 0;
}
