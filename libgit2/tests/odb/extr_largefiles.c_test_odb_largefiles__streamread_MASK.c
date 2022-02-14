
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hdr ;
typedef int git_oid ;
typedef int git_odb_stream ;
typedef int git_object_t ;
typedef int git_hash_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (size_t*,char*,int,size_t,int ) ;
 int FUNC_11 (int **,size_t*,int *,int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,int) ;
 int VAR_2 ;
 int FUNC_14 (int *) ;

void FUNC_15(void)
{
 git_oid VAR_3, VAR_4;
 git_odb_stream *VAR_5;
 char VAR_6[10240];
 char VAR_7[64];
 size_t VAR_8, VAR_9, VAR_10 = 0;
 git_hash_ctx VAR_11;
 git_object_t VAR_12;
 int VAR_13;


 FUNC_5();


 if (!FUNC_4("GITTEST_INVASIVE_FS_SIZE") ||
  !FUNC_4("GITTEST_SLOW"))
  FUNC_5();

 FUNC_14(&VAR_3);

 FUNC_3(FUNC_11(&VAR_5, &VAR_8, &VAR_12, VAR_2, &VAR_3));

 FUNC_2(VAR_1, VAR_8);
 FUNC_0(VAR_0, VAR_12);

 FUNC_3(FUNC_7(&VAR_11));
 FUNC_3(FUNC_10(&VAR_9, VAR_7, sizeof(VAR_7), VAR_8, VAR_12));

 FUNC_3(FUNC_9(&VAR_11, VAR_7, VAR_9));

 while ((VAR_13 = FUNC_13(VAR_5, VAR_6, 10240)) > 0) {
  FUNC_3(FUNC_9(&VAR_11, VAR_6, VAR_13));
  VAR_10 += VAR_13;
 }

 FUNC_2(VAR_1, VAR_10);

 FUNC_8(&VAR_4, &VAR_11);

 FUNC_1(&VAR_3, &VAR_4);

 FUNC_6(&VAR_11);
 FUNC_12(VAR_5);
}
