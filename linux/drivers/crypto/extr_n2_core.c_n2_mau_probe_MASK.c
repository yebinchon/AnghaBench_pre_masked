
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct n2_mau {int mau_list; int mau_info; } ;
struct mdesc_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct n2_mau* FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,struct n2_mau*) ;
 int FUNC_3 (struct n2_mau*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mdesc_handle*,struct platform_device*,int *,char*) ;
 int VAR_4 ;
 struct mdesc_handle* FUNC_6 () ;
 int FUNC_7 (struct mdesc_handle*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (struct mdesc_handle*,struct platform_device*,int *,int *,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct mdesc_handle *VAR_6;
 struct n2_mau *VAR_7;
 int VAR_8;

 FUNC_8();

 FUNC_9("Found NCP at %pOF\n", VAR_5->dev.of_node);

 VAR_7 = FUNC_0();
 if (!VAR_7) {
  FUNC_1(&VAR_5->dev, "%pOF: Unable to allocate ncp.\n",
   VAR_5->dev.of_node);
  return -VAR_1;
 }

 VAR_8 = FUNC_4();
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "%pOF: Unable to grab global resources.\n",
   VAR_5->dev.of_node);
  goto out_free_ncp;
 }

 VAR_6 = FUNC_6();

 if (!VAR_6) {
  FUNC_1(&VAR_5->dev, "%pOF: Unable to grab MDESC.\n",
   VAR_5->dev.of_node);
  VAR_8 = -VAR_0;
  goto out_free_global;
 }

 VAR_8 = FUNC_5(VAR_6, VAR_5, &VAR_7->mau_info, "ncp");
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "%pOF: Unable to grab IRQ props.\n",
   VAR_5->dev.of_node);
  FUNC_7(VAR_6);
  goto out_free_global;
 }

 VAR_8 = FUNC_11(VAR_6, VAR_5, &VAR_7->mau_info, &VAR_7->mau_list,
        "mau", VAR_2, VAR_4,
        VAR_3);
 FUNC_7(VAR_6);

 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "%pOF: MAU MDESC scan failed.\n",
   VAR_5->dev.of_node);
  goto out_free_global;
 }

 FUNC_2(&VAR_5->dev, VAR_7);

 return 0;

out_free_global:
 FUNC_10();

out_free_ncp:
 FUNC_3(VAR_7);

 return VAR_8;
}
