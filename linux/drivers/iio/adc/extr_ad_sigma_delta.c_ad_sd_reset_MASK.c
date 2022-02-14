
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ad_sigma_delta {int spi; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,unsigned int) ;
 int FUNC_4 (int ,int *,unsigned int) ;

int FUNC_5(struct ad_sigma_delta *VAR_2,
 unsigned int VAR_3)
{
 uint8_t *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3, 8);
 VAR_4 = FUNC_1(VAR_5, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_4, 0xff, VAR_5);
 VAR_6 = FUNC_4(VAR_2->spi, VAR_4, VAR_5);
 FUNC_2(VAR_4);

 return VAR_6;
}
