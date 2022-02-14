
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct shallow_info {int** used_shallow; scalar_t__* shallow_ref; TYPE_1__* shallow; } ;
struct oid_array {int nr; int * oid; } ;
struct lock_file {int dummy; } ;
struct command {int index; int ref_name; } ;
struct check_connected_options {int shallow_file; int env; } ;
struct TYPE_2__ {int nr; int * oid; } ;


 struct check_connected_options VAR_0 ;
 struct lock_file VAR_1 ;
 struct oid_array VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct command*,struct check_connected_options*) ;
 int VAR_3 ;
 int FUNC_1 (struct lock_file*) ;
 int FUNC_2 (struct shallow_info*,int) ;
 int FUNC_3 (struct oid_array*,int *) ;
 int FUNC_4 (struct oid_array*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct lock_file*) ;
 int FUNC_7 (struct lock_file*,int *,struct oid_array*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,char*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct command *VAR_7, struct shallow_info *VAR_8)
{
 struct lock_file VAR_9 = VAR_1;
 struct oid_array VAR_10 = VAR_2;
 struct check_connected_options VAR_11 = VAR_0;
 uint32_t VAR_12 = 1 << (VAR_7->index % 32);
 int VAR_13;

 FUNC_9(&VAR_6,
    "shallow: update_shallow_ref %s\n", VAR_7->ref_name);
 for (VAR_13 = 0; VAR_13 < VAR_8->shallow->nr; VAR_13++)
  if (VAR_8->used_shallow[VAR_13] &&
      (VAR_8->used_shallow[VAR_13][VAR_7->index / 32] & VAR_12) &&
      !FUNC_2(VAR_8, VAR_13))
   FUNC_3(&VAR_10, &VAR_8->shallow->oid[VAR_13]);

 VAR_11.env = FUNC_8(VAR_5);
 FUNC_7(&VAR_9, &VAR_11.shallow_file, &VAR_10);
 if (FUNC_0(VAR_3, VAR_7, &VAR_11)) {
  FUNC_6(&VAR_9);
  FUNC_4(&VAR_10);
  return -1;
 }

 FUNC_1(&VAR_9);





 for (VAR_13 = 0; VAR_13 < VAR_10.nr; VAR_13++)
  FUNC_5(VAR_4, &VAR_10.oid[VAR_13]);

 VAR_8->shallow_ref[VAR_7->index] = 0;
 FUNC_4(&VAR_10);
 return 0;
}
