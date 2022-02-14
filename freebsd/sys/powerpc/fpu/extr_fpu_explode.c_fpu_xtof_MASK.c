
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct fpn {scalar_t__* fp_mant; int fp_exp; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fpn*) ;

int
FUNC_1(struct fpn *VAR_3, u_int64_t VAR_4)
{

 if (VAR_4 == 0)
  return (VAR_1);






 VAR_3->fp_exp = VAR_2;
 *((int64_t*)VAR_3->fp_mant) = (int64_t)VAR_4 < 0 ? -VAR_4 : VAR_4;
 VAR_3->fp_mant[2] = 0;
 VAR_3->fp_mant[3] = 0;
 FUNC_0(VAR_3);
 return (VAR_0);
}
