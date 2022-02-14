
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ u_char ;
typedef scalar_t__ saidx_t ;
typedef int off_t ;
typedef int FILE ;
typedef int BZFILE ;


 int FUNC_0 (int*,int *,scalar_t__*,int) ;
 int FUNC_1 (int*,int *,int ,int *,int *) ;
 int * FUNC_2 (int*,int *,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (int,char*,...) ;
 int VAR_9 ;
 int FUNC_6 (int,char*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__*,int,int,int *) ;
 scalar_t__ FUNC_13 (int,int ,int ) ;
 scalar_t__* FUNC_14 (int) ;
 int FUNC_15 (scalar_t__*,char*,int) ;
 int FUNC_16 (int,scalar_t__*) ;
 int FUNC_17 (char*,int,int ) ;
 int FUNC_18 (int,scalar_t__*,int) ;
 int FUNC_19 (scalar_t__*,scalar_t__*,int,scalar_t__*,int,int ,int,int*) ;
 int FUNC_20 () ;

int FUNC_21(int VAR_10,char *VAR_11[])
{
 int VAR_12;
 u_char *VAR_13,*VAR_14;
 off_t VAR_15,VAR_16;
 saidx_t *VAR_17;
 off_t VAR_18,VAR_19,VAR_20;
 off_t VAR_21,VAR_22,VAR_23;
 off_t VAR_24,VAR_25;
 off_t VAR_26,VAR_27,VAR_28,VAR_29,VAR_30;
 off_t VAR_31,VAR_32,VAR_33;
 off_t VAR_34;
 off_t VAR_35,VAR_36;
 u_char *VAR_37,*VAR_38;
 u_char VAR_39[8];
 u_char VAR_40[32];
 FILE * VAR_41;
 BZFILE * VAR_42;
 int VAR_43;

 if (VAR_10 != 4)
  FUNC_20();



 if(((VAR_12=FUNC_17(VAR_11[1],VAR_4|VAR_3,0))<0) ||
     ((VAR_15=FUNC_13(VAR_12,0,VAR_5))==-1))
  FUNC_5(1, "%s", VAR_11[1]);

 if (VAR_15 > VAR_8 ||
     (uintmax_t)VAR_15 >= VAR_7 / sizeof(off_t) ||
     VAR_15 == VAR_2) {
  VAR_9 = VAR_1;
  FUNC_5(1, "%s", VAR_11[1]);
 }

 if (((VAR_13=FUNC_14(VAR_15+1))==((void*)0)) ||
  (FUNC_13(VAR_12,0,VAR_6)!=0) ||
  (FUNC_18(VAR_12,VAR_13,VAR_15)!=VAR_15) ||
  (FUNC_3(VAR_12)==-1)) FUNC_5(1,"%s",VAR_11[1]);

 if(((VAR_17=FUNC_14((VAR_15+1)*sizeof(saidx_t)))==((void*)0))) FUNC_5(1,((void*)0));

 if(FUNC_4(VAR_13, VAR_17, VAR_15)) FUNC_5(1, "divsufsort");



 if(((VAR_12=FUNC_17(VAR_11[2],VAR_4|VAR_3,0))<0) ||
     ((VAR_16=FUNC_13(VAR_12,0,VAR_5))==-1))
  FUNC_5(1, "%s", VAR_11[2]);

 if (VAR_16 > VAR_8 || (uintmax_t)VAR_16 >= VAR_7 ||
     VAR_16 == VAR_2) {
  VAR_9 = VAR_1;
  FUNC_5(1, "%s", VAR_11[2]);
 }

 if (((VAR_14=FUNC_14(VAR_16+1))==((void*)0)) ||
  (FUNC_13(VAR_12,0,VAR_6)!=0) ||
  (FUNC_18(VAR_12,VAR_14,VAR_16)!=VAR_16) ||
  (FUNC_3(VAR_12)==-1)) FUNC_5(1,"%s",VAR_11[2]);

 if(((VAR_37=FUNC_14(VAR_16+1))==((void*)0)) ||
  ((VAR_38=FUNC_14(VAR_16+1))==((void*)0))) FUNC_5(1,((void*)0));
 VAR_35=0;
 VAR_36=0;


 if ((VAR_41 = FUNC_8(VAR_11[3], "wb")) == ((void*)0))
  FUNC_5(1, "%s", VAR_11[3]);
 FUNC_15(VAR_40,"BSDIFF40",8);
 FUNC_16(0, VAR_40 + 8);
 FUNC_16(0, VAR_40 + 16);
 FUNC_16(VAR_16, VAR_40 + 24);
 if (FUNC_12(VAR_40, 32, 1, VAR_41) != 1)
  FUNC_5(1, "fwrite(%s)", VAR_11[3]);


 if ((VAR_42 = FUNC_2(&VAR_43, VAR_41, 9, 0, 0)) == ((void*)0))
  FUNC_6(1, "BZ2_bzWriteOpen, bz2err = %d", VAR_43);
 VAR_18=0;VAR_20=0;VAR_19=0;
 VAR_21=0;VAR_22=0;VAR_23=0;
 while(VAR_18<VAR_16) {
  VAR_24=0;

  for(VAR_25=VAR_18+=VAR_20;VAR_18<VAR_16;VAR_18++) {
   VAR_20=FUNC_19(VAR_17,VAR_13,VAR_15,VAR_14+VAR_18,VAR_16-VAR_18,
     0,VAR_15,&VAR_19);

   for(;VAR_25<VAR_18+VAR_20;VAR_25++)
   if((VAR_25+VAR_23<VAR_15) &&
    (VAR_13[VAR_25+VAR_23] == VAR_14[VAR_25]))
    VAR_24++;

   if(((VAR_20==VAR_24) && (VAR_20!=0)) ||
    (VAR_20>VAR_24+8)) break;

   if((VAR_18+VAR_23<VAR_15) &&
    (VAR_13[VAR_18+VAR_23] == VAR_14[VAR_18]))
    VAR_24--;
  }

  if((VAR_20!=VAR_24) || (VAR_18==VAR_16)) {
   VAR_26=0;VAR_27=0;VAR_28=0;
   for(VAR_34=0;(VAR_21+VAR_34<VAR_18)&&(VAR_22+VAR_34<VAR_15);) {
    if(VAR_13[VAR_22+VAR_34]==VAR_14[VAR_21+VAR_34]) VAR_26++;
    VAR_34++;
    if(VAR_26*2-VAR_34>VAR_27*2-VAR_28) { VAR_27=VAR_26; VAR_28=VAR_34; }
   }

   VAR_30=0;
   if(VAR_18<VAR_16) {
    VAR_26=0;VAR_29=0;
    for(VAR_34=1;(VAR_18>=VAR_21+VAR_34)&&(VAR_19>=VAR_34);VAR_34++) {
     if(VAR_13[VAR_19-VAR_34]==VAR_14[VAR_18-VAR_34]) VAR_26++;
     if(VAR_26*2-VAR_34>VAR_29*2-VAR_30) { VAR_29=VAR_26; VAR_30=VAR_34; }
    }
   }

   if(VAR_21+VAR_28>VAR_18-VAR_30) {
    VAR_31=(VAR_21+VAR_28)-(VAR_18-VAR_30);
    VAR_26=0;VAR_32=0;VAR_33=0;
    for(VAR_34=0;VAR_34<VAR_31;VAR_34++) {
     if(VAR_14[VAR_21+VAR_28-VAR_31+VAR_34]==
        VAR_13[VAR_22+VAR_28-VAR_31+VAR_34]) VAR_26++;
     if(VAR_14[VAR_18-VAR_30+VAR_34]==
        VAR_13[VAR_19-VAR_30+VAR_34]) VAR_26--;
     if(VAR_26>VAR_32) { VAR_32=VAR_26; VAR_33=VAR_34+1; }
    }

    VAR_28+=VAR_33-VAR_31;
    VAR_30-=VAR_33;
   }

   for(VAR_34=0;VAR_34<VAR_28;VAR_34++)
    VAR_37[VAR_35+VAR_34]=VAR_14[VAR_21+VAR_34]-VAR_13[VAR_22+VAR_34];
   for(VAR_34=0;VAR_34<(VAR_18-VAR_30)-(VAR_21+VAR_28);VAR_34++)
    VAR_38[VAR_36+VAR_34]=VAR_14[VAR_21+VAR_28+VAR_34];

   VAR_35+=VAR_28;
   VAR_36+=(VAR_18-VAR_30)-(VAR_21+VAR_28);

   FUNC_16(VAR_28,VAR_39);
   FUNC_0(&VAR_43, VAR_42, VAR_39, 8);
   if (VAR_43 != VAR_0)
    FUNC_6(1, "BZ2_bzWrite, bz2err = %d", VAR_43);

   FUNC_16((VAR_18-VAR_30)-(VAR_21+VAR_28),VAR_39);
   FUNC_0(&VAR_43, VAR_42, VAR_39, 8);
   if (VAR_43 != VAR_0)
    FUNC_6(1, "BZ2_bzWrite, bz2err = %d", VAR_43);

   FUNC_16((VAR_19-VAR_30)-(VAR_22+VAR_28),VAR_39);
   FUNC_0(&VAR_43, VAR_42, VAR_39, 8);
   if (VAR_43 != VAR_0)
    FUNC_6(1, "BZ2_bzWrite, bz2err = %d", VAR_43);

   VAR_21=VAR_18-VAR_30;
   VAR_22=VAR_19-VAR_30;
   VAR_23=VAR_19-VAR_18;
  }
 }
 FUNC_1(&VAR_43, VAR_42, 0, ((void*)0), ((void*)0));
 if (VAR_43 != VAR_0)
  FUNC_6(1, "BZ2_bzWriteClose, bz2err = %d", VAR_43);


 if ((VAR_20 = FUNC_11(VAR_41)) == -1)
  FUNC_5(1, "ftello");
 FUNC_16(VAR_20-32, VAR_40 + 8);


 if ((VAR_42 = FUNC_2(&VAR_43, VAR_41, 9, 0, 0)) == ((void*)0))
  FUNC_6(1, "BZ2_bzWriteOpen, bz2err = %d", VAR_43);
 FUNC_0(&VAR_43, VAR_42, VAR_37, VAR_35);
 if (VAR_43 != VAR_0)
  FUNC_6(1, "BZ2_bzWrite, bz2err = %d", VAR_43);
 FUNC_1(&VAR_43, VAR_42, 0, ((void*)0), ((void*)0));
 if (VAR_43 != VAR_0)
  FUNC_6(1, "BZ2_bzWriteClose, bz2err = %d", VAR_43);


 if ((VAR_16 = FUNC_11(VAR_41)) == -1)
  FUNC_5(1, "ftello");
 FUNC_16(VAR_16 - VAR_20, VAR_40 + 16);


 if ((VAR_42 = FUNC_2(&VAR_43, VAR_41, 9, 0, 0)) == ((void*)0))
  FUNC_6(1, "BZ2_bzWriteOpen, bz2err = %d", VAR_43);
 FUNC_0(&VAR_43, VAR_42, VAR_38, VAR_36);
 if (VAR_43 != VAR_0)
  FUNC_6(1, "BZ2_bzWrite, bz2err = %d", VAR_43);
 FUNC_1(&VAR_43, VAR_42, 0, ((void*)0), ((void*)0));
 if (VAR_43 != VAR_0)
  FUNC_6(1, "BZ2_bzWriteClose, bz2err = %d", VAR_43);


 if (FUNC_10(VAR_41, 0, VAR_6))
  FUNC_5(1, "fseeko");
 if (FUNC_12(VAR_40, 32, 1, VAR_41) != 1)
  FUNC_5(1, "fwrite(%s)", VAR_11[3]);
 if (FUNC_7(VAR_41))
  FUNC_5(1, "fclose");


 FUNC_9(VAR_37);
 FUNC_9(VAR_38);
 FUNC_9(VAR_17);
 FUNC_9(VAR_13);
 FUNC_9(VAR_14);

 return 0;
}
