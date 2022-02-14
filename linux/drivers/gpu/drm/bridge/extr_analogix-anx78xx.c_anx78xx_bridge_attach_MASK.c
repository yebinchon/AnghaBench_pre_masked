
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_bridge {int encoder; int dev; } ;
struct TYPE_9__ {int polled; } ;
struct TYPE_8__ {char* name; int transfer; int * dev; } ;
struct anx78xx {TYPE_3__ connector; TYPE_2__ aux; TYPE_1__* client; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct anx78xx* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ,TYPE_3__*,int *,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct drm_bridge *VAR_6)
{
 struct anx78xx *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 if (!VAR_6->encoder) {
  FUNC_0("Parent encoder object not found");
  return -VAR_2;
 }


 VAR_7->aux.name = "DP-AUX";
 VAR_7->aux.dev = &VAR_7->client->dev;
 VAR_7->aux.transfer = VAR_3;

 VAR_8 = FUNC_6(&VAR_7->aux);
 if (VAR_8 < 0) {
  FUNC_0("Failed to register aux channel: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_6->dev, &VAR_7->connector,
     &VAR_4,
     VAR_1);
 if (VAR_8) {
  FUNC_0("Failed to initialize connector: %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_3(&VAR_7->connector,
     &VAR_5);

 VAR_8 = FUNC_5(&VAR_7->connector);
 if (VAR_8) {
  FUNC_0("Failed to register connector: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7->connector.polled = VAR_0;

 VAR_8 = FUNC_2(&VAR_7->connector,
        VAR_6->encoder);
 if (VAR_8) {
  FUNC_0("Failed to link up connector to encoder: %d\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
