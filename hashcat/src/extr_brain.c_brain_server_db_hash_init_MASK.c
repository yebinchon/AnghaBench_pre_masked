
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int write_hashes; int mux_hg; int mux_hr; scalar_t__ long_alloc; int * long_buf; scalar_t__ long_cnt; scalar_t__ hb; int brain_session; } ;
typedef TYPE_1__ brain_server_db_hash_t ;


 int FUNC_0 (int ) ;

void FUNC_1 (brain_server_db_hash_t *VAR_0, const u32 VAR_1)
{
  VAR_0->brain_session = VAR_1;

  VAR_0->hb = 0;
  VAR_0->long_cnt = 0;
  VAR_0->long_buf = ((void*)0);
  VAR_0->long_alloc = 0;
  VAR_0->write_hashes = 0;

  FUNC_0 (VAR_0->mux_hr);
  FUNC_0 (VAR_0->mux_hg);
}
