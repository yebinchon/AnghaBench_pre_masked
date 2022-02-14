
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifdrv {int ifd_len; struct ifbpstpconf* ifd_data; int ifd_cmd; int ifd_name; } ;
struct ifbpstpreq {int dummy; } ;
struct ifbpstpconf {int ifbpstp_len; struct ifbpstpreq* ifbpstp_req; } ;
struct bridge_if {int bif_name; } ;
typedef int int32_t ;
typedef int ifbstp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifbpstpreq*) ;
 scalar_t__ FUNC_1 (int ,int ,struct ifdrv*) ;
 scalar_t__ FUNC_2 (struct ifbpstpreq*,int) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int32_t
FUNC_6(struct bridge_if *VAR_6, struct ifbpstpreq **VAR_7)
{
 int VAR_8 = 128;
 uint32_t VAR_9;
 struct ifbpstpreq *VAR_10;
 struct ifbpstpconf VAR_11;
 struct ifdrv VAR_12;

 *VAR_7 = ((void*)0);
 FUNC_4(VAR_12.ifd_name, VAR_6->bif_name, VAR_1);
 VAR_12.ifd_cmd = VAR_0;
 VAR_12.ifd_len = sizeof(VAR_11);
 VAR_12.ifd_data = &VAR_11;

 for ( ; ; ) {
  VAR_9 = VAR_8 * sizeof(struct ifbpstpreq);
  if ((VAR_10 = (struct ifbpstpreq *)
      FUNC_2(*VAR_7, VAR_9)) == ((void*)0)) {
   FUNC_5(VAR_2, "get bridge STP ports list: "
       "realloc failed: %s", FUNC_3(VAR_4));
   FUNC_0(*VAR_7);
   *VAR_7 = ((void*)0);
   return (-1);
  }

  VAR_11.ifbpstp_len = VAR_9;
  VAR_11.ifbpstp_req = *VAR_7 = VAR_10;

  if (FUNC_1(VAR_5, VAR_3, &VAR_12) < 0) {
   FUNC_5(VAR_2, "get bridge STP ports list: ioctl "
       "(BRDGGIFSSTP) failed: %s", FUNC_3(VAR_4));
   FUNC_0(*VAR_7);
   VAR_7 = ((void*)0);
   return (-1);
  }

  if ((VAR_11.ifbpstp_len + sizeof(struct ifbpstpreq)) < VAR_9)
   break;

  VAR_8 += 64;
 }

 return (VAR_11.ifbpstp_len);
}
