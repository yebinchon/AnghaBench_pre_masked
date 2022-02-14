
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dev; int polled; } ;
struct ptn3460_bridge {TYPE_1__ connector; scalar_t__ panel; } ;
struct drm_bridge {int encoder; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ptn3460_bridge* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct drm_bridge *VAR_5)
{
 struct ptn3460_bridge *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 if (!VAR_5->encoder) {
  FUNC_0("Parent encoder object not found");
  return -VAR_2;
 }

 VAR_6->connector.polled = VAR_0;
 VAR_7 = FUNC_4(VAR_5->dev, &VAR_6->connector,
   &VAR_3, VAR_1);
 if (VAR_7) {
  FUNC_0("Failed to initialize connector with drm\n");
  return VAR_7;
 }
 FUNC_3(&VAR_6->connector,
     &VAR_4);
 FUNC_5(&VAR_6->connector);
 FUNC_2(&VAR_6->connector,
       VAR_5->encoder);

 if (VAR_6->panel)
  FUNC_7(VAR_6->panel, &VAR_6->connector);

 FUNC_6(VAR_6->connector.dev);

 return VAR_7;
}
