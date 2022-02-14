
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lm63_data {scalar_t__* temp8; scalar_t__ remote_unsigned; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct lm63_data *VAR_0, int VAR_1)
{
 if (VAR_0->remote_unsigned)
  return FUNC_0((u8)VAR_0->temp8[VAR_1]);
 return FUNC_0(VAR_0->temp8[VAR_1]);
}
