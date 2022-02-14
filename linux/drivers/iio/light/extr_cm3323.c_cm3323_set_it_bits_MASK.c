
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct cm3323_data {int reg_conf; int client; } ;
struct TYPE_3__ {int val; int val2; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cm3323_data *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 u16 VAR_10;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  if (VAR_6 == VAR_4[VAR_8].val &&
      VAR_7 == VAR_4[VAR_8].val2) {
   VAR_10 = VAR_5->reg_conf & ~VAR_1;
   VAR_10 |= VAR_8 << VAR_2;

   VAR_9 = FUNC_1(VAR_5->client,
       VAR_0,
       VAR_10);
   if (VAR_9 < 0)
    return VAR_9;

   VAR_5->reg_conf = VAR_10;

   return 0;
  }
 }

 return -VAR_3;
}
