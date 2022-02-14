
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *,scalar_t__,unsigned int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(u8 *VAR_5, unsigned int VAR_6)
{

 if (!FUNC_2(&VAR_3))
  return 0;


 VAR_2 -= VAR_6;
 if (VAR_2 < VAR_0) {
  FUNC_1(VAR_5, VAR_1 + VAR_2, VAR_6);
  FUNC_0(VAR_6, &VAR_4);
  FUNC_3(&VAR_3);
  return 1;
 }


 FUNC_3(&VAR_3);

 return 0;
}
