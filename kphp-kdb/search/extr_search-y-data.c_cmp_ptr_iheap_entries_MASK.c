
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct TYPE_4__ {TYPE_1__ Decoder; } ;
typedef TYPE_2__ iheap_en_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const iheap_en_t *VAR_2 = *((const iheap_en_t **) VAR_0);
  const iheap_en_t *VAR_3 = *((const iheap_en_t **) VAR_1);
  int VAR_4 = VAR_2->Decoder.len;
  int VAR_5 = VAR_3->Decoder.len;
  if (VAR_4 < VAR_5) { return -1; }
  if (VAR_4 > VAR_5) { return 1; }
  return 0;
}
