
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; char* member_3; int path; int oid_str; int member_2; } ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_11__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
struct TYPE_13__ {int path; int id; } ;
typedef TYPE_4__ git_index_entry ;
typedef int expected ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_4__ const**,int *) ;
 int FUNC_6 (int **,int ,int *,int *,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int ) ;

void FUNC_9(void)
{
 git_iterator *VAR_4;
 const git_index_entry *VAR_5;
 git_iterator_options VAR_6 = VAR_1;
 git_oid VAR_7 = {{0}};
 size_t VAR_8;

 struct merge_index_entry VAR_9[] = {
  { 0100644, "ffb36e513f5fdf8a6ba850a20142676a2ac4807d", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "7c7e08f9559d9e1551b91e1cf68f1d0066109add", 0, "oyster.txt" },
  { 0100644, "898d12687fb35be271c27c795a6b32c8b51da79e", 0, "veal.txt" },
 };

 VAR_3 = FUNC_4("merge-recursive");


 FUNC_3(FUNC_6(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_6));

 for (VAR_8 = 0; VAR_8 < sizeof(VAR_9) / sizeof(struct merge_index_entry); VAR_8++) {
  FUNC_3(FUNC_5(&VAR_5, VAR_4));

  FUNC_1(&VAR_7, &VAR_5->id);
  FUNC_2(VAR_9[VAR_8].path, VAR_5->path);
 }
 FUNC_0(VAR_2, FUNC_5(&VAR_5, VAR_4));
 FUNC_7(VAR_4);


 VAR_6.flags |= VAR_0;
 FUNC_3(FUNC_6(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_6));

 for (VAR_8 = 0; VAR_8 < sizeof(VAR_9) / sizeof(struct merge_index_entry); VAR_8++) {
  FUNC_3(FUNC_5(&VAR_5, VAR_4));

  FUNC_3(FUNC_8(&VAR_7, VAR_9[VAR_8].oid_str));
  FUNC_1(&VAR_7, &VAR_5->id);
  FUNC_2(VAR_9[VAR_8].path, VAR_5->path);
 }
 FUNC_0(VAR_2, FUNC_5(&VAR_5, VAR_4));
 FUNC_7(VAR_4);
}
