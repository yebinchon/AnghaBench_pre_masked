
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct ubus_request_data {int dummy; } ;
struct ubus_object {int dummy; } ;
struct ubus_context {int dummy; } ;
struct hostapd_data {int iface; struct hostapd_bss_config* conf; } ;
struct hostapd_bss_config {struct wpabuf* vendor_elements; } ;
struct blob_attr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct blob_attr*) ;
 int FUNC_1 (struct blob_attr*) ;
 char* FUNC_2 (struct blob_attr*) ;
 int FUNC_3 (int ,int,struct blob_attr**,int ,int ) ;
 struct hostapd_data* FUNC_4 (struct ubus_object*) ;
 scalar_t__ FUNC_5 (char const*,int ,size_t) ;
 scalar_t__ FUNC_6 (int ) ;
 size_t FUNC_7 (char const*) ;
 int VAR_5 ;
 struct wpabuf* FUNC_8 (size_t) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,size_t) ;

__attribute__((used)) static int
FUNC_11(struct ubus_context *VAR_6, struct ubus_object *VAR_7,
   struct ubus_request_data *VAR_8, const char *VAR_9,
   struct blob_attr *VAR_10)
{
 struct blob_attr *VAR_11[VAR_4];
 struct hostapd_data *VAR_12 = FUNC_4(VAR_7);
 struct hostapd_bss_config *VAR_13 = VAR_12->conf;
 struct wpabuf *VAR_14;
 const char *VAR_15;
 size_t VAR_16;

 FUNC_3(VAR_5, VAR_4, VAR_11,
        FUNC_0(VAR_10), FUNC_1(VAR_10));

 if (!VAR_11[VAR_3])
  return VAR_0;

 VAR_15 = FUNC_2(VAR_11[VAR_3]);
 VAR_16 = FUNC_7(VAR_15);
 if (VAR_16 & 0x01)
   return VAR_0;

 VAR_16 /= 2;
 if (VAR_16 == 0) {
  FUNC_9(VAR_13->vendor_elements);
  VAR_13->vendor_elements = ((void*)0);
  return 0;
 }

 VAR_14 = FUNC_8(VAR_16);
 if (VAR_14 == ((void*)0))
  return 1;

 if (FUNC_5(VAR_15, FUNC_10(VAR_14, VAR_16), VAR_16)) {
  FUNC_9(VAR_14);
  return VAR_0;
 }

 FUNC_9(VAR_13->vendor_elements);
 VAR_13->vendor_elements = VAR_14;


 if (FUNC_6(VAR_12->iface) != 0)
  return VAR_1;
 return VAR_2;
}
