
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct dvb_frontend {struct cx22702_state* demodulator_priv; } ;
struct cx22702_state {scalar_t__ prevUCBlocks; } ;


 scalar_t__ FUNC_0 (struct cx22702_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct cx22702_state *VAR_2 = VAR_0->demodulator_priv;

 u8 VAR_3;


 VAR_3 = FUNC_0(VAR_2, 0xE3);
 if (VAR_2->prevUCBlocks < VAR_3)
  *VAR_1 = (VAR_3 - VAR_2->prevUCBlocks);
 else
  *VAR_1 = VAR_2->prevUCBlocks - VAR_3;
 VAR_2->prevUCBlocks = VAR_3;

 return 0;
}
