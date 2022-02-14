
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; int oid; } ;
struct object_entry {TYPE_1__ idx; scalar_t__ preferred_base; } ;
struct hashfile {int dummy; } ;
typedef int off_t ;
typedef enum write_one_status { ____Placeholder_write_one_status } write_one_status ;


 struct object_entry* FUNC_0 (struct object_entry*) ;
 int FUNC_1 (struct object_entry*,int *) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct hashfile*,struct object_entry*,int) ;
 TYPE_1__** VAR_3 ;

__attribute__((used)) static enum write_one_status FUNC_8(struct hashfile *VAR_4,
           struct object_entry *VAR_5,
           off_t *VAR_6)
{
 off_t VAR_7;
 int VAR_8;






 VAR_8 = (VAR_5->idx.offset == 1);
 if (VAR_8) {
  FUNC_6(FUNC_2("recursive delta detected for object %s"),
   FUNC_4(&VAR_5->idx.oid));
  return 128;
 } else if (VAR_5->idx.offset || VAR_5->preferred_base) {

  return VAR_0;
 }


 if (FUNC_0(VAR_5)) {
  VAR_5->idx.offset = 1;
  switch (FUNC_8(VAR_4, FUNC_0(VAR_5), VAR_6)) {
  case 128:

   FUNC_1(VAR_5, ((void*)0));
   break;
  default:
   break;
  case 129:
   VAR_5->idx.offset = VAR_8;
   return 129;
  }
 }

 VAR_5->idx.offset = *VAR_6;
 VAR_7 = FUNC_7(VAR_4, VAR_5, *VAR_6);
 if (!VAR_7) {
  VAR_5->idx.offset = VAR_8;
  return 129;
 }
 VAR_3[VAR_2++] = &VAR_5->idx;


 if (FUNC_5(*VAR_6, VAR_7))
  FUNC_3(FUNC_2("pack too large for current definition of off_t"));
 *VAR_6 += VAR_7;
 return VAR_1;
}
