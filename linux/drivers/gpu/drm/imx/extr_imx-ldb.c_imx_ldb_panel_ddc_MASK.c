
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct imx_ldb_channel {int mode_valid; int bus_flags; int mode; int panel; int edid_len; int edid; int ddc; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int const*,int ,int ) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*,int *,int *,int ) ;
 int * FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3,
  struct imx_ldb_channel *VAR_4, struct device_node *VAR_5)
{
 struct device_node *VAR_6;
 const u8 *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_7(VAR_5, "ddc-i2c-bus", 0);
 if (VAR_6) {
  VAR_4->ddc = FUNC_3(VAR_6);
  FUNC_6(VAR_6);
  if (!VAR_4->ddc) {
   FUNC_1(VAR_3, "failed to get ddc i2c adapter\n");
   return -VAR_0;
  }
 }

 if (!VAR_4->ddc) {

  FUNC_0(VAR_3, "no ddc available\n");

  VAR_7 = FUNC_5(VAR_5, "edid",
     &VAR_4->edid_len);
  if (VAR_7) {
   VAR_4->edid = FUNC_2(VAR_7,
      VAR_4->edid_len,
      VAR_1);
  } else if (!VAR_4->panel) {

   VAR_8 = FUNC_4(VAR_5,
            &VAR_4->mode,
            &VAR_4->bus_flags,
            VAR_2);
   if (!VAR_8)
    VAR_4->mode_valid = 1;
  }
 }
 return 0;
}
