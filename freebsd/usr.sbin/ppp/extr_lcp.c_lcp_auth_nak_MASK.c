
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chap81; int chap80lm; int chap80nt; int chap05; int pap; } ;
struct lcp {TYPE_2__ cfg; } ;
struct TYPE_3__ {int len; int id; } ;
struct fsm_opt {unsigned char* data; TYPE_1__ hdr; } ;
struct fsm_decode {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fsm_decode*,struct fsm_opt*) ;

__attribute__((used)) static int
FUNC_2(struct lcp *VAR_3, struct fsm_decode *VAR_4)
{
  struct fsm_opt VAR_5;

  VAR_5.hdr.id = VAR_2;

  if (FUNC_0(VAR_3->cfg.pap)) {
    VAR_5.hdr.len = 4;
    VAR_5.data[0] = (unsigned char)(VAR_1 >> 8);
    VAR_5.data[1] = (unsigned char)VAR_1;
    FUNC_1(VAR_4, &VAR_5);
    return 1;
  }

  VAR_5.hdr.len = 5;
  VAR_5.data[0] = (unsigned char)(VAR_0 >> 8);
  VAR_5.data[1] = (unsigned char)VAR_0;

  if (FUNC_0(VAR_3->cfg.chap05)) {
    VAR_5.data[2] = 0x05;
    FUNC_1(VAR_4, &VAR_5);

  } else if (FUNC_0(VAR_3->cfg.chap80nt) ||
             FUNC_0(VAR_3->cfg.chap80lm)) {
    VAR_5.data[2] = 0x80;
    FUNC_1(VAR_4, &VAR_5);
  } else if (FUNC_0(VAR_3->cfg.chap81)) {
    VAR_5.data[2] = 0x81;
    FUNC_1(VAR_4, &VAR_5);

  } else {
    return 0;
  }

  return 1;
}
