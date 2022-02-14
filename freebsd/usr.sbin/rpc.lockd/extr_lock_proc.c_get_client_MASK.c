
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uid_t ;
struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct netconfig {int dummy; } ;
typedef scalar_t__ rpcvers_t ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr*) ;
 int FUNC_1 (int,int *) ;
 int * VAR_10 ;
 size_t VAR_11 ;
 int ** VAR_12 ;
 long* VAR_13 ;
 scalar_t__* VAR_14 ;
 int FUNC_2 (int *,int ,...) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*) ;
 int * FUNC_5 (char*,int ,scalar_t__,struct netconfig*) ;
 int VAR_15 ;
 int FUNC_6 (struct netconfig*) ;
 char* FUNC_7 (int) ;
 char* FUNC_8 () ;
 int FUNC_9 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 struct netconfig* FUNC_10 (char const*) ;
 int FUNC_11 (struct timeval*,int *) ;
 int FUNC_12 (int *,struct sockaddr*,int ) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (int ,char*,...) ;

CLIENT *
FUNC_15(struct sockaddr *VAR_16, rpcvers_t VAR_17)
{
 CLIENT *VAR_18;
 struct timeval VAR_19, VAR_20;
 int VAR_21, VAR_22;
 const char *VAR_23;
 struct netconfig *VAR_24;
 char VAR_25[VAR_7];
 uid_t VAR_26;
 int VAR_27;

 FUNC_11(&VAR_20, ((void*)0));





 for (VAR_22 = 0; VAR_22 < VAR_3; VAR_22++) {
  VAR_18 = VAR_12[VAR_22];
  if (VAR_18 && ((VAR_13[VAR_22] + VAR_2)
      < VAR_20.tv_sec)) {

   if (VAR_15 > 3)
    FUNC_14(VAR_5, "Expired CLIENT* in cache");
   VAR_13[VAR_22] = 0L;
   FUNC_3(VAR_18);
   VAR_12[VAR_22] = ((void*)0);
   VAR_18 = ((void*)0);
  }
  if (VAR_18 && !FUNC_0((struct sockaddr *)&VAR_10[VAR_22],
      VAR_16) && VAR_14[VAR_22] == VAR_17) {

   if (VAR_15 > 3)
    FUNC_14(VAR_5, "Found CLIENT* in cache");
   return (VAR_18);
  }
 }

 if (VAR_15 > 3)
  FUNC_14(VAR_5, "CLIENT* not found in cache, creating");


 if (VAR_12[VAR_11]) {
  FUNC_3(VAR_12[VAR_11]);
  VAR_12[VAR_11] = ((void*)0);
 }





 VAR_21 = FUNC_9(VAR_16, VAR_16->sa_len, VAR_25, sizeof VAR_25,
       ((void*)0), 0, VAR_8);
 if (VAR_21 != 0) {
  FUNC_14(VAR_6, "unable to get name string for caller: %s",
         FUNC_7(VAR_21));
  return ((void*)0);
 }


 if (VAR_16->sa_family == VAR_0)
  VAR_23 = "udp6";
 else
  VAR_23 = "udp";






 VAR_24 = FUNC_10(VAR_23);
 if (VAR_24 == ((void*)0)) {
  FUNC_14(VAR_6, "could not get netconfig info for '%s': "
    "no /etc/netconfig file?", VAR_23);
  return ((void*)0);
 }

 VAR_18 = FUNC_5(VAR_25, VAR_9, VAR_17, VAR_24);
 FUNC_6(VAR_24);

 if (!VAR_18) {
  FUNC_14(VAR_6, "%s", FUNC_4("clntudp_create"));
  FUNC_14(VAR_6, "Unable to return result to %s", VAR_25);
  return ((void*)0);
 }


 FUNC_2(VAR_18, VAR_1, &VAR_27);


 VAR_26 = FUNC_8();
 if (FUNC_13(0) != 0) {
  FUNC_14(VAR_6, "seteuid(0) failed");
  return ((void*)0);
 }





 FUNC_1(VAR_27, ((void*)0));


 if (FUNC_13(VAR_26) != 0) {
  FUNC_14(VAR_6, "seteuid(%d) failed", VAR_26);
  return ((void*)0);
 }


 VAR_12[VAR_11] = VAR_18;
 FUNC_12(&VAR_10[VAR_11], VAR_16,
     VAR_16->sa_len);
 VAR_14[VAR_11] = VAR_17;
 VAR_13[VAR_11] = VAR_20.tv_sec;
 if (++VAR_11 >= VAR_3)
  VAR_11 = 0;






 VAR_19.tv_sec = -1;
 VAR_19.tv_usec = -1;
 FUNC_2(VAR_18, VAR_4, (char *)&VAR_19);

 if (VAR_15 > 3)
  FUNC_14(VAR_5, "Created CLIENT* for %s", VAR_25);
 return VAR_18;
}
