
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct offload_settings {int rx_coalesce; int cong_algo; int sched_class; int tstamp; int sack; int nagle; int ecn; int ddp; int tls; int txq; int rxq; int mss; int offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**,char const*,int*,struct offload_settings*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char**,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2, struct offload_settings *VAR_3)
{
 const char *VAR_4 = " \f\n\r\v\t";
 char *VAR_5, *VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 static const struct offload_settings VAR_11 = {
  .offload = 0,
  .rx_coalesce = -1,
  .cong_algo = -1,
  .sched_class = -1,
  .tstamp = -1,
  .sack = -1,
  .nagle = -1,
  .ecn = -1,
  .ddp = -1,
  .tls = -1,
  .txq = -1,
  .rxq = -1,
  .mss = -1,
 };

 *VAR_3 = VAR_11;

 VAR_7 = VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_4 (((void*)0));
  return (VAR_1);
 }

 VAR_9 = 0;
 VAR_8 = 0;
 VAR_10 = 0;
 while ((VAR_6 = FUNC_3(&VAR_7, VAR_4)) != ((void*)0)) {
  if (*VAR_6 == '\0')
   continue;
  VAR_9++;
  VAR_8 = FUNC_1(VAR_6, &VAR_7, VAR_4, &VAR_10, VAR_3);
  if (VAR_8 != 0)
   goto done;
 }
 if (VAR_9 == 0) {
  FUNC_5("no settings provided");
  VAR_8 = VAR_0;
  goto done;
 }
 if (VAR_10 > 0) {
  FUNC_5("%d stray negation(s) at end of offload settings", VAR_10);
  VAR_8 = VAR_0;
  goto done;
 }
done:
 FUNC_0(VAR_5);
 return (VAR_8);
}
