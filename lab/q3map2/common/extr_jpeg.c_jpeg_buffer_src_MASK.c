
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct jpeg_source_mgr {int dummy; } ;
typedef TYPE_3__* my_src_ptr ;
typedef int my_source_mgr ;
typedef TYPE_4__* j_decompress_ptr ;
typedef int j_common_ptr ;
struct TYPE_9__ {struct jpeg_source_mgr* src; TYPE_1__* mem; } ;
struct TYPE_7__ {int * next_input_byte; scalar_t__ bytes_in_buffer; int term_source; int resync_to_restart; int skip_input_data; int fill_input_buffer; int init_source; } ;
struct TYPE_8__ {int src_size; TYPE_2__ pub; int * src_buffer; int * buffer; } ;
struct TYPE_6__ {scalar_t__ (* alloc_small ) (int ,int ,int) ;} ;
typedef int JOCTET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2( j_decompress_ptr VAR_7, void* VAR_8, int VAR_9 ){
 my_src_ptr VAR_10;
 if ( VAR_7->src == ((void*)0) ) {
  VAR_7->src = (struct jpeg_source_mgr *)
      ( *VAR_7->mem->alloc_small )( (j_common_ptr) VAR_7, VAR_1,
               sizeof( my_source_mgr ) );
  VAR_10 = (my_src_ptr) VAR_7->src;
  VAR_10->buffer = (JOCTET *)
       ( *VAR_7->mem->alloc_small )( (j_common_ptr) VAR_7, VAR_1,
             VAR_0 * sizeof( JOCTET ) );
 }

 VAR_10 = (my_src_ptr) VAR_7->src;
 VAR_10->pub.init_source = VAR_4;
 VAR_10->pub.fill_input_buffer = VAR_3;
 VAR_10->pub.skip_input_data = VAR_5;
 VAR_10->pub.resync_to_restart = VAR_2;
 VAR_10->pub.term_source = VAR_6;
 VAR_10->src_buffer = (JOCTET *)VAR_8;
 VAR_10->src_size = VAR_9;
 VAR_10->pub.bytes_in_buffer = 0;
 VAR_10->pub.next_input_byte = ((void*)0);
}
