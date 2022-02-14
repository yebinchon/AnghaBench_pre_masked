
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tr_sendrecv ;
typedef int thishost ;
struct printer {char* stat_send; char* stat_recv; char* lp; char* tr_timestr; char* printer; char* jobnum; int jobdfnum; int tr_start; int tr_done; } ;


 double FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (char*) ;
 char* VAR_4 ;
 int FUNC_2 (int) ;
 char* VAR_5 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int *,size_t) ;
 int FUNC_5 (char const*,int,int) ;
 int FUNC_6 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int,char*,int) ;

void
FUNC_11(struct printer *VAR_6, tr_sendrecv VAR_7, size_t VAR_8,
    const char *VAR_9, const char *VAR_10, const char *VAR_11)
{

 double VAR_12;
 size_t VAR_13;
 int VAR_14;
 char VAR_15[VAR_0], VAR_16[1024];
 char *VAR_17;
 const char *VAR_18, *VAR_19, *VAR_20, *VAR_21;
 const char *VAR_22, *VAR_23;





 FUNC_4(&VAR_6->tr_done, ((void*)0), (size_t)0);
 VAR_12 = FUNC_0(VAR_6->tr_done, VAR_6->tr_start);

 FUNC_3(VAR_15, sizeof(VAR_15));
 VAR_18 = VAR_22 = VAR_20 = VAR_19 = ((void*)0);
 switch (VAR_7) {
     case 128:
  VAR_21 = "send";
  VAR_23 = VAR_6->stat_send;
  VAR_22 = VAR_15;
  VAR_20 = VAR_10;
  break;
     case 129:
  VAR_21 = "recv";
  VAR_23 = VAR_6->stat_recv;
  VAR_22 = VAR_10;
  VAR_20 = VAR_15;
  break;
     case 130:





  VAR_21 = "prnt";
  VAR_23 = VAR_6->stat_send;
  VAR_22 = VAR_15;
  VAR_19 = VAR_4;
  if (VAR_6->lp) VAR_19 = VAR_6->lp;
  break;
     default:

  return;
 }
 if (VAR_23 == ((void*)0))
  return;
 if (VAR_11 && (*VAR_11 != '\0'))
  VAR_18 = VAR_11;
 else
  VAR_18 = ".na.";
 if (*VAR_9 == '\0')
  VAR_9 = ((void*)0);
 FUNC_6(VAR_16, 1024, "%s %s %s %s %03ld %s",
     VAR_6->tr_timestr, VAR_6->printer, VAR_18, VAR_6->jobnum,
     VAR_6->jobdfnum, VAR_21);
 do { VAR_17 = strchr(VAR_16, '\0'); VAR_13 = VAR_17 - VAR_16; } while(0);

 if (VAR_9 != ((void*)0)) {
  FUNC_6(VAR_17, VAR_13, " user=%s", VAR_9);
  do { VAR_17 = FUNC_0(VAR_16, '\0'); VAR_13 = VAR_17 - VAR_16; } while(0);
 }
 FUNC_6(VAR_17, VAR_13, " secs=%#.2f bytes=%lu", VAR_12,
     (unsigned long)VAR_8);
 do { VAR_17 = FUNC_0(VAR_16, '\0'); VAR_13 = VAR_17 - VAR_16; } while(0);





 if ((VAR_8 > 25000) && (VAR_12 > 1.1)) {
  FUNC_6(VAR_17, VAR_13, " bps=%#.2e",
      ((double)VAR_8/VAR_12));
  do { VAR_17 = FUNC_0(VAR_16, '\0'); VAR_13 = VAR_17 - VAR_16; } while(0);
 }

 if (VAR_7 == 129) {
  if (VAR_13 > 5+FUNC_9(VAR_5) ) {
   FUNC_6(VAR_17, VAR_13, " sip=%s", VAR_5);
   do { VAR_17 = FUNC_0(VAR_16, '\0'); VAR_13 = VAR_17 - VAR_16; } while(0);
  }
 }
 if (0 != FUNC_7(VAR_18, VAR_22)) {
  if (VAR_13 > 7+FUNC_9(VAR_22) ) {
   FUNC_6(VAR_17, VAR_13, " shost=%s", VAR_22);
   do { VAR_17 = FUNC_0(VAR_16, '\0'); VAR_13 = VAR_17 - VAR_16; } while(0);
  }
 }
 if (VAR_20) {
  if (VAR_13 > 7+FUNC_9(VAR_20) ) {
   FUNC_6(VAR_17, VAR_13, " rhost=%s", VAR_20);
   do { VAR_17 = FUNC_0(VAR_16, '\0'); VAR_13 = VAR_17 - VAR_16; } while(0);
  }
 }
 if (VAR_19) {
  if (VAR_13 > 6+FUNC_9(VAR_19) ) {
   FUNC_6(VAR_17, VAR_13, " rdev=%s", VAR_19);
   do { VAR_17 = FUNC_0(VAR_16, '\0'); VAR_13 = VAR_17 - VAR_16; } while(0);
  }
 }
 if (VAR_13 > 1) {
  FUNC_8(VAR_17, "\n");
 } else {

  FUNC_8(VAR_16+1024 -2, "\n");
 }
 VAR_14 = FUNC_5(VAR_23, VAR_2|VAR_1, 0664);
 if (VAR_14 < 0) {


  return;
 }
 FUNC_10(VAR_14, VAR_16, FUNC_9(VAR_16));
 FUNC_2(VAR_14);

 return;

}
