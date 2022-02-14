
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib8000_state {int dummy; } ;


 int* VAR_0 ;
 int FUNC_0 (struct dib8000_state*,int,int) ;

__attribute__((used)) static void FUNC_1(struct dib8000_state *VAR_1, u16 VAR_2)
{
 u16 VAR_3;

 FUNC_0(VAR_1, 116, VAR_2);


 if (VAR_2) {
  for (VAR_3 = 0; VAR_3 < 10; VAR_3++)
   FUNC_0(VAR_1, 80 + VAR_3, VAR_0[VAR_3]);
 } else {
  for (VAR_3 = 0; VAR_3 < 10; VAR_3++)
   FUNC_0(VAR_1, 80 + VAR_3, VAR_0[VAR_3] - 355);
 }
}
