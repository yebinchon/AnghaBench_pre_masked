
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct dce_aux {int dummy; } ;
struct aux_engine_dce110 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct aux_engine_dce110* FUNC_0 (struct dce_aux*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dce_aux *VAR_7, uint32_t VAR_8,
         uint8_t *VAR_9, uint8_t *VAR_10,
         uint32_t *VAR_11)
{
 struct aux_engine_dce110 *VAR_12 = FUNC_0(VAR_7);
 uint32_t VAR_13;
 uint32_t VAR_14;

 *VAR_11 = FUNC_1(VAR_5, VAR_4,
        &VAR_13);


 if ((*VAR_11 & VAR_6))
  return -1;


 if (!VAR_13)
  return -1;

 FUNC_2(VAR_1,
     VAR_3, 0,
     VAR_0, 1,
     VAR_2, 1);

 FUNC_1(VAR_1, VAR_1, &VAR_14);
 VAR_14 = VAR_14 >> 4;
 if (VAR_10 != ((void*)0))
  *VAR_10 = (uint8_t)VAR_14;

 if (VAR_14 == 0) {
  uint32_t VAR_15 = 0;


  --VAR_13;


  if (VAR_13 > VAR_8)
   return -1;

  while (VAR_15 < VAR_13) {
   uint32_t VAR_16;

   FUNC_1(VAR_1, VAR_1, &VAR_16);
   VAR_9[VAR_15] = VAR_16;
   ++VAR_15;
  }

  return VAR_15;
 }

 return 0;
}
