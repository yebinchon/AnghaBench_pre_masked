
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int length; scalar_t__ contents; } ;
typedef TYPE_2__ git_vector ;
struct TYPE_9__ {char** strings; int count; } ;
struct TYPE_11__ {char* start; char* end; void* flags; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,size_t,char const**,size_t,char const**) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int,int *) ;
 int FUNC_9 (TYPE_2__*,char*) ;

void FUNC_10(void)
{
 git_iterator *VAR_5;
 git_iterator_options VAR_6 = VAR_2;
 git_index *VAR_7;
 git_vector VAR_8;

 FUNC_0(FUNC_8(&VAR_8, 100, &VAR_4));
 FUNC_0(FUNC_9(&VAR_8, "a"));
 FUNC_0(FUNC_9(&VAR_8, "B"));
 FUNC_0(FUNC_9(&VAR_8, "c"));
 FUNC_0(FUNC_9(&VAR_8, "D"));
 FUNC_0(FUNC_9(&VAR_8, "e"));
 FUNC_0(FUNC_9(&VAR_8, "k/1"));
 FUNC_0(FUNC_9(&VAR_8, "k/a"));
 FUNC_0(FUNC_9(&VAR_8, "L/1"));

 VAR_3 = FUNC_1("icase");

 FUNC_0(FUNC_6(&VAR_7, VAR_3));

 VAR_6.pathlist.strings = (char **)VAR_8.contents;
 VAR_6.pathlist.count = VAR_8.length;


 {
  const char *VAR_9[] = {
   "B", "D", "L/1", "a", "c", "e", "k/1", "k/a" };
  size_t VAR_10 = 8;

  VAR_6.start = ((void*)0);
  VAR_6.end = ((void*)0);
  VAR_6.flags = VAR_0;

  FUNC_0(FUNC_4(&VAR_5, VAR_3, VAR_7, &VAR_6));
  FUNC_2(VAR_5, VAR_10, VAR_9, VAR_10, VAR_9);
  FUNC_5(VAR_5);
 }


 {
  const char *VAR_11[] = {
   "a", "B", "c", "D", "e", "k/1", "k/a", "L/1" };
  size_t VAR_12 = 8;

  VAR_6.start = ((void*)0);
  VAR_6.end = ((void*)0);
  VAR_6.flags = VAR_1;

  FUNC_0(FUNC_4(&VAR_5, VAR_3, VAR_7, &VAR_6));
  FUNC_2(VAR_5, VAR_12, VAR_11, VAR_12, VAR_11);
  FUNC_5(VAR_5);
 }


 {
  const char *VAR_13[] = { "c", "e", "k/1", "k/a" };
  size_t VAR_14 = 4;

  VAR_6.start = "c";
  VAR_6.end = ((void*)0);
  VAR_6.flags = VAR_0;

  FUNC_0(FUNC_4(&VAR_5, VAR_3, VAR_7, &VAR_6));
  FUNC_2(VAR_5, VAR_14, VAR_13, VAR_14, VAR_13);
  FUNC_5(VAR_5);
 }


 {
  const char *VAR_15[] = { "c", "D", "e", "k/1", "k/a", "L/1" };
  size_t VAR_16 = 6;

  VAR_6.start = "c";
  VAR_6.end = ((void*)0);
  VAR_6.flags = VAR_1;

  FUNC_0(FUNC_4(&VAR_5, VAR_3, VAR_7, &VAR_6));
  FUNC_2(VAR_5, VAR_16, VAR_15, VAR_16, VAR_15);
  FUNC_5(VAR_5);
 }


 {
  const char *VAR_17[] = { "B", "D", "L/1", "a", "c", "e" };
  size_t VAR_18 = 6;

  VAR_6.start = ((void*)0);
  VAR_6.end = "e";
  VAR_6.flags = VAR_0;

  FUNC_0(FUNC_4(&VAR_5, VAR_3, VAR_7, &VAR_6));
  FUNC_2(VAR_5, VAR_18, VAR_17, VAR_18, VAR_17);
  FUNC_5(VAR_5);
 }


 {
  const char *VAR_19[] = { "a", "B", "c", "D", "e" };
  size_t VAR_20 = 5;

  VAR_6.start = ((void*)0);
  VAR_6.end = "e";
  VAR_6.flags = VAR_1;

  FUNC_0(FUNC_4(&VAR_5, VAR_3, VAR_7, &VAR_6));
  FUNC_2(VAR_5, VAR_20, VAR_19, VAR_20, VAR_19);
  FUNC_5(VAR_5);
 }


 {
  const char *VAR_21[] = { "c", "e", "k/1" };
  size_t VAR_22 = 3;

  VAR_6.start = "c";
  VAR_6.end = "k/D";
  VAR_6.flags = VAR_0;

  FUNC_0(FUNC_4(&VAR_5, VAR_3, VAR_7, &VAR_6));
  FUNC_2(VAR_5, VAR_22, VAR_21, VAR_22, VAR_21);
  FUNC_5(VAR_5);
 }


 {
  const char *VAR_23[] = { "k/1" };
  size_t VAR_24 = 1;

  VAR_6.start = "k";
  VAR_6.end = "k/D";
  VAR_6.flags = VAR_0;

  FUNC_0(FUNC_4(&VAR_5, VAR_3, VAR_7, &VAR_6));
  FUNC_2(VAR_5, VAR_24, VAR_23, VAR_24, VAR_23);
  FUNC_5(VAR_5);
 }


 {
  const char *VAR_25[] = { "c", "D", "e", "k/1", "k/a" };
  size_t VAR_26 = 5;

  VAR_6.start = "c";
  VAR_6.end = "k/D";
  VAR_6.flags = VAR_1;

  FUNC_0(FUNC_4(&VAR_5, VAR_3, VAR_7, &VAR_6));
  FUNC_2(VAR_5, VAR_26, VAR_25, VAR_26, VAR_25);
  FUNC_5(VAR_5);
 }


 {
  const char *VAR_27[] = { "k/1", "k/a" };
  size_t VAR_28 = 2;

  VAR_6.start = "k";
  VAR_6.end = "k/D";
  VAR_6.flags = VAR_1;

  FUNC_0(FUNC_4(&VAR_5, VAR_3, VAR_7, &VAR_6));
  FUNC_2(VAR_5, VAR_28, VAR_27, VAR_28, VAR_27);
  FUNC_5(VAR_5);
 }

 FUNC_3(VAR_7);
 FUNC_7(&VAR_8);
}
