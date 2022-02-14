
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbg_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbg_state*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct drbg_state *VAR_1,
     unsigned char *VAR_2,
     unsigned int VAR_3)
{
 int VAR_4;

 do {
  FUNC_1(VAR_2, VAR_3);
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4 && VAR_4 != -VAR_0)
   return VAR_4;
 } while (VAR_4);

 return 0;
}
