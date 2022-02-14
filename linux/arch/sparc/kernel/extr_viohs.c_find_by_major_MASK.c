
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vio_version {scalar_t__ major; } ;
struct vio_driver_state {int ver_table_entries; struct vio_version* ver_table; } ;



__attribute__((used)) static struct vio_version *FUNC_0(struct vio_driver_state *VAR_0,
      u16 VAR_1)
{
 struct vio_version *VAR_2 = ((void*)0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->ver_table_entries; VAR_3++) {
  struct vio_version *VAR_4 = &VAR_0->ver_table[VAR_3];
  if (VAR_4->major <= VAR_1) {
   VAR_2 = VAR_4;
   break;
  }
 }
 return VAR_2;
}
