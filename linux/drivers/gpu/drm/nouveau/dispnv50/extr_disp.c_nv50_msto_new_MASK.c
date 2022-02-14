
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int possible_crtcs; } ;
struct nv50_msto {TYPE_1__ encoder; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct drm_device*,TYPE_1__*,int *,int ,char*,char const*,int) ;
 int FUNC_2 (struct nv50_msto*) ;
 struct nv50_msto* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct drm_device *VAR_5, u32 VAR_6, const char *VAR_7, int VAR_8,
       struct nv50_msto **VAR_9)
{
 struct nv50_msto *VAR_10;
 int VAR_11;

 if (!(VAR_10 = *VAR_9 = FUNC_3(sizeof(*VAR_10), VAR_2)))
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_5, &VAR_10->encoder, &VAR_3,
          VAR_0, "%s-mst-%d", VAR_7, VAR_8);
 if (VAR_11) {
  FUNC_2(*VAR_9);
  *VAR_9 = ((void*)0);
  return VAR_11;
 }

 FUNC_0(&VAR_10->encoder, &VAR_4);
 VAR_10->encoder.possible_crtcs = VAR_6;
 return 0;
}
