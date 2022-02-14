
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar8xxx_priv {int source_port; int monitor_port; scalar_t__ mirror_tx; scalar_t__ mirror_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ar8xxx_priv*,int ,int ) ;
 int FUNC_2 (struct ar8xxx_priv*,int ,int ) ;
 int FUNC_3 (struct ar8xxx_priv*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ar8xxx_priv *VAR_6)
{
 int VAR_7;


 FUNC_3(VAR_6, VAR_5,
     VAR_0,
     (0xF << VAR_1));
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  FUNC_1(VAR_6, FUNC_0(VAR_7),
      VAR_3);

  FUNC_1(VAR_6, FUNC_0(VAR_7),
      VAR_4);
 }


 if (VAR_6->source_port >= VAR_2 ||
     VAR_6->monitor_port >= VAR_2 ||
     VAR_6->source_port == VAR_6->monitor_port) {
  return;
 }

 FUNC_3(VAR_6, VAR_5,
     VAR_0,
     (VAR_6->monitor_port << VAR_1));

 if (VAR_6->mirror_rx)
  FUNC_2(VAR_6, FUNC_0(VAR_6->source_port),
      VAR_3);

 if (VAR_6->mirror_tx)
  FUNC_2(VAR_6, FUNC_0(VAR_6->source_port),
      VAR_4);
}
