
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {char* cmdline; int cmdline_len; } ;
struct TYPE_3__ {int exit; int fixups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int* FUNC_2 (int ,int,char*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,char*,int) ;
 int FUNC_5 (int ,int) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int ) ;
 TYPE_1__ VAR_9 ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,unsigned long,int,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char**,int) ;
 int VAR_10 ;

void FUNC_14(char *VAR_11)
{
 unsigned long VAR_12, VAR_13;
 u32 VAR_14;
 int VAR_15, VAR_16;
 const u32 *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 char *VAR_21;

 VAR_11[VAR_1 - 1] = '\0';
 VAR_20 = FUNC_11(VAR_11);
 for (VAR_19 = 0; VAR_19 < VAR_20 - 15; VAR_19++) {
  if (FUNC_12(&VAR_11[VAR_19], "local-mac-addr=", 15) == 0) {
   if (VAR_19 > 0 && VAR_11[VAR_19 - 1] != ' ') {



    continue;
   }

   VAR_8 = FUNC_13(&VAR_11[VAR_19 + 15], &VAR_21, 16);




   if (*VAR_21 == ' ')
    VAR_21++;

   VAR_18 = ((int) VAR_21) - ((int) &VAR_11[VAR_19]);
   FUNC_7(&VAR_11[VAR_19], VAR_21,
    VAR_20 - (VAR_18 + VAR_19) + 1);
   break;
  }
 }

 VAR_7.cmdline = VAR_11;
 VAR_7.cmdline_len = 256;

 VAR_6 = FUNC_6();
 if (VAR_6 >> 32)
  VAR_12 = ~0UL;
 else
  VAR_12 = VAR_6;
 VAR_13 = VAR_12 - (unsigned long)VAR_3;

 FUNC_10(VAR_3, VAR_13, 128, 64);
 VAR_9.fixups = VAR_5;
 VAR_9.exit = VAR_4;
 VAR_14 = FUNC_8(VAR_0);


 if (FUNC_1(VAR_2) != 0)
  FUNC_0("Invalid device tree blob\n");

 VAR_15 = FUNC_4(VAR_2, -1, "device_type",
          "cpu", sizeof("cpu"));
 if (!VAR_15)
  FUNC_0("Cannot find cpu node\n");
 VAR_17 = FUNC_2(VAR_2, VAR_15, "timebase-frequency", &VAR_16);
 if (VAR_17 && (VAR_16 == 4))
  VAR_10 = 1000000000 / *VAR_17;

 FUNC_5(VAR_2, VAR_14);
 FUNC_3(VAR_2);

 FUNC_9();
}
