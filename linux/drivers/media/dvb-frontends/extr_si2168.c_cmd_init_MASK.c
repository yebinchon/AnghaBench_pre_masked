
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si2168_cmd {int wlen; int rlen; int args; } ;


 int FUNC_0 (int ,int const*,int) ;

__attribute__((used)) static void FUNC_1(struct si2168_cmd *VAR_0, const u8 *VAR_1, int VAR_2, int VAR_3)
{
 FUNC_0(VAR_0->args, VAR_1, VAR_2);
 VAR_0->wlen = VAR_2;
 VAR_0->rlen = VAR_3;
}
