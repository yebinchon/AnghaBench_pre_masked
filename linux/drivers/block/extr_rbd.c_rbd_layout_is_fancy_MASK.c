
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_file_layout {scalar_t__ stripe_unit; scalar_t__ object_size; } ;



__attribute__((used)) static bool FUNC_0(struct ceph_file_layout *VAR_0)
{
 return VAR_0->stripe_unit != VAR_0->object_size;
}
