
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct truly_nt35597 {int reset_gpio; TYPE_1__* supplies; } ;
struct TYPE_3__ {int consumer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int * VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct truly_nt35597 *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->supplies); VAR_3++) {
  VAR_2 = FUNC_3(VAR_1->supplies[VAR_3].consumer,
     VAR_0[VAR_3]);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_2(FUNC_0(VAR_1->supplies), VAR_1->supplies);
 if (VAR_2 < 0)
  return VAR_2;






 FUNC_1(VAR_1->reset_gpio, 0);
 FUNC_4(10000, 20000);
 FUNC_1(VAR_1->reset_gpio, 1);
 FUNC_4(10000, 20000);
 FUNC_1(VAR_1->reset_gpio, 0);
 FUNC_4(10000, 20000);

 return 0;
}
