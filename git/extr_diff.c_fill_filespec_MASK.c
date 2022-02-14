
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct diff_filespec {int oid_valid; int oid; int mode; } ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int *,struct object_id const*) ;

void FUNC_2(struct diff_filespec *VAR_0, const struct object_id *VAR_1,
     int VAR_2, unsigned short VAR_3)
{
 if (VAR_3) {
  VAR_0->mode = FUNC_0(VAR_3);
  FUNC_1(&VAR_0->oid, VAR_1);
  VAR_0->oid_valid = VAR_2;
 }
}
