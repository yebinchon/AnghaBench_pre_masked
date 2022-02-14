
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_state {int verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,char*) ;
 unsigned long VAR_4 ;
 int FUNC_2 (struct stb0899_state*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct stb0899_state *VAR_5, int VAR_6)
{
 u8 VAR_7 = 0;
 unsigned long VAR_8 = VAR_4;

 while (1) {
  VAR_7 = FUNC_2(VAR_5, VAR_3);
  if (!FUNC_0(VAR_2, VAR_7))
   break;
  if (FUNC_3(VAR_4, VAR_8 + VAR_6)) {
   FUNC_1(VAR_5->verbose, VAR_1, 1, "timed out !!");
   return -VAR_0;
  }
 }

 return 0;
}
