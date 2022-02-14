
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int length; scalar_t__ contents; } ;
typedef TYPE_2__ git_vector ;
struct TYPE_14__ {char** strings; int count; } ;
struct TYPE_16__ {void* flags; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
struct TYPE_17__ {int stat_calls; } ;
typedef TYPE_4__ git_iterator ;


 void* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_4__*,size_t,char const**,size_t,char const**) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_4__**,int ,int *,int *,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int,int *) ;
 int FUNC_11 (TYPE_2__*,char*) ;

void FUNC_12(void)
{
 git_iterator *VAR_3;
 git_iterator_options VAR_4 = VAR_1;
 git_vector VAR_5;

 FUNC_1(FUNC_10(&VAR_5, 5, ((void*)0)));

 VAR_2 = FUNC_2("icase");
 FUNC_3(FUNC_7(VAR_2), 3);




 {
  const char *VAR_6[] = { "item1/item3/item5/item7" };
  size_t VAR_7 = 1;

  FUNC_8(&VAR_5);
  FUNC_1(FUNC_11(&VAR_5, "item1/item3/item5/item7"));

  VAR_4.pathlist.strings = (char **)VAR_5.contents;
  VAR_4.pathlist.count = VAR_5.length;
  VAR_4.flags = VAR_0;

  FUNC_1(FUNC_5(&VAR_3, VAR_2, ((void*)0), ((void*)0), &VAR_4));
  FUNC_4(VAR_3, VAR_7, VAR_6, VAR_7, VAR_6);
  FUNC_0(4, VAR_3->stat_calls);
  FUNC_6(VAR_3);
 }




 {
  const char *VAR_8[] = {
   "item1/item3/item5/item0", "item1/item3/item5/item1",
   "item1/item3/item5/item2", "item1/item3/item5/item3",
   "item1/item3/item5/item4", "item1/item3/item5/item5",
   "item1/item3/item5/item6", "item1/item3/item5/item7",
  };
  size_t VAR_9 = 8;

  FUNC_8(&VAR_5);
  FUNC_1(FUNC_11(&VAR_5, "item1/item3/item5/"));

  VAR_4.pathlist.strings = (char **)VAR_5.contents;
  VAR_4.pathlist.count = VAR_5.length;
  VAR_4.flags = VAR_0;

  FUNC_1(FUNC_5(&VAR_3, VAR_2, ((void*)0), ((void*)0), &VAR_4));
  FUNC_4(VAR_3, VAR_9, VAR_8, VAR_9, VAR_8);
  FUNC_0(11, VAR_3->stat_calls);
  FUNC_6(VAR_3);
 }




 {
  const char *VAR_10[] = {
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
  size_t VAR_11 = 36;

  FUNC_8(&VAR_5);
  FUNC_1(FUNC_11(&VAR_5, "item1/item3/"));

  VAR_4.pathlist.strings = (char **)VAR_5.contents;
  VAR_4.pathlist.count = VAR_5.length;
  VAR_4.flags = VAR_0;

  FUNC_1(FUNC_5(&VAR_3, VAR_2, ((void*)0), ((void*)0), &VAR_4));
  FUNC_4(VAR_3, VAR_11, VAR_10, VAR_11, VAR_10);
  FUNC_0(42, VAR_3->stat_calls);
  FUNC_6(VAR_3);
 }




 {
  const char *VAR_12[] = {
   "item0", "item1/item2", "item5/item7/item4", "item6",
   "item7/item3/item1/item6" };
  size_t VAR_13 = 5;

  FUNC_8(&VAR_5);
  FUNC_1(FUNC_11(&VAR_5, "item7/item3/item1/item6"));
  FUNC_1(FUNC_11(&VAR_5, "item6"));
  FUNC_1(FUNC_11(&VAR_5, "item5/item7/item4"));
  FUNC_1(FUNC_11(&VAR_5, "item1/item2"));
  FUNC_1(FUNC_11(&VAR_5, "item0"));


  FUNC_1(FUNC_11(&VAR_5, "item2/"));
  FUNC_1(FUNC_11(&VAR_5, "itemN"));
  FUNC_1(FUNC_11(&VAR_5, "item1/itemA"));
  FUNC_1(FUNC_11(&VAR_5, "item5/item3/item4/"));

  VAR_4.pathlist.strings = (char **)VAR_5.contents;
  VAR_4.pathlist.count = VAR_5.length;
  VAR_4.flags = VAR_0;

  FUNC_1(FUNC_5(&VAR_3, VAR_2, ((void*)0), ((void*)0), &VAR_4));
  FUNC_4(VAR_3, VAR_13, VAR_12, VAR_13, VAR_12);
  FUNC_0(14, VAR_3->stat_calls);
  FUNC_6(VAR_3);
 }

 FUNC_9(&VAR_5);
}
