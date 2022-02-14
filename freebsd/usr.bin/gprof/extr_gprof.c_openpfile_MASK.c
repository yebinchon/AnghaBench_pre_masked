
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ophdr {int dummy; } ;
struct gmonhdr {scalar_t__ lpc; scalar_t__ hpc; scalar_t__ ncnt; scalar_t__ version; int profrate; int histcounter_type; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int,char*,char*,...) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (struct gmonhdr*,int,int,int *) ;
 int FUNC_5 (int *,int,int ) ;
 struct gmonhdr VAR_6 ;
 int FUNC_6 () ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (char*,int,...) ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;

FILE *
FUNC_8(char *VAR_16)
{
    struct gmonhdr VAR_17;
    FILE *VAR_18;
    int VAR_19;
    int VAR_20;

    if((VAR_18 = FUNC_3(VAR_16, "r")) == ((void*)0))
 FUNC_1(1, "%s", VAR_16);
    FUNC_4(&VAR_17, sizeof(struct gmonhdr), 1, VAR_18);
    if ( VAR_13 != 0 && ( VAR_17.lpc != VAR_6.lpc ||
  VAR_17.hpc != VAR_6.hpc || VAR_17.ncnt != VAR_6.ncnt ) )
 FUNC_2(1, "%s: incompatible with first gmon file", VAR_16);
    VAR_6 = VAR_17;
    if ( VAR_6.version == VAR_1 ) {
 VAR_20 = VAR_6.profrate;
 VAR_19 = sizeof(struct gmonhdr);
    } else {
 FUNC_5(VAR_18, sizeof(struct ophdr), VAR_4);
 VAR_19 = sizeof(struct ophdr);
 VAR_6.profrate = VAR_20 = FUNC_6();
 VAR_6.version = VAR_1;
    }
    if (VAR_10 == 0) {
 VAR_10 = VAR_20;
    } else if (VAR_10 != VAR_20)
 FUNC_2(0, "%s: profile clock rate (%d) %s (%ld) in first gmon file",
     VAR_16, VAR_20, "incompatible with clock rate", VAR_10);
    if ( VAR_6.histcounter_type == 0 ) {

 VAR_9 = 16;
 VAR_8 = 2;
    } else {
 VAR_9 = VAR_6.histcounter_type;
 VAR_8 = FUNC_0(VAR_9) / VAR_0;
    }
    VAR_14 = (unsigned long) VAR_6.lpc;
    VAR_13 = (unsigned long) VAR_6.hpc;
    VAR_11 = (unsigned long)VAR_6.lpc / VAR_2;
    VAR_7 = (unsigned long)VAR_6.hpc / VAR_2;
    VAR_15 = VAR_6.ncnt - VAR_19;
    VAR_12 = VAR_15 / VAR_8;
    return(VAR_18);
}
