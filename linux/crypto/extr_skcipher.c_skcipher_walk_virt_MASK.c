
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_walk {int flags; } ;
struct TYPE_2__ {int flags; } ;
struct skcipher_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct skcipher_walk*,struct skcipher_request*) ;

int FUNC_2(struct skcipher_walk *VAR_3,
         struct skcipher_request *VAR_4, bool VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4->base.flags & VAR_0);

 VAR_3->flags &= ~VAR_1;

 VAR_6 = FUNC_1(VAR_3, VAR_4);

 VAR_3->flags &= VAR_5 ? ~VAR_2 : ~0;

 return VAR_6;
}
