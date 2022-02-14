
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct related_binlog {int kfs_replica; int update_generation; int path; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct related_binlog*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int,char*,int ) ;

int FUNC_4 (struct related_binlog *VAR_1) {
  FUNC_3 (1, "reloading kfs data for %s\n", VAR_1->path);
  VAR_1->update_generation = VAR_0;
  FUNC_0 (FUNC_2 (VAR_1->kfs_replica, 0) >= 0);
  return FUNC_1 (VAR_1);
}
