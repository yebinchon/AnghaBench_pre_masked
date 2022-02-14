
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; } ;
struct dm_snapshot {int dummy; } ;
struct dm_exception_store_type {int (* ctr ) (struct dm_exception_store*,char*) ;} ;
struct dm_exception_store {struct dm_snapshot* snap; struct dm_exception_store_type* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dm_exception_store_type* FUNC_0 (char*) ;
 int FUNC_1 (struct dm_exception_store*) ;
 struct dm_exception_store* FUNC_2 (int,int ) ;
 int FUNC_3 (struct dm_exception_store_type*) ;
 int FUNC_4 (struct dm_exception_store*,char*,char**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct dm_exception_store*,char*) ;
 char FUNC_7 (char) ;

int FUNC_8(struct dm_target *VAR_3, int VAR_4, char **VAR_5,
         struct dm_snapshot *VAR_6,
         unsigned *VAR_7,
         struct dm_exception_store **VAR_8)
{
 int VAR_9 = 0;
 struct dm_exception_store_type *VAR_10 = ((void*)0);
 struct dm_exception_store *VAR_11;
 char VAR_12;

 if (VAR_4 < 2) {
  VAR_3->error = "Insufficient exception store arguments";
  return -VAR_0;
 }

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  VAR_3->error = "Exception store allocation failed";
  return -VAR_1;
 }

 VAR_12 = FUNC_7(*VAR_5[0]);
 if (VAR_12 == 'P')
  VAR_10 = FUNC_0("P");
 else if (VAR_12 == 'N')
  VAR_10 = FUNC_0("N");
 else {
  VAR_3->error = "Exception store type is not P or N";
  VAR_9 = -VAR_0;
  goto bad_type;
 }

 if (!VAR_10) {
  VAR_3->error = "Exception store type not recognised";
  VAR_9 = -VAR_0;
  goto bad_type;
 }

 VAR_11->type = VAR_10;
 VAR_11->snap = VAR_6;

 VAR_9 = FUNC_4(VAR_11, VAR_5[1], &VAR_3->error);
 if (VAR_9)
  goto bad;

 VAR_9 = VAR_10->ctr(VAR_11, (FUNC_5(VAR_5[0]) > 1 ? &VAR_5[0][1] : ((void*)0)));
 if (VAR_9) {
  VAR_3->error = "Exception store type constructor failed";
  goto bad;
 }

 *VAR_7 = 2;
 *VAR_8 = VAR_11;
 return 0;

bad:
 FUNC_3(VAR_10);
bad_type:
 FUNC_1(VAR_11);
 return VAR_9;
}
