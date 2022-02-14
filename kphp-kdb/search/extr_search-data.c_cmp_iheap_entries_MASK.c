
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct TYPE_5__ {TYPE_1__ dec; } ;
struct TYPE_6__ {TYPE_2__ Decoder; } ;
typedef TYPE_3__ iheap_en_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const iheap_en_t *VAR_2 = (const iheap_en_t *) VAR_0;
  const iheap_en_t *VAR_3 = (const iheap_en_t *) VAR_1;
  int VAR_4 = VAR_2->Decoder.dec.len;
  int VAR_5 = VAR_3->Decoder.dec.len;
  if (VAR_4 < VAR_5) { return -1; }
  if (VAR_4 > VAR_5) { return 1; }
  return 0;
}
