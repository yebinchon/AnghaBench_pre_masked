
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct pd_uinfo {unsigned int first_sd; unsigned int num_sd; } ;
struct crypto4xx_device {void* scatter_buffer_va; } ;
struct ce_pd {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__,unsigned int) ;
 int FUNC_1 (void*,struct scatterlist*,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct crypto4xx_device *VAR_3,
          struct ce_pd *VAR_4,
          struct pd_uinfo *VAR_5,
          u32 VAR_6,
          struct scatterlist *VAR_7)
{
 unsigned int VAR_8 = VAR_5->first_sd;
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11;
 unsigned int VAR_12 = 0;







 VAR_9 = (VAR_8 + VAR_5->num_sd);
 if (VAR_9 > VAR_0) {
  VAR_9 = VAR_0;
  VAR_10 = VAR_9 % VAR_1;
 }

 while (VAR_6) {
  void *VAR_13 = VAR_3->scatter_buffer_va +
   VAR_8 * VAR_2;

  VAR_11 = FUNC_0(VAR_6, VAR_2 *
          (1 + VAR_9 - VAR_8));
  FUNC_1(VAR_13, VAR_7, VAR_12, VAR_11, 1);
  VAR_6 -= VAR_11;

  if (VAR_10) {
   VAR_8 = 0;
   VAR_9 = VAR_10;
   VAR_12 += VAR_11;
   VAR_10 = 0;
  }
 }
}
