
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iadc_chip {int dev; int complete; scalar_t__ poll_eoc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct iadc_chip*,int) ;
 int FUNC_3 (struct iadc_chip*,int) ;
 int FUNC_4 (struct iadc_chip*,int *) ;
 int FUNC_5 (struct iadc_chip*,int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct iadc_chip *VAR_3, int VAR_4, u16 *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (VAR_7 < 0)
  goto exit;

 VAR_6 = FUNC_0(VAR_2) * VAR_1 * 2;

 if (VAR_3->poll_eoc) {
  VAR_7 = FUNC_3(VAR_3, VAR_6);
 } else {
  VAR_7 = FUNC_7(&VAR_3->complete,
   FUNC_6(VAR_6));
  if (!VAR_7)
   VAR_7 = -VAR_0;
  else

   VAR_7 = FUNC_3(VAR_3, VAR_1);
 }

 if (!VAR_7)
  VAR_7 = FUNC_4(VAR_3, VAR_5);
exit:
 FUNC_5(VAR_3, 0);
 if (VAR_7 < 0)
  FUNC_1(VAR_3->dev, "conversion failed\n");

 return VAR_7;
}
