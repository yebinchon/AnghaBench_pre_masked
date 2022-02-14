
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_type {int sectrac; int secsize; int tracks; int heads; int f_inter; int f_gap; int trans; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int,int,int,int,int ,int ,int,int,int ) ;
 int FUNC_6 (int *,char*,int,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,char**,char*) ;
 scalar_t__ FUNC_9 (int,int ,struct fd_type*) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,long,int ) ;
 char* FUNC_12 (int) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,int ,int) ;
 int FUNC_15 (char const*,int ) ;
 char const* VAR_4 ;
 int VAR_5 ;
 int FUNC_16 (char*,int,...) ;
 int FUNC_17 (char,int *) ;
 int FUNC_18 (int,char*,int) ;
 int FUNC_19 (int *,int ) ;
 int * VAR_6 ;
 int FUNC_20 () ;
 int FUNC_21 (int,char*,int) ;

int
FUNC_22(int VAR_7, char **VAR_8)
{
    int VAR_9 = -1, VAR_10, VAR_11 = 0, VAR_12,VAR_13,VAR_14;
    int VAR_15, VAR_16=1, VAR_17=0, VAR_18;
    int VAR_19 = 1;
    const char *VAR_20= "/dev/fd0";
    char *VAR_21 = 0,*VAR_22 = 0;
    struct fd_type VAR_23;
    FILE *VAR_24;

    FUNC_19(VAR_6,0);
    while((VAR_10 = FUNC_8(VAR_7, VAR_8, "d:f:vy")) != -1)
     switch(VAR_10) {
     case 'd':
      VAR_20 = VAR_4;
      break;

     case 'f':
      if (VAR_9 >= 0)
       FUNC_0(VAR_9);
      VAR_9 = FUNC_15(VAR_4,VAR_1);
      if (VAR_9 < 0)
       FUNC_1(1, "%s", VAR_4);
      break;

     case 'v':
      VAR_16 = !VAR_16;
      break;

     case 'y':
      VAR_19 = 0;
      break;

     case '?': default:
      FUNC_20();
     }

    if (VAR_9 < 0)
 VAR_9 = 0;

    if (!FUNC_10(1))
 VAR_19 = 0;

    if(VAR_5 < VAR_7)
     FUNC_20();

    VAR_24 = FUNC_4(VAR_3,"r+");
    if(!VAR_24)
     FUNC_1(1, VAR_3);
    FUNC_19(VAR_24,0);

    for(VAR_13=1;VAR_13 > 0;) {
        VAR_11++;
 if (VAR_19) {
     FUNC_6(VAR_24,
      "Please insert floppy #%d in drive %s and press return >",
      VAR_11,VAR_20);
     while(1) {
  VAR_12 = FUNC_7(VAR_24);
  if(VAR_12 == '\n') break;
     }
 }

 if((VAR_14 = FUNC_15(VAR_20, VAR_2)) < 0)
     FUNC_1(1, "%s", VAR_20);

 if(FUNC_9(VAR_14, VAR_0, &VAR_23) < 0)
     FUNC_2(1, "not a floppy disk: %s", VAR_20);

 VAR_15 = VAR_23.sectrac * (1<<VAR_23.secsize) * 128;
 if(!VAR_21) {
     VAR_21 = FUNC_12(VAR_15);
     if(!VAR_21) FUNC_2(1, "malloc");
 }
 if(!VAR_22) {
     VAR_22 = FUNC_12(VAR_15);
     if(!VAR_22) FUNC_2(1, "malloc");
 }

 if(VAR_11 == 1) {
     if(VAR_16) {
  FUNC_16("Format: %d cylinders, %d heads, %d sectors, %d bytes = %dkb\n",
  VAR_23.tracks,VAR_23.heads,VAR_23.sectrac,(1<<VAR_23.secsize) * 128,
  VAR_23.tracks*VAR_15*VAR_23.heads/1024);

     }
     FUNC_14(VAR_21,0,VAR_15);
     for(VAR_13=0;VAR_9 >= 0 && VAR_13<VAR_15;VAR_13+=VAR_12) {
  if(!(VAR_12 = FUNC_18(VAR_9,VAR_21+VAR_13,VAR_15-VAR_13))) {
      FUNC_0(VAR_9);
      VAR_9 = -1;
      break;
  }
  VAR_17 += VAR_12;
     }
 }
 for (VAR_18 = 0; VAR_18 < VAR_23.tracks * VAR_23.heads; VAR_18++) {
     if(VAR_16) FUNC_16("\r%3d ",VAR_23.tracks * VAR_23.heads-VAR_18);
     if(VAR_16) FUNC_17((VAR_13 ? 'I':'Z'),VAR_6);
     FUNC_5(VAR_14, VAR_18 / VAR_23.heads, VAR_23.sectrac, VAR_18 % VAR_23.heads,
      VAR_23.trans, VAR_23.f_gap, VAR_23.secsize, 0xe6,
      VAR_23.f_inter);
     if(VAR_16) FUNC_17('F',VAR_6);

     if (FUNC_11 (VAR_14, (long) VAR_18*VAR_15, 0) < 0) FUNC_1(1, "lseek");
     if (FUNC_21 (VAR_14, VAR_21, VAR_15) != VAR_15) FUNC_1(1, "write");
     if(VAR_16) FUNC_17('W',VAR_6);

     if (FUNC_11 (VAR_14, (long) VAR_18*VAR_15, 0) < 0) FUNC_1(1, "lseek");
     if (FUNC_18 (VAR_14, VAR_22, VAR_15) != VAR_15) FUNC_1(1, "read");
     if(VAR_16) FUNC_17('R',VAR_6);

     if (FUNC_13(VAR_21,VAR_22,VAR_15)) FUNC_1(1, "compare");
     if(VAR_16) FUNC_17('C',VAR_6);

     FUNC_14(VAR_21,0,VAR_15);
     for(VAR_13=0;VAR_9 >= 0 && VAR_13<VAR_15;VAR_13+=VAR_12) {
  if(!(VAR_12 = FUNC_18(VAR_9,VAR_21+VAR_13,VAR_15-VAR_13))) {
      FUNC_0(VAR_9);
      VAR_9 = -1;
      break;
  }
  VAR_17 += VAR_12;
     }
 }
 FUNC_0(VAR_14);
 FUNC_17('\r',VAR_6);
    }
    if(VAR_16)
 FUNC_16("%d bytes on %d flopp%s\n",VAR_17,VAR_11,VAR_11==1?"y":"ies");
    FUNC_3(0);
}
