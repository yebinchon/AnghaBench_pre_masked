
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ifreq {int ifr_name; void* ifr_data; } ;
struct adapter {int socket; int name; } ;
typedef int ifr ;
typedef void* caddr_t ;
struct TYPE_9__ {int KeyLength; int KeyMaterial; int BSSID; int KeyIndex; int KeyRSC; } ;
struct TYPE_8__ {int Length; int KeyLength; char* BSSID; int KeyIndex; int KeyRSC; } ;
struct TYPE_7__ {scalar_t__ Oid; int Length; int Data; } ;
typedef TYPE_1__ PACKET_OID_DATA ;
typedef int NDIS_802_11_MAC_ADDRESS ;
typedef TYPE_2__ NDIS_802_11_KEY_COMPAT ;
typedef TYPE_3__ NDIS_802_11_KEY ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,struct ifreq*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;

int
FUNC_6(void *VAR_4, BOOLEAN VAR_5, PACKET_OID_DATA *VAR_6)
{
 struct adapter *VAR_7;
 uint32_t VAR_8;
 struct ifreq VAR_9;
 NDIS_802_11_KEY *VAR_10;
 NDIS_802_11_KEY_COMPAT *VAR_11;
 PACKET_OID_DATA *VAR_12 = ((void*)0);

 if (VAR_4 == ((void*)0))
  return(-1);

 VAR_7 = VAR_4;
 FUNC_1((char *)&VAR_9, sizeof(VAR_9));
 if (VAR_5 == VAR_3 && VAR_6->Oid == VAR_0) {
  VAR_10 = (NDIS_802_11_KEY *)&VAR_6->Data;
  VAR_12 = FUNC_4(sizeof(PACKET_OID_DATA) +
      sizeof(NDIS_802_11_KEY_COMPAT) + VAR_10->KeyLength);
  if (VAR_12 == ((void*)0))
   return(0);
  FUNC_1((char *)VAR_12, sizeof(PACKET_OID_DATA) +
      sizeof(NDIS_802_11_KEY_COMPAT) + VAR_10->KeyLength);
  VAR_12->Oid = VAR_6->Oid;
  VAR_12->Length = sizeof(NDIS_802_11_KEY_COMPAT) + VAR_10->KeyLength;
  VAR_11 = (NDIS_802_11_KEY_COMPAT *)&VAR_12->Data;
  VAR_11->KeyRSC = VAR_10->KeyRSC;
  VAR_11->Length = VAR_12->Length;
  VAR_11->KeyIndex = VAR_10->KeyIndex;
  VAR_11->KeyLength = VAR_10->KeyLength;
  FUNC_0(VAR_10->BSSID, VAR_11->BSSID, sizeof(NDIS_802_11_MAC_ADDRESS));
  FUNC_0(VAR_10->KeyMaterial, (char *)VAR_11 +
      sizeof(NDIS_802_11_KEY_COMPAT), VAR_11->KeyLength);
         VAR_9.ifr_data = (caddr_t)VAR_12;
 } else
         VAR_9.ifr_data = (caddr_t)VAR_6;

        FUNC_5(VAR_9.ifr_name, VAR_7->name, sizeof(VAR_9.ifr_name));

 if (VAR_5 == VAR_3)
  VAR_8 = FUNC_3(VAR_7->socket, VAR_2, &VAR_9);
 else
  VAR_8 = FUNC_3(VAR_7->socket, VAR_1, &VAR_9);

 if (VAR_12 != ((void*)0))
  FUNC_2(VAR_12);

 if (VAR_8)
  return(0);

 return(1);
}
