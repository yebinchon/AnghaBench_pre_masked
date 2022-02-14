
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dc_context {int dce_environment; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,unsigned int,char const*,int) ;
 int FUNC_3 (char*,unsigned int,unsigned int,char const*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct dc_context const*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;

void FUNC_9(const struct dc_context *VAR_0,
 uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4,
 unsigned int VAR_5, unsigned int VAR_6,
 const char *VAR_7, int VAR_8)
{
 uint32_t VAR_9;
 uint32_t VAR_10;
 int VAR_11;


 FUNC_0(VAR_5 * VAR_6 <= 3000000);

 for (VAR_11 = 0; VAR_11 <= VAR_6; VAR_11++) {
  if (VAR_11) {
   if (VAR_5 >= 1000)
    FUNC_7(VAR_5/1000);
   else if (VAR_5 > 0)
    FUNC_8(VAR_5);
  }

  VAR_10 = FUNC_5(VAR_0, VAR_1);

  VAR_9 = FUNC_6(VAR_10, VAR_3, VAR_2);

  if (VAR_9 == VAR_4) {
   if (VAR_11 * VAR_5 > 1000 &&
     !FUNC_4(VAR_0->dce_environment))
    FUNC_2("REG_WAIT taking a while: %dms in %s line:%d\n",
      VAR_5 * VAR_11 / 1000,
      VAR_7, VAR_8);
   return;
  }
 }

 FUNC_3("REG_WAIT timeout %dus * %d tries - %s line:%d\n",
   VAR_5, VAR_6,
   VAR_7, VAR_8);

 if (!FUNC_4(VAR_0->dce_environment))
  FUNC_1();
}
