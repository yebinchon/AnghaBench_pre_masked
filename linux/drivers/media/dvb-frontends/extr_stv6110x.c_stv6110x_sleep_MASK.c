
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {scalar_t__ tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1)
{
 if (VAR_1->tuner_priv)
  return FUNC_0(VAR_1, VAR_0);

 return 0;
}
