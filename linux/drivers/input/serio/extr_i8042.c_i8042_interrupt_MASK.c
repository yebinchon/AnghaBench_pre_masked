
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct i8042_port {int driver_bound; struct serio* serio; scalar_t__ exists; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (int) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (char*,unsigned char,...) ;
 int FUNC_2 (int ,unsigned char,char*,unsigned int,int,char*,char*) ;
 int FUNC_3 (unsigned char,unsigned char,struct serio*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 struct i8042_port* VAR_14 ;
 unsigned char FUNC_4 () ;
 unsigned char FUNC_5 () ;
 unsigned long VAR_15 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct serio*,unsigned char,unsigned int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_11 (unsigned char) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_16, void *VAR_17)
{
 struct i8042_port *VAR_18;
 struct serio *VAR_19;
 unsigned long VAR_20;
 unsigned char VAR_21, VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 bool VAR_25;
 int VAR_26 = 1;

 FUNC_8(&VAR_11, VAR_20);

 VAR_21 = FUNC_5();
 if (FUNC_11(~VAR_21 & VAR_6)) {
  FUNC_9(&VAR_11, VAR_20);
  if (VAR_16)
   FUNC_1("Interrupt %d, without any data\n", VAR_16);
  VAR_26 = 0;
  goto out;
 }

 VAR_22 = FUNC_4();

 if (VAR_12 && (VAR_21 & VAR_4)) {
  static unsigned long VAR_27;
  static unsigned char VAR_28;

  VAR_23 = 0;
  if (VAR_21 & VAR_5) {
   FUNC_1("MUX error, status is %02x, data is %02x\n",
       VAR_21, VAR_22);
   switch (VAR_22) {
    default:
     if (FUNC_10(VAR_15, VAR_27 + VAR_0/10)) {
      VAR_21 = VAR_28;
      break;
     }

    case 0xfc:
    case 0xfd:
    case 0xfe: VAR_23 = VAR_10; VAR_22 = 0xfe; break;
    case 0xff: VAR_23 = VAR_9; VAR_22 = 0xfe; break;
   }
  }

  VAR_24 = VAR_3 + ((VAR_21 >> 6) & 3);
  VAR_28 = VAR_21;
  VAR_27 = VAR_15;
 } else {

  VAR_23 = ((VAR_21 & VAR_7) ? VAR_9 : 0) |
        ((VAR_21 & VAR_8 && !VAR_13) ? VAR_10 : 0);

  VAR_24 = (VAR_21 & VAR_4) ?
    VAR_1 : VAR_2;
 }

 VAR_18 = &VAR_14[VAR_24];
 VAR_19 = VAR_18->exists ? VAR_18->serio : ((void*)0);

 FUNC_2(VAR_18->driver_bound, VAR_22, "<- i8042 (interrupt, %d, %d%s%s)\n",
     VAR_24, VAR_16,
     VAR_23 & VAR_9 ? ", bad parity" : "",
     VAR_23 & VAR_10 ? ", timeout" : "");

 VAR_25 = FUNC_3(VAR_22, VAR_21, VAR_19);

 FUNC_9(&VAR_11, VAR_20);

 if (FUNC_6(VAR_19 && !VAR_25))
  FUNC_7(VAR_19, VAR_22, VAR_23);

 out:
 return FUNC_0(VAR_26);
}
