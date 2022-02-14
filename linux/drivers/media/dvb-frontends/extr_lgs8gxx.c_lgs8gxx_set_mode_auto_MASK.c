
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ prod; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct lgs8gxx_state*,int,scalar_t__*) ;
 int FUNC_1 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct lgs8gxx_state *VAR_6)
{
 u8 VAR_7;
 u8 VAR_8 = VAR_6->config->prod;

 if (VAR_8 == VAR_0)
  FUNC_1(VAR_6, 0xC6, 0x01);

 if (VAR_8 == VAR_4) {
  FUNC_0(VAR_6, 0x0C, &VAR_7);
  VAR_7 &= (~0x04);
  FUNC_1(VAR_6, 0x0C, VAR_7 | 0x80);
  FUNC_1(VAR_6, 0x39, 0x00);
  FUNC_1(VAR_6, 0x3D, 0x04);
 } else if (VAR_8 == VAR_0 ||
  VAR_8 == VAR_5 ||
  VAR_8 == VAR_1 ||
  VAR_8 == VAR_2 ||
  VAR_8 == VAR_3) {
  FUNC_0(VAR_6, 0x7E, &VAR_7);
  FUNC_1(VAR_6, 0x7E, VAR_7 | 0x01);


  FUNC_0(VAR_6, 0xC5, &VAR_7);
  FUNC_1(VAR_6, 0xC5, VAR_7 & 0xE0);
 }

 if (VAR_8 == VAR_0) {

  FUNC_1(VAR_6, 0xC1, 0x03);

  FUNC_0(VAR_6, 0x7C, &VAR_7);
  VAR_7 = (VAR_7 & 0x8C) | 0x03;
  FUNC_1(VAR_6, 0x7C, VAR_7);


  FUNC_0(VAR_6, 0xC3, &VAR_7);
  VAR_7 = (VAR_7 & 0xEF) | 0x10;
  FUNC_1(VAR_6, 0xC3, VAR_7);
 }

 if (VAR_6->config->prod == VAR_2)
  FUNC_1(VAR_6, 0xD9, 0x40);

 return 0;
}
