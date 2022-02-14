
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_hash_algo {int rawsz; int (* final_fn ) (unsigned char*,int *) ;int (* update_fn ) (int *,char*,scalar_t__) ;int (* init_fn ) (int *) ;} ;
typedef scalar_t__ ssize_t ;
typedef int git_hash_ctx ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (unsigned char*,int,int ,int ) ;
 struct git_hash_algo* VAR_1 ;
 int FUNC_5 (unsigned char*,struct git_hash_algo const*) ;
 char* FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*,int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,scalar_t__) ;
 int FUNC_12 (unsigned char*,int *) ;
 scalar_t__ FUNC_13 (int ,char*,unsigned int) ;

int FUNC_14(int VAR_4, const char **VAR_5, int VAR_6)
{
 git_hash_ctx VAR_7;
 unsigned char VAR_8[VAR_0];
 unsigned VAR_9 = 8192;
 int VAR_10 = 0;
 char *VAR_11;
 const struct git_hash_algo *VAR_12 = &VAR_1[VAR_6];

 if (VAR_4 == 2) {
  if (!FUNC_8(VAR_5[1], "-b"))
   VAR_10 = 1;
  else
   VAR_9 = FUNC_9(VAR_5[1], ((void*)0), 10) * 1024 * 1024;
 }

 if (!VAR_9)
  VAR_9 = 8192;

 while ((VAR_11 = FUNC_6(VAR_9)) == ((void*)0)) {
  FUNC_3(VAR_2, "bufsz %u is too big, halving...\n", VAR_9);
  VAR_9 /= 2;
  if (VAR_9 < 1024)
   FUNC_0("OOPS");
 }

 VAR_12->init_fn(&VAR_7);

 while (1) {
  ssize_t VAR_13, VAR_14;
  char *VAR_15 = VAR_11;
  unsigned VAR_16 = VAR_9;
  VAR_14 = 0;
  while (VAR_16) {
   VAR_13 = FUNC_13(0, VAR_15, VAR_16);
   if (VAR_13 == 0)
    break;
   if (VAR_13 < 0)
    FUNC_1("test-hash");
   VAR_14 += VAR_13;
   VAR_15 += VAR_13;
   VAR_16 -= VAR_13;
  }
  if (VAR_14 == 0)
   break;
  VAR_12->update_fn(&VAR_7, VAR_11, VAR_14);
 }
 VAR_12->final_fn(VAR_8, &VAR_7);

 if (VAR_10)
  FUNC_4(VAR_8, 1, VAR_12->rawsz, VAR_3);
 else
  FUNC_7(FUNC_5(VAR_8, VAR_12));
 FUNC_2(0);
}
