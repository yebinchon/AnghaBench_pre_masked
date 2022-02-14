
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620 {int mt_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sii8620*,int ) ;
 int FUNC_1 (struct sii8620*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sii8620 *VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_3, VAR_2);

 FUNC_1(VAR_3, VAR_2, VAR_4);

 if (VAR_4 & VAR_0)
  VAR_3->mt_state = VAR_1;
}
