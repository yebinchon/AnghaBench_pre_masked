
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct stb0899_state {struct stb0899_config* config; } ;
struct stb0899_postproc {scalar_t__ level; int gpio; } ;
struct stb0899_config {struct stb0899_postproc* postproc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct stb0899_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct stb0899_state *VAR_1, u8 VAR_2, int VAR_3)
{
 struct stb0899_config *VAR_4 = VAR_1->config;
 const struct stb0899_postproc *VAR_5 = VAR_4->postproc;


 if (VAR_5) {
  if (VAR_3) {
   if (VAR_5[VAR_2].level == VAR_0)
    FUNC_0(VAR_1, VAR_5[VAR_2].gpio, 0x02);
   else
    FUNC_0(VAR_1, VAR_5[VAR_2].gpio, 0x82);
  } else {
   if (VAR_5[VAR_2].level == VAR_0)
    FUNC_0(VAR_1, VAR_5[VAR_2].gpio, 0x82);
   else
    FUNC_0(VAR_1, VAR_5[VAR_2].gpio, 0x02);
  }
 }
 return 0;
}
