
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_trans_cookie {int dummy; } ;
struct ldc_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct ldc_channel*,void*,unsigned int,struct ldc_trans_cookie*,int,unsigned int) ;

void *FUNC_4(struct ldc_channel *VAR_3, unsigned int VAR_4,
     struct ldc_trans_cookie *VAR_5, int *VAR_6,
     unsigned int VAR_7)
{
 void *VAR_8;
 int VAR_9;

 if (VAR_4 & (8UL - 1))
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_2(VAR_4, VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_3(VAR_3, VAR_8, VAR_4, VAR_5, *VAR_6, VAR_7);
 if (VAR_9 < 0) {
  FUNC_1(VAR_8);
  return FUNC_0(VAR_9);
 }
 *VAR_6 = VAR_9;

 return VAR_8;
}
