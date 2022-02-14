
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii902x {int mutex; int regmap; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sii902x* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_4(struct drm_connector *VAR_4, bool VAR_5)
{
 struct sii902x *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7;

 FUNC_1(&VAR_6->mutex);

 FUNC_3(VAR_6->regmap, VAR_0, &VAR_7);

 FUNC_2(&VAR_6->mutex);

 return (VAR_7 & VAR_1) ?
        VAR_2 : VAR_3;
}
