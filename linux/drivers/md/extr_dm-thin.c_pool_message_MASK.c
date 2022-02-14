
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_c {struct pool* pool; } ;
struct pool {int pool_md; } ;
struct dm_target {struct pool_c* private; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct pool*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct pool*) ;
 int FUNC_5 (unsigned int,char**,struct pool*) ;
 int FUNC_6 (unsigned int,char**,struct pool*) ;
 int FUNC_7 (unsigned int,char**,struct pool*) ;
 int FUNC_8 (unsigned int,char**,struct pool*) ;
 int FUNC_9 (unsigned int,char**,struct pool*) ;
 int FUNC_10 (unsigned int,char**,struct pool*) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static int FUNC_12(struct dm_target *VAR_3, unsigned VAR_4, char **VAR_5,
   char *VAR_6, unsigned VAR_7)
{
 int VAR_8 = -VAR_0;
 struct pool_c *VAR_9 = VAR_3->private;
 struct pool *VAR_10 = VAR_9->pool;

 if (FUNC_4(VAR_10) >= VAR_2) {
  FUNC_0("%s: unable to service pool target messages in READ_ONLY or FAIL mode",
        FUNC_3(VAR_10->pool_md));
  return -VAR_1;
 }

 if (!FUNC_11(VAR_5[0], "create_thin"))
  VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_10);

 else if (!FUNC_11(VAR_5[0], "create_snap"))
  VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_10);

 else if (!FUNC_11(VAR_5[0], "delete"))
  VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_10);

 else if (!FUNC_11(VAR_5[0], "set_transaction_id"))
  VAR_8 = FUNC_10(VAR_4, VAR_5, VAR_10);

 else if (!FUNC_11(VAR_5[0], "reserve_metadata_snap"))
  VAR_8 = FUNC_9(VAR_4, VAR_5, VAR_10);

 else if (!FUNC_11(VAR_5[0], "release_metadata_snap"))
  VAR_8 = FUNC_8(VAR_4, VAR_5, VAR_10);

 else
  FUNC_1("Unrecognised thin pool target message received: %s", VAR_5[0]);

 if (!VAR_8)
  (void) FUNC_2(VAR_10);

 return VAR_8;
}
