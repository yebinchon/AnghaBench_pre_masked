
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8788_adc {int lp; } ;
typedef enum lp8788_adc_id { ____Placeholder_lp8788_adc_id } lp8788_adc_id ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct lp8788_adc *VAR_4, enum lp8788_adc_id VAR_5,
    int *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 u8 VAR_10;
 u8 VAR_11[2];
 int VAR_12 = FUNC_0(VAR_11);
 int VAR_13 = 5;
 int VAR_14;

 VAR_10 = (VAR_5 << 1) | VAR_0;
 VAR_14 = FUNC_3(VAR_4->lp, VAR_1, VAR_10);
 if (VAR_14)
  goto err_io;


 VAR_10 = 0;
 while (VAR_13--) {
  FUNC_4(100, 200);

  VAR_14 = FUNC_1(VAR_4->lp, VAR_2, &VAR_10);
  if (VAR_14)
   goto err_io;


  if (VAR_10)
   break;
 }

 VAR_14 = FUNC_2(VAR_4->lp, VAR_3, VAR_11, VAR_12);
 if (VAR_14)
  goto err_io;

 VAR_7 = (VAR_11[0] << 4) & 0x00000ff0;
 VAR_8 = (VAR_11[1] >> 4) & 0x0000000f;
 VAR_9 = VAR_7 | VAR_8;
 *VAR_6 = VAR_9;

 return 0;

err_io:
 return VAR_14;
}
