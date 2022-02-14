
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct af9033_dev* demodulator_priv; } ;
struct af9033_dev {int error_block_count; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct af9033_dev *VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = VAR_2->error_block_count;

 return 0;
}
