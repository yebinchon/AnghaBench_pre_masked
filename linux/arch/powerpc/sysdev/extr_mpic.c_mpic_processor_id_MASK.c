
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpic {int flags; } ;


 int VAR_0 ;
 unsigned int FUNC_0 () ;

__attribute__((used)) static inline unsigned int FUNC_1(struct mpic *VAR_1)
{
 unsigned int VAR_2 = 0;

 if (!(VAR_1->flags & VAR_0))
  VAR_2 = FUNC_0();

 return VAR_2;
}
