
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,int,int ) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int,char*,int) ;
 int VAR_6 ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10 = 0, VAR_11 = 0;
 int VAR_12;
 char *VAR_13;

 if (VAR_5 < 2)
  FUNC_1(VAR_6, "Dumping %s ...\n", VAR_7);

 VAR_12 = FUNC_5(VAR_7);
 if(VAR_12 < 0) {
  FUNC_1(VAR_6, "Could not open mtd device: %s\n", VAR_7);
  return -1;
 }

 if (!VAR_9)
  VAR_9 = VAR_4;

 if (VAR_8)
  FUNC_2(VAR_12, VAR_8, VAR_1);

 VAR_13 = FUNC_3(VAR_2);
 if (!VAR_13)
  return -1;

 do {
  int VAR_14 = (VAR_9 > VAR_2) ? (VAR_2) : (VAR_9);
  int VAR_15 = FUNC_6(VAR_12, VAR_13, VAR_14);

  if (VAR_15 < 0) {
   if (VAR_3 == VAR_0)
    continue;
   VAR_10 = -1;
   goto out;
  }
  if (!VAR_15 || VAR_15 != VAR_14)
   break;
  if (FUNC_4(VAR_12, VAR_11)) {
   FUNC_1(VAR_6, "skipping bad block at 0x%08x\n", VAR_11);
  } else {
   VAR_9 -= VAR_15;
   FUNC_7(1, VAR_13, VAR_15);
  }
  VAR_11 += VAR_15;
 } while (VAR_9 > 0);

out:
 FUNC_0(VAR_12);
 return VAR_10;
}
