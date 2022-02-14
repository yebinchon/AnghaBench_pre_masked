
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_config_context {char* resource_name; int reply_skb; } ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const*,char) ;

__attribute__((used)) static enum drbd_ret_code
FUNC_2(struct drbd_config_context *VAR_3)
{
 const char *VAR_4 = VAR_3->resource_name;
 if (!VAR_4 || !VAR_4[0]) {
  FUNC_0(VAR_3->reply_skb, "resource name missing");
  return VAR_1;
 }


 if (FUNC_1(VAR_4, '/')) {
  FUNC_0(VAR_3->reply_skb, "invalid resource name");
  return VAR_0;
 }
 return VAR_2;
}
