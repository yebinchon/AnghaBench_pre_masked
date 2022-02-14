
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
struct athregrec {int op; } ;
struct TYPE_2__ {int chipnum; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct athregrec*,struct athregrec*,int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 void* FUNC_3 (int ,int,int ,int,int,int ) ;
 int FUNC_4 (struct athregrec*) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (int ,int,struct athregrec*) ;
 int FUNC_7 (int ,int,struct athregrec*) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (char) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

int
FUNC_10(int VAR_7, char *VAR_8[])
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 struct stat VAR_13;
 void *VAR_14;
 const char *VAR_15 = "/tmp/ath_hal.log";
 struct athregrec *VAR_16;

 if (VAR_7 > 1)
  VAR_15 = VAR_8[1];
 VAR_9 = FUNC_5(VAR_15, VAR_3);
 if (VAR_9 < 0)
  FUNC_1(1, "open: %s", VAR_15);
 if (FUNC_2(VAR_9, &VAR_13) < 0)
  FUNC_1(1, "fstat");
 VAR_14 = FUNC_3(0, VAR_13.st_size, VAR_4, VAR_2|VAR_1, VAR_9, 0);
 if (VAR_14 == VAR_0)
  FUNC_1(1, "mmap");
 VAR_11 = VAR_13.st_size / sizeof (struct athregrec);
 FUNC_8("%u records", VAR_11);
 VAR_16 = ((void*)0);
 VAR_12 = 0;
 VAR_5.chipnum = 5210;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  struct athregrec *VAR_17 = &((struct athregrec *) VAR_14)[VAR_10];
  if (VAR_16 && FUNC_0(VAR_17, VAR_16, sizeof (*VAR_17)) == 0) {
   VAR_12++;
   continue;
  }
  if (VAR_12)
   FUNC_8("\t\t+%u time%s", VAR_12, VAR_12 == 1 ? "" : "s");
  switch (VAR_17->op) {
  case 131:
   FUNC_4(VAR_17);
   break;
  case 129:
  case 128:
   FUNC_7(VAR_6, VAR_10, VAR_17);
   break;
  case 130:
   FUNC_6(VAR_6, VAR_10, VAR_17);
   break;
  }
  VAR_16 = VAR_17;
  VAR_12 = 0;
 }
 FUNC_9('\n');
 return 0;
}
