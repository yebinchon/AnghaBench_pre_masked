
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct dwapb_gpio {int flags; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline u32 FUNC_1(struct dwapb_gpio *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->flags & VAR_0)
  return FUNC_0(VAR_2);

 return VAR_2;
}
