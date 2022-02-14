
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_merge_options ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct merge_index_entry*,int) ;
 int FUNC_4 (int **,int ,char*,char*,int *) ;
 int VAR_1 ;

void FUNC_5(void)
{
 git_index *VAR_2;
 git_merge_options VAR_3 = VAR_0;

 struct merge_index_entry VAR_4[] = {
  { 0100644, "49130a28ef567af9a6a6104c38773fedfa5f9742", 2, "dir-10" },
  { 0100644, "6c06dcd163587c2cc18be44857e0b71116382aeb", 3, "dir-10" },
  { 0100644, "43aafd43bea779ec74317dc361f45ae3f532a505", 0, "dir-6" },
  { 0100644, "a031a28ae70e33a641ce4b8a8f6317f1ab79dee4", 3, "dir-7" },
  { 0100644, "5012fd565b1393bdfda1805d4ec38ce6619e1fd1", 1, "dir-7/file.txt" },
  { 0100644, "a5563304ddf6caba25cb50323a2ea6f7dbfcadca", 2, "dir-7/file.txt" },
  { 0100644, "e9ad6ec3e38364a3d07feda7c4197d4d845c53b5", 0, "dir-8" },
  { 0100644, "3ef4d30382ca33fdeba9fda895a99e0891ba37aa", 2, "dir-9" },
  { 0100644, "fc4c636d6515e9e261f9260dbcf3cc6eca97ea08", 1, "dir-9/file.txt" },
  { 0100644, "76ab0e2868197ec158ddd6c78d8a0d2fd73d38f9", 3, "dir-9/file.txt" },
  { 0100644, "5c2411f8075f48a6b2fdb85ebc0d371747c4df15", 0, "file-1/new" },
  { 0100644, "a39a620dae5bc8b4e771cd4d251b7d080401a21e", 1, "file-2" },
  { 0100644, "d963979c237d08b6ba39062ee7bf64c7d34a27f8", 2, "file-2" },
  { 0100644, "5c341ead2ba6f2af98ce5ec3fe84f6b6d2899c0d", 0, "file-2/new" },
  { 0100644, "9efe7723802d4305142eee177e018fee1572c4f4", 0, "file-3/new" },
  { 0100644, "bacac9b3493509aa15e1730e1545fc0919d1dae0", 1, "file-4" },
  { 0100644, "7663fce0130db092936b137cabd693ec234eb060", 3, "file-4" },
  { 0100644, "e49f917b448d1340b31d76e54ba388268fd4c922", 0, "file-4/new" },
  { 0100644, "cab2cf23998b40f1af2d9d9a756dc9e285a8df4b", 2, "file-5/new" },
  { 0100644, "f5504f36e6f4eb797a56fc5bac6c6c7f32969bf2", 3, "file-5/new" },
 };

 FUNC_1(FUNC_4(&VAR_2, VAR_1, "df_side1", "df_side2", &VAR_3));

 FUNC_0(FUNC_3(VAR_2, VAR_4, 20));

 FUNC_2(VAR_2);
}
