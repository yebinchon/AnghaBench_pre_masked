
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct sca3000_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sca3000_state*) ;
 int FUNC_1 (struct sca3000_state*) ;
 int FUNC_2 (struct sca3000_state*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sca3000_state *VAR_2,
      u8 VAR_3,
      uint8_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 < 0)
  goto error_ret;
 if (VAR_5) {
  VAR_5 = FUNC_0(VAR_2);
  if (VAR_5)
   goto error_ret;
 }


 VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_3);
 if (VAR_5)
  goto error_ret;


 VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_4);

error_ret:
 return VAR_5;
}
