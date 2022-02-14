
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpic {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_1(struct mpic *VAR_2, unsigned int VAR_3)
{
 return (VAR_3 >> 2) * VAR_0 +
        (VAR_3 & 3) * FUNC_0(VAR_1);
}
