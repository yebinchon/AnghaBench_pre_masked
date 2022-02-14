
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prefix_bit_offset; int ptr; } ;
struct list_decoder {int * decode_int; TYPE_1__ br; scalar_t__ k; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1 (struct list_decoder *VAR_1) {
  FUNC_0 (!(VAR_1->br.prefix_bit_offset & 7));
  VAR_1->k = 0;
  VAR_1->br.ptr--;
  VAR_1->decode_int = &VAR_0;
}
