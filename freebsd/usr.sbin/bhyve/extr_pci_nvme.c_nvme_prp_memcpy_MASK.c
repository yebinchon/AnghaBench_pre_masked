
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint64_t ;
struct vmctx {int dummy; } ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *,int *,size_t) ;
 int * FUNC_2 (struct vmctx*,size_t,size_t) ;

__attribute__((used)) static int
FUNC_3(struct vmctx *VAR_2, uint64_t VAR_3, uint64_t VAR_4, uint8_t *VAR_5,
 size_t VAR_6)
{
 uint8_t *VAR_7;
 size_t VAR_8;

 if (VAR_6 > (8 * 1024)) {
  return (-1);
 }


 VAR_8 = VAR_1 - (VAR_3 & VAR_0);
 VAR_8 = FUNC_0(VAR_8, VAR_6);

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_8);
 if (VAR_7 == ((void*)0)) {
  return (-1);
 }

 FUNC_1(VAR_7, VAR_5, VAR_8);

 VAR_5 += VAR_8;

 VAR_6 -= VAR_8;
 if (VAR_6 == 0) {
  return (0);
 }

 VAR_6 = FUNC_0(VAR_6, VAR_1);

 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_6);
 if (VAR_7 == ((void*)0)) {
  return (-1);
 }

 FUNC_1(VAR_7, VAR_5, VAR_6);

 return (0);
}
