
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct sca3000_state *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1, 1);
 if (VAR_3 < 0)
  return VAR_3;

 return !(VAR_2->rx[0] & VAR_0);
}
