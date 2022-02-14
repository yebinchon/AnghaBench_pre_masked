
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2 / 1000;

 return 0;
}
