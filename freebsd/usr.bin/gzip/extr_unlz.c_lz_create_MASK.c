
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lz_decoder {int dict_size; int wrapped; int * fin; int rdec; int * obuf; int crc; scalar_t__ spos; scalar_t__ ppos; scalar_t__ pos; int * fout; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ,char*) ;
 int FUNC_2 (struct lz_decoder*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (struct lz_decoder*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct lz_decoder *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 FUNC_5(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->fin = FUNC_1(FUNC_0(VAR_1), "r");
 if (VAR_0->fin == ((void*)0))
  goto out;

 VAR_0->fout = FUNC_1(FUNC_0(VAR_2), "w");
 if (VAR_0->fout == ((void*)0))
  goto out;

 VAR_0->pos = VAR_0->ppos = VAR_0->spos = 0;
 VAR_0->crc = ~0;
 VAR_0->dict_size = VAR_3;
 VAR_0->wrapped = 0;

 VAR_0->obuf = FUNC_4(VAR_3);
 if (VAR_0->obuf == ((void*)0))
  goto out;

 if (FUNC_3(&VAR_0->rdec, VAR_0->fin) == -1)
  goto out;
 return 0;
out:
 FUNC_2(VAR_0);
 return -1;
}
