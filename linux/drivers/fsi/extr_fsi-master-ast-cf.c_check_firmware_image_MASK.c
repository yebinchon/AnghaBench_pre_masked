
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsi_master_acf {int trace_enabled; int dev; scalar_t__ cf_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int,int,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct fsi_master_acf *VAR_7)
{
 uint32_t VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_2(VAR_7->cf_mem + VAR_6 + VAR_5);
 VAR_9 = FUNC_2(VAR_7->cf_mem + VAR_6 + VAR_3);
 VAR_10 = FUNC_3(VAR_7->cf_mem + VAR_6 + VAR_4);
 VAR_7->trace_enabled = !!(VAR_10 & VAR_2);


 FUNC_1(VAR_7->dev, "ColdFire initialized, firmware v%d API v%d.%d (trace %s)\n",
   VAR_8, VAR_9 >> 8, VAR_9 & 0xff,
   VAR_7->trace_enabled ? "enabled" : "disabled");

 if ((VAR_9 >> 8) != VAR_0) {
  FUNC_0(VAR_7->dev, "Unsupported coprocessor API version !\n");
  return -VAR_1;
 }

 return 0;
}
