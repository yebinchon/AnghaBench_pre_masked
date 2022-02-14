
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hash_cell {char const* uuid; struct mapped_device* md; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int flags; char const* name; int event_nr; } ;


 int FUNC_0 (char*,char*,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mapped_device* FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_2 (struct hash_cell*,char*) ;
 struct hash_cell* FUNC_3 (char const*) ;
 struct hash_cell* FUNC_4 (char const*) ;
 int FUNC_5 (struct hash_cell*,char*) ;
 int VAR_8 ;
 struct dm_table* FUNC_6 (struct mapped_device*,int*) ;
 int FUNC_7 (struct mapped_device*,int ,int ) ;
 int FUNC_8 (struct mapped_device*) ;
 int FUNC_9 (struct mapped_device*,int) ;
 int FUNC_10 (struct dm_table*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char const*,int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static struct mapped_device *FUNC_15(struct dm_ioctl *VAR_9,
         const char *VAR_10)
{
 char *VAR_11, *VAR_12 = ((void*)0);
 struct hash_cell *VAR_13;
 struct dm_table *VAR_14;
 struct mapped_device *VAR_15;
 unsigned VAR_16 = (VAR_9->flags & VAR_1) ? 1 : 0;
 int VAR_17;




 VAR_11 = FUNC_13(VAR_10, VAR_6);
 if (!VAR_11)
  return FUNC_1(-VAR_4);

 FUNC_11(&VAR_8);




 if (VAR_16)
  VAR_13 = FUNC_4(VAR_10);
 else
  VAR_13 = FUNC_3(VAR_10);

 if (VAR_13) {
  FUNC_0("Unable to change %s on mapped device %s to one that "
         "already exists: %s",
         VAR_16 ? "uuid" : "name",
         VAR_9->name, VAR_10);
  FUNC_8(VAR_13->md);
  FUNC_14(&VAR_8);
  FUNC_12(VAR_11);
  return FUNC_1(-VAR_2);
 }




 VAR_13 = FUNC_3(VAR_9->name);
 if (!VAR_13) {
  FUNC_0("Unable to rename non-existent device, %s to %s%s",
         VAR_9->name, VAR_16 ? "uuid " : "", VAR_10);
  FUNC_14(&VAR_8);
  FUNC_12(VAR_11);
  return FUNC_1(-VAR_5);
 }




 if (VAR_16 && VAR_13->uuid) {
  FUNC_0("Unable to change uuid of mapped device %s to %s "
         "because uuid is already set to %s",
         VAR_9->name, VAR_10, VAR_13->uuid);
  FUNC_8(VAR_13->md);
  FUNC_14(&VAR_8);
  FUNC_12(VAR_11);
  return FUNC_1(-VAR_3);
 }

 if (VAR_16)
  FUNC_5(VAR_13, VAR_11);
 else
  VAR_12 = FUNC_2(VAR_13, VAR_11);




 VAR_14 = FUNC_6(VAR_13->md, &VAR_17);
 if (VAR_14)
  FUNC_10(VAR_14);
 FUNC_9(VAR_13->md, VAR_17);

 if (!FUNC_7(VAR_13->md, VAR_7, VAR_9->event_nr))
  VAR_9->flags |= VAR_0;

 VAR_15 = VAR_13->md;
 FUNC_14(&VAR_8);
 FUNC_12(VAR_12);

 return VAR_15;
}
