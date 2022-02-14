
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620_mt_msg {int ret; } ;
struct sii8620 {int mt_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sii8620_mt_msg* FUNC_0 (struct sii8620*) ;
 int FUNC_1 (struct sii8620*,int ) ;

__attribute__((used)) static void FUNC_2(struct sii8620 *VAR_2)
{
 struct sii8620_mt_msg *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_3)
  return;

 VAR_3->ret = FUNC_1(VAR_2, VAR_1);
 VAR_2->mt_state = VAR_0;
}
