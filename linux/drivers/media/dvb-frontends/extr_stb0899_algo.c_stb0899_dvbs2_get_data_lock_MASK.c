
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_state {int verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,char*,int ) ;
 int FUNC_2 (struct stb0899_state*,int ) ;

__attribute__((used)) static int FUNC_3(struct stb0899_state *VAR_3, int VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 u8 VAR_7;

 while ((!VAR_6) && (VAR_5 < VAR_4)) {
  VAR_7 = FUNC_2(VAR_3, VAR_2);
  FUNC_1(VAR_3->verbose, VAR_1, 1, "---------> CFGPDELSTATUS=[0x%02x]", VAR_7);
  VAR_6 = FUNC_0(VAR_0, VAR_7);
  VAR_5++;
 }

 return VAR_6;
}
