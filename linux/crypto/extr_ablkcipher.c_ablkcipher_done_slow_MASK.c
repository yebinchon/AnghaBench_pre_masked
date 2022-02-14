
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sg; } ;
struct ablkcipher_walk {TYPE_1__ out; } ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct ablkcipher_walk *VAR_0,
     unsigned int VAR_1)
{
 for (;;) {
  unsigned int VAR_2 = FUNC_1(&VAR_0->out);

  if (VAR_2 > VAR_1)
   VAR_2 = VAR_1;
  FUNC_0(&VAR_0->out, VAR_1);
  if (VAR_1 == VAR_2)
   break;
  VAR_1 -= VAR_2;
  FUNC_2(&VAR_0->out, FUNC_3(VAR_0->out.sg));
 }
}
