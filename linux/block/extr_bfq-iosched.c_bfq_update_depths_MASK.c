
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int shift; } ;
struct sbitmap_queue {TYPE_1__ sb; } ;
struct bfq_data {void*** word_depths; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,void*) ;

__attribute__((used)) static unsigned int FUNC_2(struct bfq_data *VAR_1,
          struct sbitmap_queue *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5 = VAR_0;
 VAR_1->word_depths[0][0] = FUNC_0((1U << VAR_2->sb.shift) >> 1, 1U);





 VAR_1->word_depths[0][1] = FUNC_0(((1U << VAR_2->sb.shift) * 3) >> 2, 1U);
 VAR_1->word_depths[1][0] = FUNC_0(((1U << VAR_2->sb.shift) * 3) >> 4, 1U);

 VAR_1->word_depths[1][1] = FUNC_0(((1U << VAR_2->sb.shift) * 6) >> 4, 1U);

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++)
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
   VAR_5 = FUNC_1(VAR_5, VAR_1->word_depths[VAR_3][VAR_4]);

 return VAR_5;
}
