
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int key ;
typedef int k_opad ;
typedef int k_ipad ;
typedef int git_hash_ctx ;
struct TYPE_2__ {size_t blksz; int rawsz; int (* final_fn ) (unsigned char*,int *) ;int (* update_fn ) (int *,unsigned char*,int) ;int (* init_fn ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,char const*,size_t) ;
 int FUNC_1 (unsigned char*,char,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int *) ;
 int FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (unsigned char*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned char*,int) ;
 int FUNC_9 (int *,char const*,size_t) ;
 int FUNC_10 (unsigned char*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned char*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_13(unsigned char *VAR_2,
        const char *VAR_3, size_t VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 unsigned char VAR_7[VAR_0];
 unsigned char VAR_8[VAR_0];
 unsigned char VAR_9[VAR_0];
 int VAR_10;
 git_hash_ctx VAR_11;


 FUNC_1(VAR_7, '\0', VAR_0);
 if (VAR_1->blksz < VAR_4) {
  VAR_1->init_fn(&VAR_11);
  VAR_1->update_fn(&VAR_11, VAR_3, VAR_4);
  VAR_1->final_fn(VAR_7, &VAR_11);
 } else {
  FUNC_0(VAR_7, VAR_3, VAR_4);
 }


 for (VAR_10 = 0; VAR_10 < sizeof(VAR_7); VAR_10++) {
  VAR_8[VAR_10] = VAR_7[VAR_10] ^ 0x36;
  VAR_9[VAR_10] = VAR_7[VAR_10] ^ 0x5c;
 }


 VAR_1->init_fn(&VAR_11);
 VAR_1->update_fn(&VAR_11, VAR_8, sizeof(VAR_8));
 VAR_1->update_fn(&VAR_11, VAR_5, VAR_6);
 VAR_1->final_fn(VAR_2, &VAR_11);


 VAR_1->init_fn(&VAR_11);
 VAR_1->update_fn(&VAR_11, VAR_9, sizeof(VAR_9));
 VAR_1->update_fn(&VAR_11, VAR_2, VAR_1->rawsz);
 VAR_1->final_fn(VAR_2, &VAR_11);
}
