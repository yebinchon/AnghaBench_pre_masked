
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct stmpe_gpio {struct stmpe* stmpe; } ;
struct stmpe {size_t* regs; int partnum; } ;
struct seq_file {int dummy; } ;
struct gpio_chip {int dummy; } ;


 size_t FUNC_0 (unsigned int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct stmpe_gpio* FUNC_1 (struct gpio_chip*) ;
 char* FUNC_2 (struct gpio_chip*,unsigned int) ;
 int FUNC_3 (struct seq_file*,char*,unsigned int,char*,char*,...) ;
 int FUNC_4 (struct gpio_chip*,unsigned int) ;
 int FUNC_5 (struct stmpe*,size_t) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_6,
          struct gpio_chip *VAR_7,
          unsigned VAR_8, unsigned VAR_9)
{
 struct stmpe_gpio *VAR_10 = FUNC_1(VAR_7);
 struct stmpe *VAR_11 = VAR_10->stmpe;
 const char *VAR_12 = FUNC_2(VAR_7, VAR_8);
 bool VAR_13 = !!FUNC_4(VAR_7, VAR_8);
 u8 VAR_14 = VAR_8 / 8;
 u8 VAR_15 = VAR_11->regs[VAR_1 + VAR_14];
 u8 VAR_16 = FUNC_0(VAR_8 % 8);
 int VAR_17;
 u8 VAR_18;

 VAR_17 = FUNC_5(VAR_11, VAR_15);
 if (VAR_17 < 0)
  return;
 VAR_18 = !!(VAR_17 & VAR_16);

 if (VAR_18) {
  FUNC_3(VAR_6, " gpio-%-3d (%-20.20s) out %s",
      VAR_9, VAR_12 ?: "(none)",
      VAR_13 ? "hi" : "lo");
 } else {
  u8 VAR_19;
  u8 VAR_20;
  u8 VAR_21;
  u8 VAR_22;

  static const char * const VAR_23[] = {
   "edge-inactive",
   "edge-asserted",
   "not-supported"
  };
  static const char * const VAR_24[] = {
   "no-rising-edge-detection",
   "rising-edge-detection",
   "not-supported"
  };
  static const char * const VAR_25[] = {
   "no-falling-edge-detection",
   "falling-edge-detection",
   "not-supported"
  };

  u8 VAR_26 = 2;
  u8 VAR_27 = 2;
  u8 VAR_28 = 2;
  bool VAR_29;

  switch (VAR_11->partnum) {
  case 130:
  case 128:
  case 134:
  case 132:
  case 131:
   VAR_19 = VAR_11->regs[VAR_2 + VAR_14];
   VAR_17 = FUNC_5(VAR_11, VAR_19);
   if (VAR_17 < 0)
    return;
   VAR_26 = !!(VAR_17 & VAR_16);

  case 133:
   VAR_20 = VAR_11->regs[VAR_4 + VAR_14];
   VAR_21 = VAR_11->regs[VAR_3 + VAR_14];

   VAR_17 = FUNC_5(VAR_11, VAR_20);
   if (VAR_17 < 0)
    return;
   VAR_27 = !!(VAR_17 & VAR_16);
   VAR_17 = FUNC_5(VAR_11, VAR_21);
   if (VAR_17 < 0)
    return;
   VAR_28 = !!(VAR_17 & VAR_16);

  case 129:
  case 135:
   VAR_22 = VAR_11->regs[VAR_5 + VAR_14];
   break;

  default:
   return;
  }

  VAR_17 = FUNC_5(VAR_11, VAR_22);
  if (VAR_17 < 0)
   return;
  VAR_29 = !!(VAR_17 & VAR_16);

  FUNC_3(VAR_6, " gpio-%-3d (%-20.20s) in  %s %13s %13s %25s %25s",
      VAR_9, VAR_12 ?: "(none)",
      VAR_13 ? "hi" : "lo",
      VAR_23[VAR_26],
      VAR_29 ? "IRQ-enabled" : "IRQ-disabled",
      VAR_24[VAR_27],
      VAR_25[VAR_28]);
 }
}
