
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
     unsigned VAR_3, unsigned VAR_4,
     unsigned *VAR_5, unsigned *VAR_6)
{

 VAR_4 = FUNC_1(FUNC_2(100 / VAR_2, VAR_4), 1u);


 *VAR_6 = FUNC_2(FUNC_1(VAR_1/VAR_2, 1u), VAR_4);
 *VAR_5 = FUNC_0(VAR_0 * *VAR_6 * VAR_2, VAR_1);


 if (*VAR_5 > VAR_3) {
  *VAR_6 = (*VAR_6 * VAR_3)/(*VAR_5);
  *VAR_5 = VAR_3;
 }
}
