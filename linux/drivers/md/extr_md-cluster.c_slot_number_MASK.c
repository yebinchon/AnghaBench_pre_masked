
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int slot_number; } ;



__attribute__((used)) static int FUNC_0(struct mddev *VAR_0)
{
 struct md_cluster_info *VAR_1 = VAR_0->cluster_info;

 return VAR_1->slot_number - 1;
}
