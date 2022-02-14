
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxt_data {TYPE_1__* client; } ;
struct mxt_cfg {unsigned int mem_size; scalar_t__ mem; scalar_t__ start_ofs; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,unsigned int,scalar_t__) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct mxt_data *VAR_1, struct mxt_cfg *VAR_2)
{
 unsigned int VAR_3 = 0;
 int VAR_4;


 while (VAR_3 < VAR_2->mem_size) {
  unsigned int VAR_5 = VAR_2->mem_size - VAR_3;

  if (VAR_5 > VAR_0)
   VAR_5 = VAR_0;

  VAR_4 = FUNC_0(VAR_1->client,
     VAR_2->start_ofs + VAR_3,
     VAR_5, VAR_2->mem + VAR_3);
  if (VAR_4) {
   FUNC_1(&VAR_1->client->dev,
    "Config write error, ret=%d\n", VAR_4);
   return VAR_4;
  }

  VAR_3 += VAR_5;
 }

 return 0;
}
