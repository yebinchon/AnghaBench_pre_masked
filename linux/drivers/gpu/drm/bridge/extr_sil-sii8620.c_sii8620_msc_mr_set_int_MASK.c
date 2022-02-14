
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620 {int mode; int feature_complete; scalar_t__ edid; } ;




 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sii8620*) ;
 int VAR_7 ;
 int FUNC_1 (struct sii8620*,int) ;
 int FUNC_2 (struct sii8620*,int ) ;
 int FUNC_3 (struct sii8620*,int ) ;
 int FUNC_4 (struct sii8620*,int ,int*,int) ;
 int FUNC_5 (struct sii8620*) ;
 int FUNC_6 (struct sii8620*,int ,int*,int) ;

__attribute__((used)) static void FUNC_7(struct sii8620 *VAR_8)
{
 u8 VAR_9[VAR_4];

 FUNC_4(VAR_8, VAR_6, VAR_9, VAR_4);
 FUNC_6(VAR_8, VAR_6, VAR_9, VAR_4);

 if (VAR_9[VAR_0] & VAR_1) {
  switch (VAR_8->mode) {
  case 128:
   FUNC_2(VAR_8, VAR_5);
   FUNC_3(VAR_8, VAR_7);
   break;
  case 129:
   FUNC_1(VAR_8, 1);
   break;
  default:
   break;
  }
 }
 if (VAR_9[VAR_0] & VAR_3)
  FUNC_5(VAR_8);
 if (VAR_9[VAR_0] & VAR_2) {
  VAR_8->feature_complete = 1;
  if (VAR_8->edid)
   FUNC_0(VAR_8);
 }
}
