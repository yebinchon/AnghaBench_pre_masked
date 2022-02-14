
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_7__ {int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
struct TYPE_8__ {int checkout_strategy; } ;
typedef TYPE_2__ git_checkout_options ;
typedef int git_blob ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,TYPE_2__*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (int *,char*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ) ;
 int FUNC_15 (char*,struct stat*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,size_t) ;

__attribute__((used)) static void FUNC_18(size_t VAR_4)
{
 git_index *VAR_5;
 const git_index_entry *VAR_6;
 git_blob *VAR_7;
 struct stat VAR_8;
 git_checkout_options VAR_9 = VAR_2;

 VAR_9.checkout_strategy = VAR_1;

 FUNC_3(
  "empty_standard_repo/.gitattributes",
  "* compress\n");


 FUNC_17("streamed_file", VAR_4);


 FUNC_4(FUNC_14(&VAR_5, VAR_3));
 FUNC_4(FUNC_10(VAR_5, "streamed_file"));
 FUNC_4(FUNC_13(VAR_5));


 FUNC_0(VAR_6 = FUNC_12(VAR_5, "streamed_file", 0));

 FUNC_4(FUNC_7(&VAR_7, VAR_3, &VAR_6->id));
 FUNC_1(VAR_4, FUNC_8(VAR_7));


 FUNC_5(FUNC_16("empty_standard_repo/streamed_file"));
 FUNC_4(FUNC_9(VAR_3, VAR_5, &VAR_9));


 FUNC_5(FUNC_15("empty_standard_repo/streamed_file", &VAR_8));
 FUNC_2((VAR_4 * VAR_0), VAR_8.st_size);

 FUNC_11(VAR_5);
 FUNC_6(VAR_7);
}
