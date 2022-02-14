
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_spec {char* pool_id; char* pool_name; scalar_t__ pool_ns; int snap_name; int snap_id; scalar_t__ image_name; int image_id; } ;
struct rbd_device {int parent_overlap; struct rbd_spec* parent_spec; struct rbd_device* parent; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct rbd_device* FUNC_0 (struct device*) ;
 size_t FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 struct rbd_device *VAR_3 = FUNC_0(VAR_0);
 ssize_t VAR_4 = 0;

 if (!VAR_3->parent)
  return FUNC_1(VAR_2, "(no parent image)\n");

 for ( ; VAR_3->parent; VAR_3 = VAR_3->parent) {
  struct rbd_spec *VAR_5 = VAR_3->parent_spec;

  VAR_4 += FUNC_1(&VAR_2[VAR_4], "%s"
       "pool_id %llu\npool_name %s\n"
       "pool_ns %s\n"
       "image_id %s\nimage_name %s\n"
       "snap_id %llu\nsnap_name %s\n"
       "overlap %llu\n",
       !VAR_4 ? "" : "\n",
       VAR_5->pool_id, VAR_5->pool_name,
       VAR_5->pool_ns ?: "",
       VAR_5->image_id, VAR_5->image_name ?: "(unknown)",
       VAR_5->snap_id, VAR_5->snap_name,
       VAR_3->parent_overlap);
 }

 return VAR_4;
}
