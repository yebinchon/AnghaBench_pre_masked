
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct device {int dummy; } ;
struct arizona_micd_config {void* gpio; void* bias; int src; } ;
struct TYPE_2__ {int num_micd_configs; struct arizona_micd_config* micd_configs; } ;
struct arizona {TYPE_1__ pdata; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const* const) ;
 int FUNC_1 (int ,char const* const,void**,int) ;
 struct arizona_micd_config* FUNC_2 (struct device*,int,int,int ) ;
 void** FUNC_3 (int,int,int ) ;
 int FUNC_4 (void**) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3,
        struct arizona *VAR_4)
{
 const char * const VAR_5 = "wlf,micd-configs";
 const int VAR_6 = 3;
 struct arizona_micd_config *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;
 u32 *VAR_12;

 VAR_8 = FUNC_0(VAR_4->dev, VAR_5);
 if (VAR_8 <= 0)
  return 0;

 VAR_12 = FUNC_3(VAR_8, sizeof(u32), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_4->dev, VAR_5, VAR_12, VAR_8);
 if (VAR_9 < 0)
  goto out;

 VAR_8 /= VAR_6;
 VAR_7 = FUNC_2(VAR_3, VAR_8, sizeof(*VAR_7),
        VAR_2);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto out;
 }

 for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_8; ++VAR_10) {
  VAR_7[VAR_10].src = VAR_12[VAR_11++] ? VAR_0 : 0;
  VAR_7[VAR_10].bias = VAR_12[VAR_11++];
  VAR_7[VAR_10].gpio = VAR_12[VAR_11++];
 }

 VAR_4->pdata.micd_configs = VAR_7;
 VAR_4->pdata.num_micd_configs = VAR_8;

out:
 FUNC_4(VAR_12);
 return VAR_9;
}
