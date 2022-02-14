
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lri {int value; int reg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 *FUNC_3(u32 *VAR_1, const struct lri *VAR_2, unsigned int VAR_3)
{
 FUNC_0(!VAR_3 || VAR_3 > 63);

 *VAR_1++ = FUNC_1(VAR_3);
 do {
  *VAR_1++ = FUNC_2(VAR_2->reg);
  *VAR_1++ = VAR_2->value;
 } while (VAR_2++, --VAR_3);
 *VAR_1++ = VAR_0;

 return VAR_1;
}
