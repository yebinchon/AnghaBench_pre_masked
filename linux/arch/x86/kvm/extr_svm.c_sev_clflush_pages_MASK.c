
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_1[], unsigned long VAR_2)
{
 uint8_t *VAR_3;
 unsigned long VAR_4;

 if (VAR_2 == 0 || VAR_1 == ((void*)0))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1[VAR_4]);
  FUNC_0(VAR_3, VAR_0);
  FUNC_2(VAR_3);
 }
}
