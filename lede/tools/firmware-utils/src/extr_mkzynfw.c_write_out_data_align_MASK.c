
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct csum_state {int dummy; } ;
typedef int FILE ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *,int *,size_t,struct csum_state*) ;
 int FUNC_2 (int *,size_t,int,struct csum_state*) ;

int
FUNC_3(FILE *VAR_0, uint8_t *VAR_1, size_t VAR_2, size_t VAR_3,
  struct csum_state *VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_0(VAR_2,VAR_3) - VAR_2;
 VAR_6 = FUNC_2(VAR_0, VAR_5, 0xFF, VAR_4);

 return VAR_6;
}
