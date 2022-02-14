
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adm6996_priv {scalar_t__ model; int tagged_ports; int * pvid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_7 (struct adm6996_priv*,int ) ;
 int FUNC_8 (struct adm6996_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct adm6996_priv *VAR_10)
{
 u16 VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  VAR_11 = FUNC_7(VAR_10, VAR_9[VAR_12]);
  VAR_11 &= ~(VAR_8);
  VAR_11 |= FUNC_6(VAR_10->pvid[VAR_12]);
  if (VAR_10->model == VAR_0) {
   if (VAR_10->tagged_ports & (1 << VAR_12))
    VAR_11 |= (1 << 4);
   else
    VAR_11 &= ~(1 << 4);
  }
  FUNC_8(VAR_10, VAR_9[VAR_12], VAR_11);
 }

 FUNC_8(VAR_10, VAR_3, FUNC_0(VAR_10->pvid[0]));
 FUNC_8(VAR_10, VAR_4, FUNC_1(VAR_10->pvid[1]));
 VAR_11 = FUNC_7(VAR_10, VAR_2);
 VAR_11 &= ~(VAR_5);
 VAR_11 |= FUNC_2(VAR_10->pvid[2]);
 FUNC_8(VAR_10, VAR_2, VAR_11);
 VAR_11 = FUNC_3(VAR_10->pvid[3]);
 VAR_11 |= FUNC_4(VAR_10->pvid[4]);
 FUNC_8(VAR_10, VAR_6, VAR_11);
 VAR_11 = FUNC_7(VAR_10, VAR_7);
 VAR_11 &= ~(VAR_5);
 VAR_11 |= FUNC_5(VAR_10->pvid[5]);
 FUNC_8(VAR_10, VAR_7, VAR_11);
}
