
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_stream_state {int * out_transfer_func; int sink; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dc_stream_state *VAR_0)
{
 FUNC_0(VAR_0->sink);
 if (VAR_0->out_transfer_func != ((void*)0)) {
  FUNC_1(VAR_0->out_transfer_func);
  VAR_0->out_transfer_func = ((void*)0);
 }
}
