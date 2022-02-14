
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbg_string {int dummy; } ;
struct drbg_state {int drbg_mutex; } ;


 int FUNC_0 (struct drbg_state*,unsigned char*,unsigned int,struct drbg_string*) ;
 unsigned int FUNC_1 (struct drbg_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct drbg_state *VAR_0,
         unsigned char *VAR_1, unsigned int VAR_2,
         struct drbg_string *VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 do {
  int VAR_6 = 0;
  unsigned int VAR_7 = 0;
  VAR_5 = ((VAR_2 - VAR_4) / FUNC_1(VAR_0));
  VAR_7 = VAR_5 ? FUNC_1(VAR_0) : (VAR_2 - VAR_4);
  FUNC_2(&VAR_0->drbg_mutex);
  VAR_6 = FUNC_0(VAR_0, VAR_1 + VAR_4, VAR_7, VAR_3);
  FUNC_3(&VAR_0->drbg_mutex);
  if (0 > VAR_6)
   return VAR_6;
  VAR_4 += VAR_7;
 } while (VAR_5 > 0 && (VAR_4 < VAR_2));
 return 0;
}
