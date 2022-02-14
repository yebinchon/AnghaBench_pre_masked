
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5421_state {int dummy; } ;


 int FUNC_0 (struct ad5421_state*,unsigned int*,unsigned int*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct ad5421_state *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 FUNC_0(VAR_0, &VAR_1, &VAR_2);
 return (VAR_1 * (1 << 16)) / (VAR_2 - VAR_1);
}
