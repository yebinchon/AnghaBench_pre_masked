
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cal_entry {int id; int len; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct cal_entry*,int,int,int *) ;
 int FUNC_7 (int *,int,int ) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int,char**,char*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,int *,size_t,size_t) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (char*) ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;

int FUNC_15(int VAR_9, char **VAR_10)
{
 struct cal_entry VAR_11 = { .len = 0 };
 FILE *VAR_12 = VAR_7;
 FILE *VAR_13 = VAR_8;
 size_t VAR_14 = 0, VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = -1;
 int VAR_18;
 int VAR_19;

 while ((VAR_19 = FUNC_9(VAR_9, VAR_10, "s:e:o:l:i:")) != -1) {
  switch (VAR_19) {
  case 's':
   VAR_16 = (int)FUNC_8(VAR_4);
   if (VAR_3) {
    FUNC_12("Failed to parse seek offset");
    goto out_bad;
   }
   break;
  case 'e':
   VAR_17 = (int) FUNC_10(FUNC_8(VAR_4));
   if (VAR_3) {
    FUNC_12("Failed to entry id");
    goto out_bad;
   }
   break;
  case 'o':
   VAR_13 = FUNC_4(VAR_4, "w");
   if (!VAR_13) {
    FUNC_12("Failed to create output file");
    goto out_bad;
   }
   break;
  case 'l':
   VAR_14 = (size_t)FUNC_8(VAR_4);
   if (VAR_3) {
    FUNC_12("Failed to parse limit");
    goto out_bad;
   }
   break;
  case 'i':
   VAR_15 = (size_t)FUNC_8(VAR_4);
   if (VAR_3) {
    FUNC_12("Failed to parse skip");
    goto out_bad;
   }
   break;
  default:
   FUNC_13();
  }
 }

 if (VAR_17 == -1)
  FUNC_13();

 if (VAR_9 > 1 && VAR_5 <= VAR_9) {
  VAR_12 = FUNC_4(VAR_10[VAR_5], "r");
  if (!VAR_12) {
   FUNC_12("Failed to create output file");
   goto out_bad;
  }
 }

 if (VAR_16) {
  VAR_18 = FUNC_7(VAR_12, VAR_16, VAR_1);
  if (VAR_18) {
   FUNC_12("Failed to seek to calibration table");
   goto out_bad;
  }
 }

 do {
  VAR_18 = FUNC_7(VAR_12, FUNC_0(VAR_11.len), VAR_1);
  if (FUNC_2(VAR_12)) {
   FUNC_5(VAR_6, "Reached end of file, but didn't find the matching entry\n");
   goto out_bad;
  } else if (FUNC_3(VAR_12)) {
   FUNC_12("Failure during seek");
   goto out_bad;
  }

  VAR_18 = FUNC_6(&VAR_11, 1, sizeof VAR_11, VAR_12);
  if (VAR_18 != sizeof VAR_11)
   goto out_bad;
 } while (VAR_17 != VAR_11.id || VAR_11.id == 0xffff);

 if (VAR_11.id == 0xffff) {
  FUNC_5(VAR_6, "Reached end of filesystem, but didn't find the matching entry\n");
  goto out_bad;
 }

 VAR_18 = FUNC_11(VAR_12, VAR_13, VAR_14, VAR_15);
 if (VAR_18 == VAR_2)
  goto out;

 FUNC_14(VAR_18);

out_bad:
 VAR_18 = VAR_0;

out:
 FUNC_1(VAR_12);
 FUNC_1(VAR_13);
 return VAR_18;
}
