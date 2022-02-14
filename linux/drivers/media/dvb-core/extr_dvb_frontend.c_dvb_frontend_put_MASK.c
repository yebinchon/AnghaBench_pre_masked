
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* detach ) (struct dvb_frontend*) ;} ;
struct dvb_frontend {int refcount; scalar_t__ frontend_priv; TYPE_1__ ops; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct dvb_frontend*) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_1)
{

 if (VAR_1->ops.detach)
  VAR_1->ops.detach(VAR_1);




 if (VAR_1->frontend_priv)
  FUNC_1(&VAR_1->refcount, VAR_0);
 else
  FUNC_0(VAR_1);
}
