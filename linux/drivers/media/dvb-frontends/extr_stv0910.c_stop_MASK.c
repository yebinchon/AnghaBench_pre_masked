
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv {int tscfgh; int receive_mode; scalar_t__ started; scalar_t__ regoff; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct stv*,scalar_t__,int*) ;
 int FUNC_1 (struct stv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct stv *VAR_5)
{
 if (VAR_5->started) {
  u8 VAR_6;

  FUNC_1(VAR_5, VAR_4 + VAR_5->regoff,
     VAR_5->tscfgh | 0x01);
  FUNC_0(VAR_5, VAR_3 + VAR_5->regoff, &VAR_6);
  VAR_6 &= ~0x01;
  FUNC_1(VAR_5, VAR_3 + VAR_5->regoff, VAR_6);

  FUNC_1(VAR_5, VAR_1 + VAR_5->regoff, 0x5B);

  FUNC_1(VAR_5, VAR_2 + VAR_5->regoff, 0x5c);
  VAR_5->started = 0;
 }
 VAR_5->receive_mode = VAR_0;
 return 0;
}
