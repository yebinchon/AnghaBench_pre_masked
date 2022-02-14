
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct jpeg_destination_mgr {int dummy; } ;
typedef int my_destination_mgr ;
typedef TYPE_3__* my_dest_ptr ;
typedef TYPE_4__* j_compress_ptr ;
typedef int j_common_ptr ;
typedef int byte ;
struct TYPE_9__ {struct jpeg_destination_mgr* dest; TYPE_2__* mem; } ;
struct TYPE_6__ {int term_destination; int empty_output_buffer; int init_destination; } ;
struct TYPE_8__ {int size; int * outfile; TYPE_1__ pub; } ;
struct TYPE_7__ {scalar_t__ (* alloc_small ) (int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1 (j_compress_ptr VAR_4, byte* VAR_5, int VAR_6)
{
  my_dest_ptr VAR_7;







  if (VAR_4->dest == ((void*)0)) {
    VAR_4->dest = (struct jpeg_destination_mgr *)
      (*VAR_4->mem->alloc_small) ((j_common_ptr) VAR_4, VAR_0,
      sizeof(my_destination_mgr));
  }

  VAR_7 = (my_dest_ptr) VAR_4->dest;
  VAR_7->pub.init_destination = VAR_2;
  VAR_7->pub.empty_output_buffer = VAR_1;
  VAR_7->pub.term_destination = VAR_3;
  VAR_7->outfile = VAR_5;
  VAR_7->size = VAR_6;
}
