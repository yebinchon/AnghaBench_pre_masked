
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metafile_header_old {int key_len; } ;
struct metafile_header {scalar_t__ crc32; int key_len; } ;



void FUNC_0 (struct metafile_header *VAR_0) {
  VAR_0->key_len = ((struct metafile_header_old *)VAR_0)->key_len;
  VAR_0->crc32 = 0;
}
