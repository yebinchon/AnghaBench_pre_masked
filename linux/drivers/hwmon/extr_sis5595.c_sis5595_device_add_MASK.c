
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned short start; char* name; int flags; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct resource*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct resource*,int) ;
 int FUNC_3 (char*,unsigned short) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(unsigned short VAR_4)
{
 struct resource VAR_5 = {
  .start = VAR_4,
  .end = VAR_4 + VAR_2 - 1,
  .name = "sis5595",
  .flags = VAR_1,
 };
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_5);
 if (VAR_6)
  goto exit;

 VAR_3 = FUNC_3("sis5595", VAR_4);
 if (!VAR_3) {
  VAR_6 = -VAR_0;
  FUNC_5("Device allocation failed\n");
  goto exit;
 }

 VAR_6 = FUNC_2(VAR_3, &VAR_5, 1);
 if (VAR_6) {
  FUNC_5("Device resource addition failed (%d)\n", VAR_6);
  goto exit_device_put;
 }

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6) {
  FUNC_5("Device addition failed (%d)\n", VAR_6);
  goto exit_device_put;
 }

 return 0;

exit_device_put:
 FUNC_4(VAR_3);
exit:
 return VAR_6;
}
