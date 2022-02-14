
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lz_decoder {int obuf; scalar_t__ fout; scalar_t__ fin; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct lz_decoder *VAR_0)
{
 if (VAR_0->fin)
  FUNC_0(VAR_0->fin);
 if (VAR_0->fout)
  FUNC_0(VAR_0->fout);
 FUNC_1(VAR_0->obuf);
}
