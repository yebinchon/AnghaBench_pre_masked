
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct checkout_name_entry {char* member_0; char* member_1; char* member_2; } ;
struct checkout_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct checkout_index_entry*,int) ;
 int FUNC_3 (struct checkout_name_entry*,int) ;
 int FUNC_4 (char*,int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 git_checkout_options VAR_7 = VAR_3;

 struct checkout_index_entry VAR_8[] = {
  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 1, "test-one-side-one.txt" },
  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 3, "test-one-side-one.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 1, "test-one-side-two.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 2, "test-one-side-two.txt" },
  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 2, "test-one.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 3, "test-one.txt" },

  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 1, "test-two-side-one.txt" },
  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 3, "test-two-side-one.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 1, "test-two-side-two.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 2, "test-two-side-two.txt" },
  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 2, "test-two.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 3, "test-two.txt" },

  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 1, "test-three-side-one.txt" },
  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 3, "test-three-side-one.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 1, "test-three-side-two.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 2, "test-three-side-two.txt" },
  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 2, "test-three.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 3, "test-three.txt" },

  { 0100644, VAR_0, 1, "directory_file-one" },
  { 0100644, VAR_1, 2, "directory_file-one" },
  { 0100644, VAR_2, 0, "directory_file-one/file" },

  { 0100644, VAR_0, 1, "directory_file-two" },
  { 0100644, VAR_1, 0, "directory_file-two/file" },
  { 0100644, VAR_2, 3, "directory_file-two" },
 };

 struct checkout_name_entry VAR_9[] = {
  {
   "test-one-side-one.txt",
   "test-one.txt",
   "test-one-side-one.txt"
  },
  {
   "test-one-side-two.txt",
   "test-one-side-two.txt",
   "test-one.txt"
  },

  {
   "test-two-side-one.txt",
   "test-two.txt",
   "test-two-side-one.txt"
  },
  {
   "test-two-side-two.txt",
   "test-two-side-two.txt",
   "test-two.txt"
  },

  {
   "test-three-side-one.txt",
   "test-three.txt",
   "test-three-side-one.txt"
  },
  {
   "test-three-side-two.txt",
   "test-three-side-two.txt",
   "test-three.txt"
  }
 };

 VAR_7.checkout_strategy |= VAR_4;

 FUNC_2(VAR_8, 24);
 FUNC_3(VAR_9, 6);
 FUNC_0(FUNC_6(VAR_5));




 FUNC_1("merge-resolve/test-one.txt~ours",
  "Expect index contents to be written to ~ours_0");
 FUNC_1("merge-resolve/test-one.txt~theirs",
  "Expect index contents to be written to ~theirs_0");

 FUNC_1("merge-resolve/test-two.txt~ours",
  "Expect index contents to be written to ~ours_3");
 FUNC_1("merge-resolve/test-two.txt~theirs",
  "Expect index contents to be written to ~theirs_3");
 FUNC_1("merge-resolve/test-two.txt~ours_0",
  "Expect index contents to be written to ~ours_3");
 FUNC_1("merge-resolve/test-two.txt~theirs_0",
  "Expect index contents to be written to ~theirs_3");
 FUNC_1("merge-resolve/test-two.txt~ours_1",
  "Expect index contents to be written to ~ours_3");
 FUNC_1("merge-resolve/test-two.txt~theirs_1",
  "Expect index contents to be written to ~theirs_3");
 FUNC_1("merge-resolve/test-two.txt~ours_2",
  "Expect index contents to be written to ~ours_3");
 FUNC_1("merge-resolve/test-two.txt~theirs_2",
  "Expect index contents to be written to ~theirs_3");

 FUNC_1("merge-resolve/test-three.txt~Ours",
  "Expect case insensitive filesystems to create ~ours_0");
 FUNC_1("merge-resolve/test-three.txt~THEIRS",
  "Expect case insensitive filesystems to create ~theirs_0");

 FUNC_1("merge-resolve/directory_file-one~ours",
  "Index contents written to ~ours_0 in this D/F conflict");
 FUNC_1("merge-resolve/directory_file-two~theirs",
  "Index contents written to ~theirs_0 in this D/F conflict");

 FUNC_0(FUNC_5(VAR_6, VAR_5, &VAR_7));

 FUNC_4("test-one.txt~ours_0",
  0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11");
 FUNC_4("test-one.txt~theirs_0",
  0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07");

 FUNC_4("test-two.txt~ours_3",
  0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11");
 FUNC_4("test-two.txt~theirs_3",
  0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07");
 FUNC_4("test-three.txt~ours",
  0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11");
 FUNC_4("test-three.txt~theirs",
  0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07");


 FUNC_4("directory_file-one~ours_0", 0100644, VAR_1);
 FUNC_4("directory_file-two~theirs_0", 0100644, VAR_2);
}
