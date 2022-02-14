
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (struct dvb_frontend*,int ,int const) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, const u8 VAR_1[], int VAR_2)
{
 int VAR_3, VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2 - 1; VAR_4++)
  if ((VAR_3 = FUNC_0(VAR_0, VAR_1[0] + VAR_4, VAR_1[VAR_4 + 1])))
   return VAR_3;

 return 0;
}
