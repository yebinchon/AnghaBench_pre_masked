
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idma64_hw_desc {int ndesc; struct idma64_hw_desc* hw; int llp; int lli; } ;
struct idma64_desc {int ndesc; struct idma64_desc* hw; int llp; int lli; } ;
struct idma64_chan {int pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct idma64_hw_desc*) ;

__attribute__((used)) static void FUNC_2(struct idma64_chan *VAR_0,
  struct idma64_desc *VAR_1)
{
 struct idma64_hw_desc *VAR_2;

 if (VAR_1->ndesc) {
  unsigned int VAR_3 = VAR_1->ndesc;

  do {
   VAR_2 = &VAR_1->hw[--VAR_3];
   FUNC_0(VAR_0->pool, VAR_2->lli, VAR_2->llp);
  } while (VAR_3);
 }

 FUNC_1(VAR_1->hw);
 FUNC_1(VAR_1);
}
