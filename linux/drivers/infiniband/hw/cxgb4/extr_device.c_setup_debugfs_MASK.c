
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_dev {int debugfs_root; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ,void*,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct c4iw_dev *VAR_7)
{
 FUNC_0("qps", VAR_0, VAR_7->debugfs_root,
     (void *)VAR_7, &VAR_3, 4096);

 FUNC_0("stags", VAR_0, VAR_7->debugfs_root,
     (void *)VAR_7, &VAR_4, 4096);

 FUNC_0("stats", VAR_0, VAR_7->debugfs_root,
     (void *)VAR_7, &VAR_5, 4096);

 FUNC_0("eps", VAR_0, VAR_7->debugfs_root,
     (void *)VAR_7, &VAR_2, 4096);

 if (VAR_1)
  FUNC_0("wr_log", VAR_0, VAR_7->debugfs_root,
      (void *)VAR_7, &VAR_6, 4096);
}
