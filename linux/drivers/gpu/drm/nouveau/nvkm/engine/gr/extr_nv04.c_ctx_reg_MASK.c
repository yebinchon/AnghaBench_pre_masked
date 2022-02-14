
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nv04_gr_chan {scalar_t__* nv04; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static u32 *FUNC_1(struct nv04_gr_chan *VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3] == VAR_2)
   return &VAR_1->nv04[VAR_3];
 }

 return ((void*)0);
}
