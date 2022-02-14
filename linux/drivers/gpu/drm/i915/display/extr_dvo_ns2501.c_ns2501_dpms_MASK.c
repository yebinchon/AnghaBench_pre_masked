
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ns2501_priv {TYPE_1__* conf; } ;
struct intel_dvo_device {scalar_t__ dev_priv; } ;
struct TYPE_2__ {int sync; int syncb; int conf; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct intel_dvo_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct intel_dvo_device *VAR_9, bool VAR_10)
{
 struct ns2501_priv *VAR_11 = (struct ns2501_priv *)(VAR_9->dev_priv);

 FUNC_0("Trying set the dpms of the DVO to %i\n", VAR_10);

 if (VAR_10) {
  FUNC_2(VAR_9, VAR_8, VAR_11->conf->sync | 0x08);

  FUNC_2(VAR_9, VAR_6, VAR_11->conf->syncb);

  FUNC_2(VAR_9, VAR_5, VAR_1);
  FUNC_1(15);

  FUNC_2(VAR_9, VAR_7,
    VAR_11->conf->conf | VAR_2);
  if (!(VAR_11->conf->conf & VAR_2))
   FUNC_2(VAR_9, VAR_7, VAR_11->conf->conf);
  FUNC_1(200);

  FUNC_2(VAR_9, VAR_5,
   VAR_1 | VAR_0);

  FUNC_2(VAR_9, VAR_8, VAR_11->conf->sync);
 } else {
  FUNC_2(VAR_9, VAR_5, VAR_1);
  FUNC_1(200);

  FUNC_2(VAR_9, VAR_7, VAR_4 | VAR_3 |
    VAR_2);
  FUNC_1(15);

  FUNC_2(VAR_9, VAR_5, 0x00);
 }
}
