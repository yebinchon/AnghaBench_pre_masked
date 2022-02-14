
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct mbuf {int dummy; } ;
typedef scalar_t__ rpc_gss_service_t ;
typedef int gss_qop_t ;
typedef int gss_ctx_id_t ;
typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int ,struct mbuf*,struct mbuf**) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int ,int ,struct mbuf**,int*) ;
 int FUNC_3 (struct mbuf*,scalar_t__,char*) ;
 int FUNC_4 (struct mbuf*,struct mbuf*) ;
 int FUNC_5 (struct mbuf*) ;
 scalar_t__ FUNC_6 (struct mbuf*,int *) ;
 int FUNC_7 (struct mbuf**,scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

bool_t
FUNC_10(struct mbuf **VAR_5,
        gss_ctx_id_t VAR_6, gss_qop_t VAR_7,
        rpc_gss_service_t VAR_8, u_int VAR_9)
{
 struct mbuf *VAR_10, *VAR_11;
 OM_uint32 VAR_12, VAR_13;
 int VAR_14;
 u_int VAR_15;
 static char VAR_16[4];

 VAR_10 = *VAR_5;




 FUNC_7(&VAR_10, VAR_9);
 VAR_15 = FUNC_6(VAR_10, ((void*)0));

 if (VAR_8 == VAR_3) {

  VAR_12 = FUNC_1(&VAR_13, VAR_6, VAR_7, VAR_10, &VAR_11);
  if (VAR_12 != VAR_1) {
   FUNC_8("gss_get_mic failed");
   FUNC_5(VAR_10);
   return (VAR_0);
  }





  FUNC_7(&VAR_10, VAR_15);




  VAR_15 = FUNC_6(VAR_11, ((void*)0));
  FUNC_7(&VAR_11, VAR_15);
  if (VAR_15 != FUNC_0(VAR_15)) {
   FUNC_3(VAR_11, FUNC_0(VAR_15) - VAR_15, VAR_16);
  }




  FUNC_4(VAR_10, VAR_11);
 } else if (VAR_8 == VAR_4) {

  VAR_12 = FUNC_2(&VAR_13, VAR_6, VAR_2, VAR_7,
      &VAR_10, &VAR_14);
  if (VAR_12 != VAR_1) {
   FUNC_9("gss_wrap", ((void*)0),
       VAR_12, VAR_13);
   return (VAR_0);
  }




  VAR_15 = FUNC_6(VAR_10, ((void*)0));
  FUNC_7(&VAR_10, VAR_15);
  if (VAR_15 != FUNC_0(VAR_15)) {
   FUNC_3(VAR_10, FUNC_0(VAR_15) - VAR_15, VAR_16);
  }
 }
 *VAR_5 = VAR_10;
 return (VAR_2);
}
