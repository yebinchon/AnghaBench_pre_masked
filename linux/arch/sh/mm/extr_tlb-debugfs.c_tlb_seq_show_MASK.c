
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_3__ {unsigned long bits; char* size; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned int VAR_14 ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct seq_file*,char*,...) ;
 TYPE_1__* VAR_15 ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_16, void *VAR_17)
{
 unsigned int VAR_18 = (unsigned int)VAR_16->private;
 unsigned long VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned long VAR_23;
 unsigned long VAR_24;
 unsigned int VAR_25, VAR_26;
 unsigned int VAR_27;

 VAR_24 = FUNC_1(VAR_0);
 if ((VAR_24 & 0x1) == 0) {
  FUNC_7(VAR_16, "address translation disabled\n");
  return 0;
 }

 if (VAR_18 == VAR_14) {
  VAR_19 = VAR_5;
  VAR_20 = VAR_6;
  VAR_21 = VAR_7;
  VAR_22 = VAR_8;
  VAR_25 = 4;
 } else {
  VAR_19 = VAR_10;
  VAR_20 = VAR_11;
  VAR_21 = VAR_12;
  VAR_22 = VAR_13;
  VAR_25 = 64;
 }

 FUNC_6(VAR_23);
 FUNC_4();

 VAR_27 = (VAR_24 & VAR_1) >> VAR_3;


 if (VAR_27 == 0)
  VAR_27 = VAR_2 + 1;

 if (VAR_18 == VAR_14) {
  VAR_19 = VAR_5;
  VAR_20 = VAR_6;
  VAR_21 = VAR_7;
  VAR_22 = VAR_8;
  VAR_25 = 4;
 } else {
  VAR_19 = VAR_10;
  VAR_20 = VAR_11;
  VAR_21 = VAR_12;
  VAR_22 = VAR_13;
  VAR_25 = 64;
 }

 FUNC_7(VAR_16, "entry:     vpn        ppn     asid  size valid wired\n");

 for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++) {
  unsigned long VAR_28, VAR_29, VAR_30, VAR_31;
  unsigned long VAR_32;
  unsigned long VAR_33;
  const char *VAR_34 = "    ?";
  int VAR_35;

  VAR_33 = FUNC_1(VAR_19 | (VAR_26 << VAR_9));
  FUNC_3();
  VAR_28 = VAR_33 & 0xfffffc00;
  VAR_32 = VAR_33 & 0x100;

  VAR_33 = FUNC_1(VAR_20 | (VAR_26 << VAR_9));
  FUNC_3();
  VAR_30 = VAR_33 & VAR_4;

  VAR_33 = FUNC_1(VAR_21 | (VAR_26 << VAR_9));
  FUNC_3();
  VAR_29 = (VAR_33 & 0x0ffffc00) << 4;

  VAR_33 = FUNC_1(VAR_22 | (VAR_26 << VAR_9));
  FUNC_3();
  VAR_31 = (VAR_33 & 0xf0) >> 4;

  for (VAR_35 = 0; VAR_35 < FUNC_0(VAR_15); VAR_35++) {
   if (VAR_15[VAR_35].bits == VAR_31)
    break;
  }

  if (VAR_35 != FUNC_0(VAR_15))
   VAR_34 = VAR_15[VAR_35].size;

  FUNC_7(VAR_16, "%2d:    0x%08lx 0x%08lx %5lu %s   %s     %s\n",
      VAR_26, VAR_28, VAR_29, VAR_30,
      VAR_34, VAR_32 ? "V" : "-",
      (VAR_27 <= VAR_26) ? "W" : "-");
 }

 FUNC_2();
 FUNC_5(VAR_23);

 return 0;
}
