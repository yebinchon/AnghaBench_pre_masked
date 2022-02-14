
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct mbuf {scalar_t__ m_len; } ;
typedef scalar_t__ rpc_gss_service_t ;
typedef scalar_t__ gss_qop_t ;
typedef int gss_ctx_id_t ;
typedef scalar_t__ bool_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct mbuf**) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,struct mbuf**,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,int ,struct mbuf*,struct mbuf*,scalar_t__*) ;
 int FUNC_5 (struct mbuf*) ;
 struct mbuf* FUNC_6 (struct mbuf*,scalar_t__) ;
 struct mbuf* FUNC_7 (struct mbuf*,scalar_t__,int ) ;
 int FUNC_8 (struct mbuf*,scalar_t__) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

bool_t
FUNC_11(struct mbuf **VAR_7,
   gss_ctx_id_t VAR_8, gss_qop_t VAR_9,
   rpc_gss_service_t VAR_10, u_int VAR_11)
{
 struct mbuf *VAR_12, *VAR_13, *VAR_14;
 uint32_t VAR_15, VAR_16;
 OM_uint32 VAR_17, VAR_18;
 u_int VAR_19, VAR_20, VAR_21;

 VAR_12 = *VAR_7;
 *VAR_7 = ((void*)0);

 VAR_13 = ((void*)0);
 if (VAR_10 == VAR_5) {






  VAR_15 = FUNC_2(&VAR_12);
  VAR_13 = VAR_12;
  VAR_12 = FUNC_7(VAR_12, VAR_15, VAR_3);
  if (!VAR_12) {
   FUNC_5(VAR_13);
   return (VAR_0);
  }




  VAR_16 = FUNC_2(&VAR_12);
  if (!VAR_12) {
   FUNC_5(VAR_13);
   return (VAR_0);
  }
  FUNC_0(VAR_16 <= VAR_2, ("unexpected large GSS-API checksum"));
  VAR_14 = VAR_12;
  if (VAR_16 > VAR_14->m_len) {
   VAR_14 = FUNC_6(VAR_14, VAR_16);
   if (!VAR_14) {
    FUNC_5(VAR_13);
    return (VAR_0);
   }
  }
  if (VAR_16 != FUNC_1(VAR_16))
   FUNC_8(VAR_14, VAR_16);


  VAR_17 = FUNC_4(&VAR_18, VAR_8,
      VAR_13, VAR_14, &VAR_21);
  FUNC_5(VAR_14);

  if (VAR_17 != VAR_1 || VAR_21 != VAR_9) {
   FUNC_5(VAR_13);
   FUNC_10("gss_verify_mic", ((void*)0),
       VAR_17, VAR_18);
   return (VAR_0);
  }
 } else if (VAR_10 == VAR_6) {

  VAR_15 = FUNC_2(&VAR_12);
  if (!VAR_12)
   return (VAR_0);


  VAR_13 = VAR_12;
  if (VAR_15 != FUNC_1(VAR_15))
   FUNC_8(VAR_13, VAR_15);
  VAR_17 = FUNC_3(&VAR_18, VAR_8, &VAR_13,
      &VAR_20, &VAR_21);


  if (VAR_17 != VAR_1) {
   FUNC_10("gss_unwrap", ((void*)0),
       VAR_17, VAR_18);
   return (VAR_0);
  }
  if (VAR_21 != VAR_9 || VAR_20 != VAR_4) {
   FUNC_5(VAR_12);
   return (VAR_0);
  }
 }


 VAR_19 = FUNC_2(&VAR_13);
 if (!VAR_13)
  return (VAR_0);


 if (VAR_19 != VAR_11) {
  FUNC_9("wrong sequence number in databody");
  FUNC_5(VAR_13);
  return (VAR_0);
 }

 *VAR_7 = VAR_13;
 return (VAR_4);
}
