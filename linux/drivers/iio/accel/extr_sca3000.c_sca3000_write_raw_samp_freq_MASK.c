
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sca3000_state*,int ,int*) ;
 int FUNC_1 (struct sca3000_state*,int ) ;
 int FUNC_2 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sca3000_state *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_5, VAR_5->info, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_9 = VAR_7 & ~VAR_4;

 if (VAR_6 == VAR_8 / 2)
  VAR_9 |= VAR_2;
 if (VAR_6 == VAR_8 / 4)
  VAR_9 |= VAR_3;
 else if (VAR_6 != VAR_8)
  return -VAR_0;

 return FUNC_2(VAR_5, VAR_1,
         VAR_9);
}
