
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity_io {int v; } ;
struct dm_verity_fec_io {scalar_t__ level; int * output; scalar_t__ nbufs; int bufs; int * rs; } ;


 struct dm_verity_fec_io* FUNC_0 (struct dm_verity_io*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct dm_verity_io *VAR_0)
{
 struct dm_verity_fec_io *VAR_1 = FUNC_0(VAR_0);

 if (!FUNC_2(VAR_0->v))
  return;

 VAR_1->rs = ((void*)0);
 FUNC_1(VAR_1->bufs, 0, sizeof(VAR_1->bufs));
 VAR_1->nbufs = 0;
 VAR_1->output = ((void*)0);
 VAR_1->level = 0;
}
