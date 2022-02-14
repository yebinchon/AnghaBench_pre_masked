
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stts751_priv {size_t interval; int data_valid; scalar_t__ last_update; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (struct stts751_priv*) ;
 int FUNC_2 (struct stts751_priv*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct stts751_priv *VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_0(VAR_1[VAR_2->interval]);

 if (FUNC_3(VAR_0, VAR_2->last_update + VAR_4) ||
     !VAR_2->data_valid) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3)
   return VAR_3;
  VAR_2->data_valid = 1;
  VAR_2->last_update = VAR_0;
 }

 return 0;
}
