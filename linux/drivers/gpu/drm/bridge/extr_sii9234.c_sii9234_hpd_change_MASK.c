
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii9234 {int state; } ;
typedef enum sii9234_state { ____Placeholder_sii9234_state } sii9234_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sii9234*,int ) ;
 scalar_t__ FUNC_1 (struct sii9234*) ;
 int FUNC_2 (struct sii9234*,int) ;

__attribute__((used)) static enum sii9234_state FUNC_3(struct sii9234 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (FUNC_1(VAR_3))
  return VAR_2;

 if (VAR_4 & VAR_1) {

  FUNC_2(VAR_3, 1);
 } else {

  FUNC_2(VAR_3, 0);
 }

 return VAR_3->state;
}
