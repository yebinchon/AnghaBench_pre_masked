
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {int dummy; } ;
struct TYPE_2__ {struct serio* serio; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int*,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct serio *VAR_8)
{
 int VAR_9;
 int VAR_10;
 const char *VAR_11;

 if (VAR_8 == VAR_7[VAR_0].serio) {
  VAR_9 = VAR_3;
  VAR_10 = VAR_2;
  VAR_11 = "AUX";
 } else {
  VAR_9 = VAR_5;
  VAR_10 = VAR_4;
  VAR_11 = "KBD";
 }

 VAR_6 &= ~VAR_9;
 if (FUNC_0(&VAR_6, VAR_1))
  FUNC_3("Can't write CTR while closing %s port\n", VAR_11);

 FUNC_4(50);

 VAR_6 &= ~VAR_10;
 VAR_6 |= VAR_9;
 if (FUNC_0(&VAR_6, VAR_1))
  FUNC_2("Can't reactivate %s port\n", VAR_11);





 FUNC_1(0, ((void*)0));
}
