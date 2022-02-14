
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* my_dest_ptr ;
typedef TYPE_3__* j_compress_ptr ;
struct TYPE_7__ {int dest; } ;
struct TYPE_5__ {int free_in_buffer; int next_output_byte; } ;
struct TYPE_6__ {int size; TYPE_1__ pub; int outfile; } ;



__attribute__((used)) static void
FUNC_0 (j_compress_ptr VAR_0)
{
  my_dest_ptr VAR_1 = (my_dest_ptr) VAR_0->dest;

  VAR_1->pub.next_output_byte = VAR_1->outfile;
  VAR_1->pub.free_in_buffer = VAR_1->size;
}
