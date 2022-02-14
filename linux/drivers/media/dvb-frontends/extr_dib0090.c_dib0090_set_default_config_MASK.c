
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct dib0090_state {int dummy; } ;


 int FUNC_0 (struct dib0090_state*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dib0090_state *VAR_0, const u16 * VAR_1)
{
 u16 VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_1++);
 while (VAR_2) {
  VAR_3 = FUNC_1(VAR_1++);
  do {
   FUNC_0(VAR_0, VAR_3, FUNC_1(VAR_1++));
   VAR_3++;
  } while (--VAR_2);
  VAR_2 = FUNC_1(VAR_1++);
 }
}
