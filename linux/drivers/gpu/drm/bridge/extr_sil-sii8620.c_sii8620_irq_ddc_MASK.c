
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620 {int feature_complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sii8620*) ;
 scalar_t__ FUNC_2 (struct sii8620*) ;
 int FUNC_3 (struct sii8620*,int ,int ) ;
 int FUNC_4 (struct sii8620*,int ) ;
 int FUNC_5 (struct sii8620*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct sii8620 *VAR_5)
{
 u8 VAR_6 = FUNC_4(VAR_5, VAR_3);

 if (VAR_6 & VAR_0) {
  FUNC_5(VAR_5, VAR_4, 0);
  if (FUNC_2(VAR_5) && !VAR_5->feature_complete)
   FUNC_3(VAR_5, FUNC_0(VAR_2),
        VAR_1);
  else
   FUNC_1(VAR_5);
 }
 FUNC_5(VAR_5, VAR_3, VAR_6);
}
