
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_crc {int overflow; int opened; scalar_t__ values_cnt; scalar_t__ tail; scalar_t__ head; int * entries; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc_crc *VAR_0)
{
 FUNC_0(VAR_0->entries);
 VAR_0->overflow = 0;
 VAR_0->entries = ((void*)0);
 VAR_0->head = 0;
 VAR_0->tail = 0;
 VAR_0->values_cnt = 0;
 VAR_0->opened = 0;
}
