
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seama_entity_header {int dummy; } ;
typedef size_t ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,size_t,int ) ;
 size_t FUNC_4 (char*,int,int ,int *) ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_3 ;
 int VAR_4 ;
 size_t FUNC_6 (int *,size_t,int) ;
 size_t FUNC_7 (int *,char*) ;
 size_t FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,size_t,size_t) ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_12(int VAR_7, char **VAR_8) {
 FILE *VAR_9;
 ssize_t VAR_10;
 size_t VAR_11 = sizeof(struct seama_entity_header);
 size_t VAR_12 = 0, VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 0;

 if (VAR_7 < 3) {
  FUNC_2(VAR_6, "No Seama file passed\n");
  VAR_15 = -VAR_1;
  goto out;
 }
 VAR_5 = VAR_8[2];

 VAR_9 = FUNC_1(VAR_5, "w+");
 if (!VAR_9) {
  FUNC_2(VAR_6, "Couldn't open %s\n", VAR_5);
  VAR_15 = -VAR_0;
  goto out;
 }
 FUNC_3(VAR_9, VAR_11, VAR_2);

 VAR_4 = 3;
 while ((VAR_14 = FUNC_5(VAR_7, VAR_8, "m:f:b:")) != -1) {
  switch (VAR_14) {
  case 'm':
   VAR_10 = FUNC_4(VAR_3, 1, FUNC_10(VAR_3) + 1, VAR_9);
   if (VAR_10 < 0) {
    FUNC_2(VAR_6, "Failed to write meta %s\n", VAR_3);
   } else {
    VAR_11 += VAR_10;
    VAR_12 += VAR_10;
   }

   VAR_10 = FUNC_6(VAR_9, VAR_11, 4);
   if (VAR_10 < 0) {
    FUNC_2(VAR_6, "Failed to append zeros\n");
   } else {
    VAR_11 += VAR_10;
    VAR_12 += VAR_10;
   }

   break;
  case 'f':
  case 'b':
   break;
  }
 }

 VAR_4 = 3;
 while ((VAR_14 = FUNC_5(VAR_7, VAR_8, "m:f:b:")) != -1) {
  switch (VAR_14) {
  case 'm':
   break;
  case 'f':
   VAR_10 = FUNC_7(VAR_9, VAR_3);
   if (VAR_10 < 0) {
    FUNC_2(VAR_6, "Failed to append file %s\n", VAR_3);
   } else {
    VAR_11 += VAR_10;
    VAR_13 += VAR_10;
   }
   break;
  case 'b':
   VAR_10 = FUNC_11(VAR_3, ((void*)0), 0) - VAR_11;
   if (VAR_10 < 0) {
    FUNC_2(VAR_6, "Current Seama entity length is 0x%zx, can't pad it with zeros to 0x%lx\n", VAR_11, FUNC_11(VAR_3, ((void*)0), 0));
   } else {
    VAR_10 = FUNC_8(VAR_9, VAR_10);
    if (VAR_10 < 0) {
     FUNC_2(VAR_6, "Failed to append zeros\n");
    } else {
     VAR_11 += VAR_10;
     VAR_13 += VAR_10;
    }
   }
   break;
  }
  if (VAR_15)
   break;
 }

 FUNC_9(VAR_9, VAR_12, VAR_13);

 FUNC_0(VAR_9);
out:
 return VAR_15;
}
