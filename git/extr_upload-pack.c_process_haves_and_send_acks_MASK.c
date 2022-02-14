
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_array {int dummy; } ;
struct upload_pack_data {struct oid_array haves; int writer; scalar_t__ done; } ;
struct object_array {int dummy; } ;


 struct oid_array VAR_0 ;
 int FUNC_0 (struct oid_array*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct oid_array*,struct oid_array*,struct object_array*) ;
 scalar_t__ FUNC_4 (int *,struct oid_array*,struct object_array*,struct object_array*) ;

__attribute__((used)) static int FUNC_5(struct upload_pack_data *VAR_1,
           struct object_array *VAR_2,
           struct object_array *VAR_3)
{
 struct oid_array VAR_4 = VAR_0;
 int VAR_5 = 0;

 FUNC_3(&VAR_1->haves, &VAR_4, VAR_2);
 if (VAR_1->done) {
  VAR_5 = 1;
 } else if (FUNC_4(&VAR_1->writer, &VAR_4, VAR_2, VAR_3)) {
  FUNC_1(&VAR_1->writer);
  VAR_5 = 1;
 } else {

  FUNC_2(&VAR_1->writer);
  VAR_5 = 0;
 }

 FUNC_0(&VAR_1->haves);
 FUNC_0(&VAR_4);
 return VAR_5;
}
