
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_sigma_delta {int* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ad_sigma_delta*,unsigned int,unsigned int,int*) ;
 unsigned int FUNC_1 (int*) ;
 unsigned int FUNC_2 (int*) ;

int FUNC_3(struct ad_sigma_delta *VAR_1,
 unsigned int VAR_2, unsigned int VAR_3, unsigned int *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_1->data);
 if (VAR_5 < 0)
  goto out;

 switch (VAR_3) {
 case 4:
  *VAR_4 = FUNC_2(VAR_1->data);
  break;
 case 3:
  *VAR_4 = (VAR_1->data[0] << 16) |
   (VAR_1->data[1] << 8) |
   VAR_1->data[2];
  break;
 case 2:
  *VAR_4 = FUNC_1(VAR_1->data);
  break;
 case 1:
  *VAR_4 = VAR_1->data[0];
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

out:
 return VAR_5;
}
