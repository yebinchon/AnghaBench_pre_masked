
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_ratestats {int re; int s; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct ath_ratestats *VAR_1)
{

 if (FUNC_1(VAR_1->s, VAR_0, &VAR_1->re) < 0)
  FUNC_0(1, "ioctl");
}
