
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ length; } ;
struct hifn_cipher_walk {int num; struct scatterlist* cache; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_2(struct hifn_cipher_walk *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num; ++VAR_1) {
  struct scatterlist *VAR_2 = &VAR_0->cache[VAR_1];

  FUNC_0(FUNC_1(VAR_2));

  VAR_2->length = 0;
 }

 VAR_0->num = 0;
}
