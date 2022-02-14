
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int word ;
typedef int u32 ;
typedef int u16 ;
struct socket {int dummy; } ;
struct TYPE_3__ {int pd_len; } ;
struct mpa_rr {TYPE_1__ params; } ;
struct TYPE_4__ {int bytes_rcvd; char* pdata; struct mpa_rr hdr; } ;
struct siw_cep {TYPE_2__ mpa; struct socket* sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct socket*,char*,int,int ) ;
 int FUNC_3 (struct siw_cep*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct siw_cep *VAR_8)
{
 struct mpa_rr *VAR_9 = &VAR_8->mpa.hdr;
 struct socket *VAR_10 = VAR_8->sock;
 u16 VAR_11;
 int VAR_12, VAR_13;

 if (VAR_8->mpa.bytes_rcvd < sizeof(struct mpa_rr)) {
  VAR_12 = FUNC_2(VAR_10, (char *)VAR_9 + VAR_8->mpa.bytes_rcvd,
      sizeof(struct mpa_rr) - VAR_8->mpa.bytes_rcvd,
      0);
  if (VAR_12 <= 0)
   return -VAR_1;

  VAR_8->mpa.bytes_rcvd += VAR_12;

  if (VAR_8->mpa.bytes_rcvd < sizeof(struct mpa_rr))
   return -VAR_0;

  if (FUNC_0(VAR_9->params.pd_len) > VAR_6)
   return -VAR_4;
 }
 VAR_11 = FUNC_0(VAR_9->params.pd_len);






 VAR_13 = VAR_11 - (VAR_8->mpa.bytes_rcvd - sizeof(struct mpa_rr));

 if (!VAR_13) {





  u32 VAR_14;

  VAR_12 = FUNC_2(VAR_10, (char *)&VAR_14, sizeof(VAR_14), VAR_7);
  if (VAR_12 == -VAR_0)
   return 0;

  if (VAR_12 == 0) {
   FUNC_3(VAR_8, "peer EOF\n");
   return -VAR_3;
  }
  if (VAR_12 < 0) {
   FUNC_3(VAR_8, "error: %d\n", VAR_12);
   return VAR_12;
  }
  FUNC_3(VAR_8, "peer sent extra data: %d\n", VAR_12);

  return -VAR_4;
 }





 if (!VAR_8->mpa.pdata) {
  VAR_8->mpa.pdata = FUNC_1(VAR_11 + 4, VAR_5);
  if (!VAR_8->mpa.pdata)
   return -VAR_2;
 }
 VAR_12 = FUNC_2(
  VAR_10, VAR_8->mpa.pdata + VAR_8->mpa.bytes_rcvd - sizeof(struct mpa_rr),
  VAR_13 + 4, VAR_7);

 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_12 > VAR_13)
  return -VAR_4;

 VAR_8->mpa.bytes_rcvd += VAR_12;

 if (VAR_13 == VAR_12) {
  FUNC_3(VAR_8, "%d bytes private data received\n", VAR_11);
  return 0;
 }
 return -VAR_0;
}
