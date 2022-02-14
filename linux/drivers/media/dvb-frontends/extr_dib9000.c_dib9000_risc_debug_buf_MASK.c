
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dib9000_state {int fe_id; } ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct dib9000_state *VAR_0, u16 * VAR_1, u8 VAR_2)
{
 u32 VAR_3 = VAR_1[1] << 16 | VAR_1[0];
 char *VAR_4 = (char *)&VAR_1[2];

 VAR_4[2 * (VAR_2 - 2) - 1] = '\0';
 if (*VAR_4 == '~') {
  VAR_4++;
  FUNC_0("%s\n", VAR_4);
 } else
  FUNC_0("RISC%d: %d.%04d %s\n",
   VAR_0->fe_id,
   VAR_3 / 10000, VAR_3 % 10000, *VAR_4 ? VAR_4 : "<empty>");
 return 1;
}
