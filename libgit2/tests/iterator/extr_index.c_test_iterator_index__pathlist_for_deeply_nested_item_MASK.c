
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int length; scalar_t__ contents; } ;
typedef TYPE_2__ git_vector ;
struct TYPE_10__ {char** strings; int count; } ;
struct TYPE_12__ {void* flags; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 void* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,size_t,char const**,size_t,char const**) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int,int *) ;
 int FUNC_11 (TYPE_2__*,char*) ;

void FUNC_12(void)
{
 git_iterator *VAR_3;
 git_iterator_options VAR_4 = VAR_1;
 git_index *VAR_5;
 git_vector VAR_6;

 FUNC_0(FUNC_10(&VAR_6, 5, ((void*)0)));

 VAR_2 = FUNC_1("icase");
 FUNC_0(FUNC_7(&VAR_5, VAR_2));

 FUNC_2(VAR_5, ((void*)0), 3);


 {
  const char *VAR_7[] = { "item1/item3/item5/item7" };
  size_t VAR_8 = 1;

  FUNC_8(&VAR_6);
  FUNC_0(FUNC_11(&VAR_6, "item1/item3/item5/item7"));

  VAR_4.pathlist.strings = (char **)VAR_6.contents;
  VAR_4.pathlist.count = VAR_6.length;
  VAR_4.flags = VAR_0;

  FUNC_0(FUNC_5(&VAR_3, VAR_2, VAR_5, &VAR_4));
  FUNC_3(VAR_3, VAR_8, VAR_7, VAR_8, VAR_7);
  FUNC_6(VAR_3);
 }

 {
  const char *VAR_9[] = {
   "item1/item3/item5/item0", "item1/item3/item5/item1",
   "item1/item3/item5/item2", "item1/item3/item5/item3",
   "item1/item3/item5/item4", "item1/item3/item5/item5",
   "item1/item3/item5/item6", "item1/item3/item5/item7",
  };
  size_t VAR_10 = 8;

  FUNC_8(&VAR_6);
  FUNC_0(FUNC_11(&VAR_6, "item1/item3/item5/"));

  VAR_4.pathlist.strings = (char **)VAR_6.contents;
  VAR_4.pathlist.count = VAR_6.length;
  VAR_4.flags = VAR_0;

  FUNC_0(FUNC_5(&VAR_3, VAR_2, VAR_5, &VAR_4));
  FUNC_3(VAR_3, VAR_10, VAR_9, VAR_10, VAR_9);
  FUNC_6(VAR_3);
 }

 {
  const char *VAR_11[] = {
   "item1/item3/item0",
   "item1/item3/item1/item0", "item1/item3/item1/item1",
   "item1/item3/item1/item2", "item1/item3/item1/item3",
   "item1/item3/item1/item4", "item1/item3/item1/item5",
   "item1/item3/item1/item6", "item1/item3/item1/item7",
   "item1/item3/item2",
   "item1/item3/item3/item0", "item1/item3/item3/item1",
   "item1/item3/item3/item2", "item1/item3/item3/item3",
   "item1/item3/item3/item4", "item1/item3/item3/item5",
   "item1/item3/item3/item6", "item1/item3/item3/item7",
   "item1/item3/item4",
   "item1/item3/item5/item0", "item1/item3/item5/item1",
   "item1/item3/item5/item2", "item1/item3/item5/item3",
   "item1/item3/item5/item4", "item1/item3/item5/item5",
   "item1/item3/item5/item6", "item1/item3/item5/item7",
   "item1/item3/item6",
   "item1/item3/item7/item0", "item1/item3/item7/item1",
   "item1/item3/item7/item2", "item1/item3/item7/item3",
   "item1/item3/item7/item4", "item1/item3/item7/item5",
   "item1/item3/item7/item6", "item1/item3/item7/item7",
  };
  size_t VAR_12 = 36;

  FUNC_8(&VAR_6);
  FUNC_0(FUNC_11(&VAR_6, "item1/item3/"));

  VAR_4.pathlist.strings = (char **)VAR_6.contents;
  VAR_4.pathlist.count = VAR_6.length;
  VAR_4.flags = VAR_0;

  FUNC_0(FUNC_5(&VAR_3, VAR_2, VAR_5, &VAR_4));
  FUNC_3(VAR_3, VAR_12, VAR_11, VAR_12, VAR_11);
  FUNC_6(VAR_3);
 }




 {
  const char *VAR_13[] = {
   "item0", "item1/item2", "item5/item7/item4", "item6",
   "item7/item3/item1/item6" };
  size_t VAR_14 = 5;

  FUNC_8(&VAR_6);
  FUNC_0(FUNC_11(&VAR_6, "item7/item3/item1/item6"));
  FUNC_0(FUNC_11(&VAR_6, "item6"));
  FUNC_0(FUNC_11(&VAR_6, "item5/item7/item4"));
  FUNC_0(FUNC_11(&VAR_6, "item1/item2"));
  FUNC_0(FUNC_11(&VAR_6, "item0"));


  FUNC_0(FUNC_11(&VAR_6, "item2/"));
  FUNC_0(FUNC_11(&VAR_6, "itemN"));
  FUNC_0(FUNC_11(&VAR_6, "item1/itemA"));
  FUNC_0(FUNC_11(&VAR_6, "item5/item3/item4/"));

  VAR_4.pathlist.strings = (char **)VAR_6.contents;
  VAR_4.pathlist.count = VAR_6.length;
  VAR_4.flags = VAR_0;

  FUNC_0(FUNC_5(&VAR_3, VAR_2, VAR_5, &VAR_4));
  FUNC_3(VAR_3, VAR_14, VAR_13, VAR_14, VAR_13);
  FUNC_6(VAR_3);
 }

 FUNC_4(VAR_5);
 FUNC_9(&VAR_6);
}
