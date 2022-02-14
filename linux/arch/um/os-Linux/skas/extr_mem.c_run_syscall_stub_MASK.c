
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_id {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long* FUNC_0 (struct mm_id*,void*) ;
 long FUNC_1 (struct mm_id*,void**) ;

long FUNC_2(struct mm_id * VAR_2, int VAR_3,
        unsigned long *VAR_4, long VAR_5, void **VAR_6,
        int VAR_7)
{
 unsigned long *VAR_8 = FUNC_0(VAR_2, *VAR_6);

 *VAR_8 += sizeof(long);
 VAR_8 += *VAR_8 / sizeof(long);

 *VAR_8++ = VAR_3;
 *VAR_8++ = VAR_4[0];
 *VAR_8++ = VAR_4[1];
 *VAR_8++ = VAR_4[2];
 *VAR_8++ = VAR_4[3];
 *VAR_8++ = VAR_4[4];
 *VAR_8++ = VAR_4[5];
 *VAR_8++ = VAR_5;
 *VAR_8 = 0;

 if (!VAR_7 && ((((unsigned long) VAR_8) & ~VAR_0) <
       VAR_1 - 10 * sizeof(long))) {
  *VAR_6 = VAR_8;
  return 0;
 }

 return FUNC_1(VAR_2, VAR_6);
}
