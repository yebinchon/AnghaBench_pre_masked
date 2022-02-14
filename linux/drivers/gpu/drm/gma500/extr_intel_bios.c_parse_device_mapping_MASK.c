
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drm_psb_private {int child_dev_num; struct child_device_config* child_dev; } ;
struct child_device_config {int device_type; } ;
struct bdb_header {int dummy; } ;
struct bdb_general_definitions {int child_dev_size; struct child_device_config* devices; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct bdb_general_definitions* FUNC_1 (struct bdb_header*,int ) ;
 int FUNC_2 (struct bdb_general_definitions*) ;
 struct child_device_config* FUNC_3 (int,int,int ) ;
 int FUNC_4 (void*,void*,int) ;

__attribute__((used)) static void
FUNC_5(struct drm_psb_private *VAR_2,
         struct bdb_header *VAR_3)
{
 struct bdb_general_definitions *VAR_4;
 struct child_device_config *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 u16 VAR_10;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_4) {
  FUNC_0("No general definition block is found, no devices defined.\n");
  return;
 }





 if (VAR_4->child_dev_size != sizeof(*VAR_5)) {

  FUNC_0("different child size is found. Invalid.\n");
  return;
 }

 VAR_10 = FUNC_2(VAR_4);

 VAR_8 = (VAR_10 - sizeof(*VAR_4)) /
    sizeof(*VAR_5);
 VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_5 = &(VAR_4->devices[VAR_7]);
  if (!VAR_5->device_type) {

   continue;
  }
  VAR_9++;
 }
 if (!VAR_9) {
  FUNC_0("no child dev is parsed from VBT\n");
  return;
 }
 VAR_2->child_dev = FUNC_3(VAR_9, sizeof(*VAR_5), VAR_1);
 if (!VAR_2->child_dev) {
  FUNC_0("No memory space for child devices\n");
  return;
 }

 VAR_2->child_dev_num = VAR_9;
 VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_5 = &(VAR_4->devices[VAR_7]);
  if (!VAR_5->device_type) {

   continue;
  }
  VAR_6 = VAR_2->child_dev + VAR_9;
  VAR_9++;
  FUNC_4((void *)VAR_6, (void *)VAR_5,
     sizeof(*VAR_5));
 }
 return;
}
