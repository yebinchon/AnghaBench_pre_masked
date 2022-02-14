
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubus_request_data {int dummy; } ;
struct ubus_object {int dummy; } ;
struct ubus_context {int dummy; } ;
struct hostapd_data {int dummy; } ;
struct blob_attr {int dummy; } ;


 int FUNC_0 (struct blob_attr**) ;
 int VAR_0 ;
 int FUNC_1 (struct hostapd_data*,int) ;
 int FUNC_2 (struct blob_attr*) ;
 int FUNC_3 (struct blob_attr*) ;
 int FUNC_4 (struct blob_attr*) ;
 int FUNC_5 (int ,int,struct blob_attr**,int ,int ) ;
 int VAR_1 ;
 struct hostapd_data* FUNC_6 (struct ubus_object*) ;

__attribute__((used)) static int
FUNC_7(struct ubus_context *VAR_2, struct ubus_object *VAR_3,
     struct ubus_request_data *VAR_4, const char *VAR_5,
     struct blob_attr *VAR_6)

{
 struct hostapd_data *VAR_7 = FUNC_6(VAR_3);
 struct blob_attr *VAR_8[VAR_0];
 struct blob_attr *VAR_9;
 uint32_t VAR_10 = 0;
 int VAR_11;
 bool VAR_12 = 0, VAR_13 = 0;

 FUNC_5(VAR_1, VAR_0, VAR_8, FUNC_2(VAR_6), FUNC_3(VAR_6));

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++) {
  if (!VAR_8[VAR_11] || !FUNC_4(VAR_8[VAR_11]))
   continue;

  VAR_10 |= (1 << VAR_11);
 }

 FUNC_1(VAR_7, VAR_10);
}
