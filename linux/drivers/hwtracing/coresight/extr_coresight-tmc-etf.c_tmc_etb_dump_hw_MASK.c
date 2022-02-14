
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmc_drvdata {char* buf; scalar_t__ len; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tmc_drvdata *VAR_3)
{
 char *VAR_4;
 u32 VAR_5, VAR_6;


 VAR_6 = FUNC_2(VAR_3->base + VAR_1) & VAR_2;
 VAR_4 = VAR_3->buf;
 VAR_3->len = 0;
 while (1) {
  VAR_5 = FUNC_2(VAR_3->base + VAR_0);
  if (VAR_5 == 0xFFFFFFFF)
   break;
  FUNC_1(VAR_4, &VAR_5, 4);
  VAR_4 += 4;
  VAR_3->len += 4;
 }

 if (VAR_6)
  FUNC_0(VAR_3->buf);
 return;
}
