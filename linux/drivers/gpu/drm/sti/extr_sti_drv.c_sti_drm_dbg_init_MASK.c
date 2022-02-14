
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {int dev; int debugfs_root; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,struct drm_minor*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct drm_minor *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_4(VAR_3,
           FUNC_0(VAR_3),
           VAR_5->debugfs_root, VAR_5);
 if (VAR_6)
  goto err;

 FUNC_3("fps_show", VAR_1 | VAR_2, VAR_5->debugfs_root,
       VAR_5->dev, &VAR_4);

 FUNC_2("%s: debugfs installed\n", VAR_0);
 return 0;
err:
 FUNC_1("%s: cannot install debugfs\n", VAR_0);
 return VAR_6;
}
