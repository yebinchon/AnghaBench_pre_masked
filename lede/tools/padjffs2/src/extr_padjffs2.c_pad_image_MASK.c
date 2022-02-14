
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ssize_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int ,int ) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,float,int) ;
 int FUNC_9 (char*,int ) ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int,char*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(char *VAR_9, uint32_t VAR_10)
{
 char *VAR_11;
 int VAR_12;
 int VAR_13;
 ssize_t VAR_14;
 ssize_t VAR_15;
 int VAR_16 = -1;

 VAR_11 = FUNC_7(VAR_0);
 if (!VAR_11) {
  FUNC_1("No memory for buffer");
  goto out;
 }

 VAR_12 = FUNC_9(VAR_9, VAR_1);
 if (VAR_12 < 0) {
  FUNC_2("Unable to open %s", VAR_9);
  goto free_buf;
 }

 VAR_14 = FUNC_6(VAR_12, 0, VAR_2);
 if (VAR_14 < 0)
  goto close;

 if (!VAR_6)
  VAR_13 = VAR_12;
 else
  VAR_13 = VAR_3;

 FUNC_8(VAR_11, '\xff', VAR_0);

 VAR_14 += VAR_8;

 VAR_15 = VAR_14;
 while (VAR_10) {
  uint32_t VAR_17;
  ssize_t VAR_18;
  int VAR_19;

  for (VAR_19 = 10; VAR_19 < 32; VAR_19++) {
   VAR_17 = 1UL << VAR_19;
   if (VAR_10 & VAR_17)
    break;
  }

  VAR_14 = FUNC_0(VAR_14, VAR_17);

  for (VAR_19 = 10; VAR_19 < 32; VAR_19++) {
   VAR_17 = 1UL << VAR_19;
   if ((VAR_14 & (VAR_17 - 1)) == 0)
    VAR_10 &= ~VAR_17;
  }

  FUNC_4(VAR_7, "padding image to %08x\n", (unsigned int) VAR_14 - VAR_8);

  while (VAR_15 < VAR_14) {
   ssize_t VAR_20;

   VAR_20 = VAR_14 - VAR_15;
   if (VAR_20 > VAR_0)
    VAR_20 = VAR_0;

   VAR_18 = FUNC_10(VAR_13, VAR_11, VAR_20);
   if (VAR_18 != VAR_20) {
    FUNC_2("Unable to write to %s", VAR_9);
    goto close;
   }

   VAR_15 += VAR_20;
  }


  VAR_18 = FUNC_10(VAR_13, VAR_4, VAR_5);
  if (VAR_18 != VAR_5) {
   FUNC_2("Unable to write to %s", VAR_9);
   goto close;
  }
  VAR_15 += VAR_5;
 }

 VAR_16 = 0;

close:
 FUNC_3(VAR_12);
free_buf:
 FUNC_5(VAR_11);
out:
 return VAR_16;
}
