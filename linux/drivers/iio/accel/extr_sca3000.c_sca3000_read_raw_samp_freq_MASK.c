
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int info; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct sca3000_state*,int ,int*) ;
 int FUNC_1 (struct sca3000_state*,int ) ;

__attribute__((used)) static int FUNC_2(struct sca3000_state *VAR_2, int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_2->info, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 if (*VAR_3 > 0) {
  VAR_4 &= VAR_1;
  switch (VAR_4) {
  case 129:
   *VAR_3 /= 2;
   break;
  case 128:
   *VAR_3 /= 4;
   break;
  }
 }

 return 0;
}
