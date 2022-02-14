
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pages; } ;
struct fwnet_device {scalar_t__ broadcast_state; int * broadcast_rcv_buffer_ptrs; int * broadcast_rcv_context; int card; TYPE_1__ broadcast_rcv_buffer; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct fwnet_device *VAR_2)
{
 unsigned VAR_3;

 if (VAR_2->broadcast_state != VAR_0) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   FUNC_3(VAR_2->broadcast_rcv_buffer.pages[VAR_3]);
  FUNC_0(&VAR_2->broadcast_rcv_buffer, VAR_2->card);
 }
 if (VAR_2->broadcast_rcv_context) {
  FUNC_1(VAR_2->broadcast_rcv_context);
  VAR_2->broadcast_rcv_context = ((void*)0);
 }
 FUNC_2(VAR_2->broadcast_rcv_buffer_ptrs);
 VAR_2->broadcast_rcv_buffer_ptrs = ((void*)0);
 VAR_2->broadcast_state = VAR_0;
}
